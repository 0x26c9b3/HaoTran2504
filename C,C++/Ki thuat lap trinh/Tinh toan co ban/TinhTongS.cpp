#include<stdio.h>
int main ()
{
	int n,S=0,i=1;
	printf("Nhap vao so nguyen N = ");
	scanf("%d",&n);//n=5
	while ( i <= n)
	{

	S = S + i;
		i++;
	}
	printf("Tong S = %d",S );//S=1+2+3+4+5

	return 0;

}
