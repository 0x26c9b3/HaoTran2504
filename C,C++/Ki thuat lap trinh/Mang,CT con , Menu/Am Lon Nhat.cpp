#include <stdio.h> 
#define MAX 100
void NhapMang(int a[],int n);
void XuatMang(int a[],int n);
void KiemTra(int &n);
void KiemTra(int &n)
{	
	do{
		printf("\nSo luong phan tu cua mang = ");
		scanf("%d",&n);
		if ((n<0)||(n>MAX))
		printf("\nVui long nhap lai");
		}while ((n<0)||(n>MAX));
}
void NhapMang(int a [],int n)
{
	for ( int i = 0 ; i <n ; i++)
	{
		printf("\nNhap vao phan tu tai vi tri A[%d]:\t ",i);	
		scanf("%d",&a[i]);
	}
}
void XuatMang ( int a [],int n)
{
	printf("\nCac gia tri trong mang a: ");
	for ( int i = 0 ; i < n ; i++)
	{
		printf("%d\t",a[i]); 
	}
} 	
int TimVTAmMax (int a[],int n)
{
	int max = 0;
	for ( int i = 1;i<n;i++)
	{
		while (a[i]<0)
			{
			if (a[i]>a[max])
			max = i;
			}
	}
	return max;
}
int main ()
{
	int a [MAX];
	int n;
	printf("Moi nhap so nguyen tu [1...%d]\n",MAX);
	KiemTra(n);
	NhapMang(a,n); 
	XuatMang(a,n);
	printf("\nPhan tu am lon nhat nam o vi tri A[%d]",TimVTAmMax(a,n));
		return 0; 
}
  
