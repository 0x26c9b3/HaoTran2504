#include <stdio.h>

void Xuatmang(int*a ,int n,int m)
{
	for(int i = 0 ; i<n; i++)
	{for (int j = 0 ; j < m ; j++)
		{
		printf("%4d",*(a+i)+j);
		}
	}
}
void Nhapmang(int *a,int n,int m)
{
	for ( int i = 0 ; i < n ; i ++)
	{
		for (int j = 0 ; j < m ;j++)
		{
		printf("Nhap a[%d][%d]",i,j);
		scanf("%d",(a+i)+j);
		}
	}
}
long tongmang(int &a;int n)
{
	long s = 0 
	for (int i = 0 ; i <n ;;i++)
	{
		s = s + *(a+i);
		return s;
	}
}
int main ()
{
	int *a;

	a = new int [n];
	for ( int i = 0 ; i <n ; i++ )
	{
		a[i] = new *int [m]	
	}
	Nhapmang(a,n,m);
	Xuatmang()
	
	return 0;
}
