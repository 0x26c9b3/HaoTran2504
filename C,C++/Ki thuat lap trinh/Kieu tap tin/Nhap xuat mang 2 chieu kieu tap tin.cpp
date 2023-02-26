
#include <stdio.h>
#include <conio.h>
#define MAX 100

void Nhap ( FILE *f, int a[MAX][MAX],int n,int m)
{

		for ( int i = 1 ; i < n ; i ++ )
			{
				for (int j = 1 ; j < m ; j++)
				fscanf(f,"%d",&a[i][j]);
			}
}
void Xuat (FILE *f,int a[MAX][MAX],int n , int m)
{
	fprintf(f,"%d %d\n",n,m);
			for ( int i = 1 ; i < m ; i++)
			{
				for ( int j =1; j < m;j++)
				fprintf(f,"%d",a[i][j]);
				fprintf(f,"\n");
			}
		
}
//void SoLonNhatMoiHang (FILE *f,int a[MAX][MAX],n,m)
//{ 
//	int hang = 0;
//	int max=a[0][0];
//	for (int i = 0 ; i <n ;i++)
//	{
//		for(int j=0;j<m;j++)
//			{
//					if(max<a[hang][j])
//						max=a[hang][j];
//						fprintf(f3,"So lon nhat cua hang %d = %d " , hang, max);
//						hang++;
//			}
//	}	
////}
//void SoLonNhatMoiCot (FILE *f,int a[MAX][MAX],n,m)
//{ 
//	int cot = 0; 
//	int max=a[0][cot];
//	for(int i=0;i<n;i++)
//	{
//		if(max<a[i][cot])
//			max=a[i][cot];
//			fprintf(f4,"So lon nhat cua cot %d = %d " , cot , max);
//			cot++;
//	}
//}
//void DemSoLanXuatHienTrenDong(int x)
//{
//	int d , max = 0 ;
//	for ( int i = 0 ; i < n ; i ++)
//	{
//		for (int j =0 ;j < m ; j++)
//		if(a[i][j]=x)
//		d++;
//	}
//}
//void 
int main()
{
	int n,m,x,a[MAX][MAX];
	FILE *f1 , *f2;
	
	 f1 = fopen("mang2c.inp","r");
	 f2 = fopen("mang2c.out","w");
//	 f3 = fopen("maxhang.out","w");
//	 f4 = fopen("maxcot.out","w");
//////	 f5 = fopen("max.out","w");
////////	fscanf(f5,"%d",&x);
	fprintf(f1,"Nhap kich thuoc mang HANG x COT: ");
	fscanf(f1,"%d",&n);
	fscanf(f1,"%d",&m);
//	
//	SoLonNhatMoiHang(f3,a,n,m);
//	SoLonNhatMoiCot(f4,a,n,m);
	Nhap(f1,a,n,m);
	Xuat(f2,a,n,m);
//	
//
//
//	SoLonNhatMoiHang();
//	SoLonNhatMoiCot();
//	
	fclose(f1);
	fclose(f2);

	
	return 0;
	
	
	 
}
