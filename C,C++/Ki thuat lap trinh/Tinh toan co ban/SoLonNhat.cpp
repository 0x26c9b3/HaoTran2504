#include<stdio.h>
int main ()
{
	float x,y,max;
	printf("Nhap vao so thuc X: ");
	scanf("%f",&x);
	
	printf("Nhap vao so thuc Y: ");
	scanf("%f",&y);
	
	max = (x>=y)?x:y;
	printf("So Lon Nhat: %0.0f", max );
	return 0;
	
}
