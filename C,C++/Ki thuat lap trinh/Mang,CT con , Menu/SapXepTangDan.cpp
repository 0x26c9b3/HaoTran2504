#include <stdio.h>
#define MAX 100

void NhapSoNguyen(int& sn,const char* str, int min, int max)
{
	do{
		printf("\n Moi nhap %s [%d...%d]:", str, min, max);
		scanf("%d", &sn);
		if(sn<min || sn>max) printf("Ban nhap sai....");
	}while(sn<min || sn>max);
}

void NhapMang(int a [MAX],int n)
{
	for ( int i = 0 ; i <n ; i++)
	{
		printf("Nhap vao phan tu tai vi tri A[%d]: ",i);	
		scanf("%d",&a[i]);
	}
}

void XuatMang ( int a [MAX],int n)
{
	printf("Cac gia tri trong mang a: ");
	for ( int i = 0 ; i < n ; i++)
	{
		printf("%d\t",a[i]); 
	}
} 	
void sort(int a[MAX],int n)
{
	for ( int i = 0 ; i <n-1 ; i++)
	{
		for ( int j= i +1 ; j< n ; j++)
		{
			if(a[i]>a[j])
				{
				int tam = a[i];
				a[i]=a[j];
				a[j]=tam;
				}
		}
	}
}

int TimX(int a[MAX],int n,int x)
{	
	int l = 0,r =n-1;
		int mid = (l+r)/2;

	while(l<r)
	{
	
		if (a[mid]>x) 
		r=mid -1;
		if (a[mid]<x)
		l=mid+1;
		if( a[mid]==x)
		return mid;
		mid = (l+r)/2;
	};return -1;
	
}
int TimXTT(int a[MAX],int n,int x)
{
	for (int i =0 ; i <n;i++)
	{
		if(a[i]==x)
		return i;
	}
}
int main(){
	int a[MAX],n,x;
	NhapSoNguyen(n,"so luong phan tu", 1, MAX);
	NhapMang(a,n);
	XuatMang(a,n);
	sort(a,n);
	XuatMang(a,n);
	printf("\nNhap x:");
	scanf("%d",&x);
	printf("\nVi tri cua X tim thay(binary) o tren mang la : %d",TimX(a,n,x));
	printf("\nVi tri cua X tim thay(tuyen tinh) o tren mang la : %d",TimXTT(a,n,x));
	
	return 0;
		

}
