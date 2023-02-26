#include <stdio.h>
#include <stdbool.h> 
#define MAX 100

void NhapMang(int *a,int n)
{
	for ( int i = 0 ; i < n ; i ++)
	{
		printf("Nhap a[%d]",i);
		scanf("%d",(a+i));
	}
}
void XuatMang(int*a ,int n)
{
	for(int i = 0 ;i<n;i++)
	printf("%4d",*(a+i));
}

void sortArray(int *a, int n) 
{
	for (int i = 0; i < n; i++) 
	{
		for (int j = i + 1; j < n; j++)
		 {
			if (*(a+i) > *(a+j))	
			 {
				int temp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = temp;
			}
		}
	}
}
void swap(int &x,int &y)
{
	int temp = x;
	x=y;
	y=temp;
}
void QuickSort(int *a,int n)
{
	for (int i = 0;i <n;i++)
	{
		for (int j = i+1;j <n;j++)
		{
			if (*(a+i)>*(a+j))
			swap(*(a+i),*(a+j));
		}printf ("%4d",*(a+i));
	}
}
bool soCP(int n){
  int i = 0;
  while(i*i <= n){
        if(i*i == n){
            return true;
        }
        ++i;
    }
    return false;
}
int SoCPdautien(int *a,int n)
{
	for (int i =0 ; i < n ;i ++)
	{
			if (soCP(*(a+i))==true)
			return *(a+i);
	}return -1;
}
int SoCPMax(int *a,int n)
{
	int	max = -1;
	for(int i =0 ;i <n;i++)
	{
		if(soCP(*(a+i)) == true && *(a+i)> max)
		max = *(a+i);
	}
	return max;
}

int main ()
{
	int *a,n;
	printf("Nhap n:");
	scanf("%d",&n);
	a = new int [n];
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nMang sau khi rut gon: ");
//	sortArray(a, n);
	QuickSort(a,n);
	XuatMang(a,n);
	printf ("\n So CP dau tien : %d",SoCPdautien(a,n));
	printf("\n So chinh phuong MAX : %d",SoCPMax(a,n));
	return 0;	
}

