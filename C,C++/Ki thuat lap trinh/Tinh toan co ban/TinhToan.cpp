#include<stdio.h>
int main()
{
	int x,y,a;
	float z;
	
	printf("\nMoi ban nhap 2 so nguyen de tinh: ");
	printf("\nSo nguyen x:");
	scanf("%d",&x);
	printf("\nSo nguyen y:");
	scanf("%d",&y);
	printf("\n X + Y = %d + %d = %d ",x,y,x+y);
	printf("\n X - Y = %d - %d = %d",x,y,x-y);
	printf("\n X * Y = %d * %d = %d ",x,y,x*y);
	z = (float)x/y ;
	printf("\n X / Y = %.2f",z);
	a = x % y;
	printf("\n X %% Y = %d",a);
	return 0;
}

