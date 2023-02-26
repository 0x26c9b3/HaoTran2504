#include<stdio.h>
#include<conio.h>
int main()
{
	int sl , dg,tong; 
	printf("Nhap vao so luong = ");
	scanf("%d",&sl);
	
	printf("Nhap vao don gia = ");
	scanf("%d",&dg);
	
	tong = sl * dg;
	
	if(tong > 100000)
	{
	tong = tong - (tong * 0.05 );
	}
	
	printf("Thanh tien = %d", tong); 
	
	return 0; 
 } 
 
