#include<stdio.h>
int main()
{
	float cv;
	int d,r,dt;
	printf("Nhap vao chieu dai = ");
	scanf("%d",&d);
	
	printf("Nhap vao chieu rong = ");
	scanf("%d",&r);
	
	cv= ((float)(d+r)*2);
	
	dt= d*r;
	
	printf("Chu vi HCN = %.1f \nDien Tich HCN = %d ",cv , dt);
	
	return 0;
	
}
