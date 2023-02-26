//***********************//
//Ho va ten: Tran Chi Hao//
//MSSV:2180607472//
//Lop:21DTHE1//
//**********************//
#include<stdio.h>
#include<conio.h>
int main(){
	unsigned int thang,nam;
	do{
		printf("Nhap thang: ");
		scanf("%u", &thang);
		{if (thang <1 || thang >12)
		printf("\nKhong ton tai thang nay");}
	}while(thang <1 ||thang>12);
	
	
switch(thang){
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf("Thang %u co 31 ngay",thang);break;
	case 4: case 6: case 9: case 11:
		printf("Thang %u co 30 ngay",thang);break;
	case 2:
		do {
			printf("Nhap nam: ");
			scanf("%u",&nam);
			if (nam<=0)
			{
				printf("\nNhap lai:");
			}
		}while ( nam <= 0);
		if((nam %4 == 0 && nam % 100!=0)||(nam%400==0))
		{
			printf("Nam %u la nam nhuan, thang %u co 29 ngay",nam,thang);
		}
		else
		{
			printf("Nam %u ko phai la nam nhuan, thang %u co 28 ngay",nam,thang);
		}break;
	}return 0;
}

