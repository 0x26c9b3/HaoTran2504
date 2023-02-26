#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <cstdlib.h>
#define MAX 100
void NhapMang(float a[MAX][MAX],int &n)
{
	printf("Moi ban nhap vao kich thuoc mang [Hang] x [Cot] :");
	scanf("%d",&n);
	for (int i = 0 ;i< n ;i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
				printf("Moi ban nhap vao phan tu A[%d][%d]:",i,j);
				scanf("%f",&a[i][j]);
	
		}
	}
}

float TongCacPhanTu(float a[MAX][MAX],int n)
{	
	float tong = 0;
	for ( int i = 0 ;i <n;i++)
	tong+=a[i][i];

return tong;
}
void XuatMang(float a[MAX][MAX],int n)
{
	for (int i = 0 ;i< n ;i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
				printf("%.1f",a[i][j]);
				printf("\t");
		}printf("\n");
	}
}
int main()
{
	float a[MAX][MAX];
	int n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nTong cac phan tu nam tren duong cheo phu: %.2f",TongCacPhanTu(a,n));
	
 return 0;
}

