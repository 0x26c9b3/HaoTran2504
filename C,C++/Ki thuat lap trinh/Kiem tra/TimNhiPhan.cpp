#include <stdio.h>
void Nhap(int a[],int n)
{
	for (int i =0 ;i <n ;i ++)
		{
			printf("\n Nhap a[%d]",i);
			scanf("%d",a[i]);
		}
}
int TimMax(int a[],int n)
{
	int max = a[0];
	for (int i = 0 ; i < n ; i++)
	{
		if(a[i]>max);
		max = a[i];	
	}return max;
}
int ChatThu(int a[],int n,int x)
{	int doan;
	int tongdoan;
	for (int i = 0; i <n;i++)
	{	if(a[i]/x>0)
		a[i] / x = doan;
		tongdoan+=doan;
	}return tongdoan;
}
int Tim(int a[],int n,int k,int x)
{	
	int l = 1;
	int r = x;

	while (l<r)
	{
	int mid = (l+r)/2;
	if (ChatThu(a,n,x)>k)
	l = mid+1;
	if(ChatThu(a,n,x)<k)
	r = mid-1;
	if(ChatThu(a,n,x)==k)
	return mid; 
	}return -1;
}
int main ()
{	int n,k,a[10];
	int max;
	int x = TimMax(a,n)/2
	printf("Nhap n :");
	scanf("%d",&n);
	printf("Nhap k : ");
	scanf("%d",&k)
	Nhap(a,n);
	TimMax(a,n);
	ChatThu(a,n,x);
	Tim(a,n,k,x);
	return 0;

		
 }
