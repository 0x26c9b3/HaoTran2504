#include<stdio.h>
int main()
{
	int y;
	float x;
	
	printf("Nhap vao so thuc x = ");
	scanf("%f",&x);
	
	y = (int)(x+0.5);
	printf("=> So nguyen duoc lam tron la: %d", y);
	
	return 0;
}
