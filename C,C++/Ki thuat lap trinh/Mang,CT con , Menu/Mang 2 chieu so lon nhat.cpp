#include <stdio.h>
void Nhapmang(int a[100][100],int &n , int &m)
{
	int i,j;
	do{
		printf("Nhap vao m va n : ");
		scanf("%d%d",&m,&n);
	}while(m<=0||n<=0);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		printf("a[%d][%d]= ",i,j);
		scanf("%d",&a[i][j]);
		}
	}
}
void Xuatmang(int a[100][100],int n,int m)
{
	int i,j;
	for (i=0;i<n;i++)
	{
		for (j = 0 ; j <m ; j++)
		{
			printf("%d",a[i][j]);
			printf("\n");
		}
	}
}

int solonnhat(int a[100][100],int n, int m)
{
	while(i<n)
	int max=a[i][0];
	for(int j=1;j<m;j++)
	{
		if(a[i][j]>max)
			max=a[i][j];
		
	}
	return max;
}
int main()
{
	int a[100][100];
	int n,m;
	Nhapmang(a,n,m);
	Xuatmang(a,n,m);
	solonnhat()
return 0;	
}
