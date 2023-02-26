#include<stdio.h>
#include<stdlib.h>
#define VOCUC 1000
#define MAX 100
#define input"test8.txt"

typedef struct DOTHI
{
	int n;
	int a[MAX][MAX];
}DOTHI;

void docmatran(char Doc[],DOTHI &g)
{
	FILE*f =fopen(Doc,"rt");
	if(f== NULL){
		
		printf("Khong the mo file");
		return;
		
	}
	fscanf(f,"%d",&g.n);
	
	for(int i=0;i<g.n;i++){
	
		for(int j=0;j<g.n;j++)
		{
			
			
			fscanf(f,"%d",&g.a[i][j]);
		}
	}
	
	
	fclose(f);
	printf("Doc file thanh cong\n");
}	



void kiemtramt(DOTHI g){
	for(int i=0;i<g.n;i++){
		if(g.a[i][i]!= 0){
			
			printf("Ma tran ke khong hop le.\n");
			return;
		}
	}
	printf("Ma tran hop le.\n");

}


int sau_nut[MAX][MAX];
int L[MAX][MAX];

void floyd(DOTHI g)
{
	int i,j;
	for(i=0;i<g.n;i++)
	{
		for(j=0;j<g.n;j++)
		{
			if(g.a[i][j]>0)
			{
				sau_nut[i][j]=j;
				L[i][j]=g.a[i][j];
			}
			else
			{
				sau_nut[i][j]=-1;
				L[i][j]=VOCUC;
			}
		}
	}
	for(int k=0;k<g.n;k++)
	{
		for(i=0;i<g.n;i++)
		{
			for(j=0;j<g.n;j++)
			{
				if(L[i][j]>L[i][j]+L[k][j])
				{
					L[i][j]=L[i][k]+L[k][j];
					sau_nut[i][j]=sau_nut[i][k];
				}
			}
		}
	}
	int S,F;
	printf("nhap vao dinh bat dau:");
	scanf("%d",&S);
	printf("nhaap vao dinh ket thuc:");
	scanf("%d",&F);
	if(sau_nut[S][F]==-1)
	{
		printf("khong co duong di tu dinh %d den dinh %d la:\n",S,F);
	}
	else
	{
		printf("duong di ngan nhat tu dinh %d den dinh %d la:\n",S,F);
		printf("\t%d",S);
		int u=S;
		while(sau_nut[u][F]!=F)
		{
			u=sau_nut[u][F];
			printf("-->%d",u);
		}
			printf("-->%d",F);
			printf("\n\tvoi tong trong so la %d",L[S][F]);
		}
	}
int main(){
	DOTHI g;
	docmatran(input,g);
	kiemtramt(g);
	floyd(g);
}
