#include<stdio.h>
#include<>conio.h>
int main()
{
	int n,ch,tr,dv;
	printf("Nhap so nguyen co 3 chu so: ",n);
	scanf("%d",&n);
	
	tr=n/100;
	ch=(n/10)%10;
	dv=n%10;
	
	printf("Tram = %d \nChuc = %d \nDon Vi = %d",tr,ch,dv);
	
	return 0;
}
//met qua di thoi

