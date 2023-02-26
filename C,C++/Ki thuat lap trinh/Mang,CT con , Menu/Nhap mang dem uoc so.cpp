#include <stdio.h> 
#define MAX 100
 
void NhapMang(int a[],int n);
void XuatMang(int a[],int n);
void KiemTra(int &n);

void KiemTra(int &n)
{	
	do{
		printf("So luong phan tu cua mang = ");
		scanf("%d",&n);
		if ((n<0)||(n>MAX))
		printf("Vui long nhap lai!\n");
		}while ((n<0)||(n>MAX));
}
//=======================================================================================
void NhapMang(int a [],int n)
{
	for ( int i = 0 ; i <n ; i++)
	{
		printf("Nhap vao phan tu tai vi tri %d:\t ",i);	
		scanf("%d",&a[i]);
	}
}
//=======================================================================================
void XuatMang ( int a [],int n)
{
	printf("Cac gia tri trong mang a: ");
	for ( int i = 0 ; i < n ; i++)
	{
		printf("%d\t",a[i]); 
	}
} 
//=======================================================================================
int DemSoLe ( int a[], int n)
{
	int dem = 0;
	for ( int i = 0 ; i < n ; i++ )
	{
		if ( a[i] % 2 !=0 )
		dem++;
	}
	return dem;
}
//=======================================================================================
int DemUocSoCuaX(int a[],int n, int x)
{
	int dem = 0;
	for ( int i = 0 ; i < n ; i++)
	{
		if (x%a[i]==0)
		dem++;
	}
	return dem;
}
int main ()
{
	int a [MAX];
	int n,x;
	printf("Moi nhap khoang gia tri [1...%d]\n",MAX);
	KiemTra(n);
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nSo luong cac phan tu le trong mang = %d",DemSoLe(a,n));
	printf("\nNhap vao X = \n");
	scanf("%d",&x);
	printf("\nSo luong phan tu la uoc so cua X  = %d",DemUocSoCuaX(a,n,x));

	return 0; 
}
