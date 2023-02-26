#include <stdio.h>
int tong(int n);

int tong(int n)
{			
	int t=0;
		if ( n >=0 )
			{
			for ( int i = 1; i <=n;i++)
			{
				t = t + i;
			}
			return t;
			}
}
int main ()
{
	int n;
	printf("Moi nhap vao so hang N : ");
	scanf("%d",&n);
	printf("\nTong la:%d ",tong(n));
	return 0;
 } 
