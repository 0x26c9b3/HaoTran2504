#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100
typedef struct book
{
	char MASACH[11];
	char TENSACH[40];
	char tentg[20];
	double giaban;
	int namxb;
}s;
int Hienthimenu()
{   int chon;
do	{
   printf("\t\t\tQUAN LY SACH TRONG THU VIEN.\n");
   printf("1. Nhap danh sach sach: \n");
   printf("2. Kiem tra rong day: ");
   printf("3. Tim kiem phan tu: \n");
   printf("4. Them phan tu: .\n");
   printf("5. Xoa phan tu: .\n");
   printf("6. Xuat danh sach : \n");
   printf("7. Thoat: \n");
   
   printf("Ban chon: ");
   scanf("%d",&chon);
	}while(chon!=7,0);
   return chon;
}
s Nhap1Sach(s x)
{
 printf("Moi nhap vao ma sach: \n");
 fflush(stdin);
 gets(x.MASACH);
 printf("Moi nhap vao ten tac gia: \n");
 fflush(stdin);
 gets(x.tentg);
 printf("Moi nhap vao ten sach: \n");
 fflush(stdin);
 gets(x.TENSACH);
 printf("Moi nhap vao nam xuat ban: \n");
 scanf("%lf",&x.namxb);
 printf("Moi nhap vao gia ban: \n");
 scanf("%lf",&x.giaban);
}
void NhapNSach(int n,s x[MAX])
{
	for (int i = 0 ; i < n ; i++)
	{
		printf("Moi ban nhap vao thong tin sach thu %d: ",i+1);
		Nhap1Sach(x[i]);
	}
}
s Xuat1Sach(s x)
{
	printf("Ma sach:%c \n",x.MASACH);
	printf("Ten sach: %c\n",x.TENSACH);
	printf("Ten tg: %c \n",x.tentg);
	printf("Gia ban: %lf \n ",x.giaban);
	printf("Nam xuat ban:%d \n",x.namxb);

}
void XuatNSach(int n,s x[MAX])
{
	for ( int i = 0 ; i < n ; i ++)
	{
		printf("Thong tin sach thu: %d ",i+1);
		Xuat1Sach(x[i]);
	}
}	
int main()
{
	int n; 
	printf("Nhap n: \n");
	scanf("%d",&n);
	HienThiMenu	
 return 0;
}

