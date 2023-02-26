#include<stdio.h>
#include<string.h>
typedef struct ttLinhKien
{
	char MaSo[6];
	char tenLK[21];
	char XuatXu[16];
	int DonGia;
	int SoLuong;
}LinhKien;

void NhapTT(LinhKien &a)
{
	printf("Moi nhap MS :\n");
	gets(a.MaSo);
	
	printf("Moi nhap ten linh kien:\n");
	gets(a.tenLK);
	
	printf("Moi nhap noi xuat xu:\n");
	gets(a.XuatXu);
	
	printf("\nNhap don gia:");
	scanf("%d",&a.DonGia);
	
	printf("\nNhap so luong:");
	scanf("%d",&a.SoLuong);


}
void XuatTT(LinhKien a)
{
	
	printf("\nDon gia : %d",a.DonGia);
	
	printf("\nSo luong : %d",a.SoLuong);
	
	
	
	printf("\nTen linh kien : %s",a.tenLK);
	
	printf("\nNoi xuat xu : %s",a.XuatXu);
	printf("\nMa so: %s",a.MaSo);
}
int main()
{
	LinhKien a;
	NhapTT(a);
	XuatTT(a);
	return 0;
}
