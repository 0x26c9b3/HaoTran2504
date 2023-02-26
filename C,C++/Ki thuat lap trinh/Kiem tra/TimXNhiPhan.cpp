#include <stdio.h>
#include <math.h>
#include <conio.h>
#define MAX 100
void Nhap(int a[MAX],int n)
{
	for (int i =0;i<n;i++)
	{
		printf("Nhap vao a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void Xuat(int a[MAX],int n)
{
	for (int i =0;i<n;i++)
	{
		printf("%4d",a[i]);
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
 int main()
 {
 	int x;
 	int n;
 	int a[MAX];
 	printf("\nNhap n");
 	scanf("%d",&n);
 	printf("\nNhap x");
 	scanf("%d",&x);
 	Nhap(a,n);
 	Xuat(a,n);
 	if(TimX(a,n,x)==-1)
 	printf("Ko tim duoc X !");
 	else
 	printf("Gia tri nho nhat lon hon X = %d",a[TimX(a,n,x)+1]);
 	
return 0;
}
