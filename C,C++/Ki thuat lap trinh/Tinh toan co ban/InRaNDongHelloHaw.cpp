#include<stdio.h>
int main ()
{
	int n;
	printf("Nhap vao so nguyen N = ");
	scanf("%d",&n);//10
	
	while (n>=1)
	{
		n--;
		printf("Dong %d - Hello Haw!\n ",n+1);
	}	
	return 0;
}
