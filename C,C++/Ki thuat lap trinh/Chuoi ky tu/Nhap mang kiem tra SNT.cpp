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
		printf("ko hop le vui long nhap lai");
		}while ((n<0)||(n>MAX));
}
void NhapMang(int a [],int n)
{
	for ( int i = 0 ; i <n ; i++)
	{
		printf("Nhap vao phan tu tai vi tri %d:\t ",i);	
		scanf("%d",&a[i]);
	}
}
void XuatMang ( int a [],int n)
{
	printf("Cac gia tri trong mang a: ");
	for ( int i = 0 ; i < n ; i++)
	{
		printf("%d\t",a[i]); 
	}
}
int DemUS(int a[],int n)
{
	int dem=0;
	for (int i = 1;i < n ; i ++)	
	{
		for (int u = 1 ;u <=n  ; u++)
		{
		if( a[i] % u == 0)
		dem++;
		}
	}
	return dem;
 }
 int LaSNT(int a[],int n)
 {
 	if (DemUS(a,n)==2)
 	return 1;
 	else
 	return 0;
}
void TonTaiSNT ( int a [],int n)
{
	if (LaSNT(a,n)==1)
	printf("Co ton tai SNT");
	else
	printf("Ko  ton tai SNT");
}
int main ()
{
	int a [MAX];
	int n;
	printf("Moi nhap so nguyen tu [1...%d]\n",MAX);
	KiemTra(n);
	NhapMang(a,n); 
	XuatMang(a,n);
	TonTaiSNT(a,n);
	return 0; 
}
  
