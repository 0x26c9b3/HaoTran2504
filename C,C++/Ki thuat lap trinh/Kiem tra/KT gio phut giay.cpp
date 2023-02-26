
#include<stdio.h>
#include<conio.h>
int main(){
	int gio,phut,giay;
	printf("Nhap vao gio: ");
	scanf("%d",&gio );
	
	printf("Nhap vao phut: ");
	scanf("%d",&phut );
	
	printf("Nhap vao giay: ");
	scanf("%d",&giay);
	
	if ( gio < 24 )
	if ( gio >= 0 ) 
		printf("So gio la: %d",gio );
	if ( phut < 60 )
	if ( phut >=0 ) 
		printf("So phut la : %d",phut );
	if ( giay <60 )
	if ( giay >=0 ) 
		printf("So giay la: %d",giay );
	else  
	printf ("So gio phut giay khong hop le vui long nhap lai tu dau!" );
	
	return 0;
}




