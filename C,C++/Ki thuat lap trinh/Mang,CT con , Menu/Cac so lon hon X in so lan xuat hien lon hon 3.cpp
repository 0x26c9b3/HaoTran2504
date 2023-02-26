#include <stdio.h>
#include<conio.h>
#define MAX 1000	
void NhapKichThuoc(int& n,const char* str, int min, int max)
{
	do{
		printf("\n Moi nhap %s [%d...%d]:", str, min, max);
		scanf("%d", &n);
		if(n<min || n>max) printf("Ban nhap sai....");
	}while(n<min || n>max);
}
void NhapMang(int a [],int n)
{
	for ( int i = 0 ; i <n ; i++)
	{
		printf("Nhap vao phan tu tai vi tri A[%d]: ",i);	
		scanf("%d",&a[i]);
	}
}
void XuatMang ( int a [],int n)
{
	printf("Cac gia tri trong mang:\n ");
	for ( int i = 0 ; i < n ; i++)
	{
		printf("%d\t",a[i]); 
	}
}
int DemUS (int n)
{
		int dem=0;
	for(int i=1; i<=n; i++)
		if(n%i==0)
			dem++;
			return dem; 
}
int KtSNT(int n)
{
	if(DemUS(n)==2) return 1;
	return 0;
}
int CacSoLonHonX(int a[],int n,int x)
{
	int dem = 0;
	for (int i = 0;i <n;i++)
		if ((a[i]>x)&&(KtSNT(a[i])==1))
		dem++;
	return dem; 
}
int DemXH(int a[],int n,int xh)
{
	int dem=0;
	for(int i = 0 ; i <n;i++)
		{
		if(a[i]==xh)
		dem++; 
		}
		return dem; 
 } 
void InSoXuatHien(int a[],int n)
{
	for ( int i = 0 ; i <n ;i++)
		if (DemXH(a,n,a[i])>=3)
		printf("%d\t",a[i]);
}
void TaoMangChan(int a[],int n,int b[],int &m)
{
	m=0;
	for ( int i = 0 ;i<n;i++)
	if(a[i]%2==0 &&a[i]!=0)
	{
		b[m]=a[i];
		m=m+1;
	}
 } 
int main()
{
	int a[MAX];
	int n;
	
	int b[MAX];
	int m;

	NhapKichThuoc(n,"kich thuoc n", 1, MAX);
	NhapMang(a,n);
	XuatMang(a,n);
	
	int x;
	printf("\nNhap X=");
	scanf("%d",&x);

	printf("Co %d so nguyen to > %d trong mang A\n",CacSoLonHonX(a,n,x),x);
	
	printf("So co so lan xuat hien nhieu hon 3 lan la:\n");
	InSoXuatHien(a,n);
	
	TaoMangChan(a,n,b,m);
	printf("Mang cac so chan:\n");
	XuatMang(b,m);
	
	
	return 0;
}
