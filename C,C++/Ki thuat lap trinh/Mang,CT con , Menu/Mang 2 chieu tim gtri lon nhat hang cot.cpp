#include <stdio.h>
void Nhapmang(int a[100][100],int &n , int &m)
{
	int i,j;
	do{
		printf("Nhap vao hang n va cot m : ");
		scanf("%d%d",&n,&m);
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
			printf("\t");
		}printf("\n");
	}
}
int SoLonNhatMoiHang (int a[100][100],int n,int m,int hang)
{ 
	
	int max=a[hang][0];
	for(int j=0;j<m;j++)
	{
		if(max<a[hang][j])
			max=a[hang][j];
	}
	return max;
}
int SoLonNhatMoiCot (int a[100][100],int n,int m,int cot)
{ 
	
	int min=[0][cot];
	for(int i=0;i<n;i++)
	{
		if(min<a[i][cot])
			min=a[i][cot];
	}
	return min;
}
void XuatCacSoLonNhat(int a[100][100],int n,int m)
{
		for (int i =0 ; i < n ; i++)
		{
				printf("\n So lon nhat cua hang %d = %d",i,SoLonNhatMoiHang(a,n,m,i));
		}
		for (int i =0 ; i < n ; i++)
		{
				printf("\n So lon nhat cua cot %d = %d",i,SoLonNhatMoiCot(a,n,m,i));
		}
}
int main()
{
	int a[100][100],n,m;
	Nhapmang(a,n,m);
	Xuatmang(a,n,m);
	XuatCacSoLonNhat(a,n,m);

return 0;	
}
