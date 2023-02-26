//=========================//
//Tran Chi Hao	//
//MSSV:2180607472//
//Lop:21DTHE1//
//========================//
#include <stdio.h>
#include <conio.h>
int main ()
{
	int s,money;
	printf("Nhap so km S = ");
	scanf("%d",&s);
		if (s > 0)
		{
		if ( s <= 10 )
		money = s * 5000; 
		else if ( s <= 30)
		money = 10*5000+(s-10)*10000; 
		else
		money = 10 *5000+20*10000+(s-30)*13000;
		printf("So tien ban phai tra la: %d ",money);
		}
		else 
		printf("Nhap sai roi!");
return 0;
}

