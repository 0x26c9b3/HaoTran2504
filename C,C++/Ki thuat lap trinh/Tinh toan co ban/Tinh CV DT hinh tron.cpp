#include<stdio.h>
const float pi = 3.14;  //#define PI 3.14 
int main()
{
	float r,dt,cv;
	printf("Nhap vao ban kinh r = ",r);
	scanf("%f",&r);
	
	cv=(float)pi*2*r;
	
	dt=(float)pi*r*r;
	
	printf("=>Chu vi hinh tron = %f\n=>Dien Tich hinh tron = %f",cv,dt);
	return 0;
}
