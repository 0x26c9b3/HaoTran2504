#include <stdio.h> 
#define MAX 100
void Nhap ( FILE *f, int a[MAX][MAX],int n,int m)
{

		for ( int i = 0 ; i < n ; i ++ )
			{
				for (int j = 0 ; j < m ; j++)
				fscanf(f,"%d",&a[i][j]);
			}
}
int TimX(FILE *f,int a[MAX][MAX],int n,int m,int x)
{
	for (int i=0;i<n;i++)
	{
		for (int j =0 ;j <m;j++)
		if (a[i][j]==x)
		return fprintf(f,"HANG %d x COT %d",i,j);
	}return fprintf(f,"%d",-1);
}
int main()
{
	int n,m,x,a[MAX][MAX];
	FILE *f1 , *f2;
	
	 f1 = fopen("find.inp","r");
	 f2 = fopen("find.out","w");

	fprintf(f1,"Nhap kich thuoc mang HANG x COT: ");
	fscanf(f1,"%d",&n);
	fscanf(f1,"%d",&m);
	
	Nhap(f1,a,n,m);
	TimX(f2,a,n,m,5);
	
	fclose(f1);
	fclose(f2);

	
	return 0;
	
	
	 
}
