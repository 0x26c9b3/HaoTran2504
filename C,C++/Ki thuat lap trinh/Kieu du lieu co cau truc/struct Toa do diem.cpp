#include <stdio.h>
//struct ttDiem 
//{
//	int x;
//	int y;
//};
//typedef struct ttDiem Diem;
//Hoac co the ghi la:
typedef struct ttDiem
{
	int x;
	int y;
}Diem;//Kieu du lieu

void Nhap(Diem &c);
void Xuat(Diem c);
Diem Tong(Diem d1 , Diem d2);

void Nhap(Diem &xyz)//diem xyz chi la ten goi,gan gia tri vao d1,d2 => gia tri bi thay doi sau khi nhap vao nen se dung dau' &
{
	printf("\nNhap hoanh do X:");
	scanf("%d",&xyz.x);//gan gia tri x cua thang d1,d2
	printf("\nNhap vao tung do Y:");
	scanf("%d",&xyz.y);//gan gia tri y cua thang d1,d2
}
void Xuat(Diem xyz)
{
	printf("(%d,%d)",xyz.x,xyz.y);//d1,d2 se chay vo va` xuat ra gia tri cua no
}
Diem Tong(Diem d1, Diem d2)
{
	Diem kq;
	kq.x = d1.x+d2.x;// tong X = x1 + x2
	kq.y = d1.y+d2.y;// tong Y = y1 + y2
	return kq;//Tra ve 1 diem moi' , la` tong? cua d1 va` d2 
}
int main ()
{
	Diem d1,d2,tong;
	printf("\nNhap toa do diem d1:");
	Nhap(d1);//luc nay diem d1 se chay vao ham` nhap
	printf("\nNhap toa do diem d2:");
	Nhap(d2);//luc nay diem d2 se chay vao ham` nhap
	
	printf("\nToa do diem d1:");
	Xuat(d1);//xuat ra gia tri cua diem d1
	printf("\nToa do diem d2;");
	Xuat(d2);//xuat ra gia tri cua diem d2
	
	tong = Tong(d1,d2);
	printf("\nTong toa do 2 diem =");//o day ko dung` %d vi` %d la` 1 so nguyen , con Diem la` 1 toa. do^.!
	Xuat(tong);//cho nen phai dung xuat' 
	
	return 0;
	
	
}
