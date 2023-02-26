
#include<stdio.h>
int main()
{
	int a,b,c,tong;
	
	printf("Nhap so gio: ",a);
	scanf("%d",&a);
	
	printf("Nhap so phut: ",b);
	scanf("%d",&b);-
	
	printf("Nhap so giay: ",c);
	scanf("%d",&c);
	
	tong = a * 3600 + b * 60 + c;
	printf("So giay la: %d",tong );
	
	return 0;  
	 
}
 
