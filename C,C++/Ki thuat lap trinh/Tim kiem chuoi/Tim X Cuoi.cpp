
#include <stdio.h> 
#define MAX 100
void NhapMang(int a[],int n);
void XuatMang(int a[],int n);
void KiemTra(int &n);
int ViTriXCuoi(int a[],int n,int x);

int ViTriXCuoi(int a[],int n,int x)
{
	for(int i=n-1; i>=0; i--)
	if(a[i]==x)
	return i;
	return -1;
}

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
int main ()
{
	int a [MAX];
	int x,n;
	printf("Moi nhap so nguyen tu [1...%d]\n",MAX);
	KiemTra(n);
	NhapMang(a,n); 
	XuatMang(a,n);
	printf("\nNhap vao X = \n");
	scanf("%d",&x);
	printf("\nVi tri cuoi cung X xuat hien A[%d]",ViTriXCuoi(a,n,x));
	return 0; 
}

