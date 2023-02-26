#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100
typedef struct NhanVien
{
	char mnv[10];
	char hoten[20];
	float luong;
}nv;
nv Nhap1NhanVien(nv x)
{
	prin8 GYtf("\nNhan vao ma nhan vien:");
	fflush(stdin);
	gets(x.mnv);
	printf("\nNhap vao ho va ten:");
	fflush(stdin);
	gets(x.hoten);
	printf("\nNhap vao luong:");
	scanf("%f",&x.luong);
}
void NhapNhieuNhanVien(nv x[MAX],int &n)
{
	printf("\nNhap vao so sinh vien: ");
	scanf("%d",&n);
	for (int i = 0 ; i < n ;i++)
	{
		printf("\nNhap vao thong tin sinh vien thu: %d",i+1);
		Nhap1NhanVien(x[i]);
	}
}
nv Xuat1NhanVien(nv x)
{
	for(int i = 0; i<n;i++)
	printf("\nMa nhan vien: %s",x.mnv);
	printf("\nHo va ten nhan vien: %s",x.hoten);
	printf("\nLuong nhan vien : %f",x.luong);
}
void XuatNhieuNhanVien ( nv x[MAX],int n)
{
	for (int i = 0 ; i<n ; i ++)
	{
		printf("\nThong tin nhan vien thu: %d",i+1 );
		Xuat1NhanVien(x[i]);
	}
}
int main()
{
	int n ; nv x[MAX];
	NhapNhieuNhanVien(x,n);
	XuatNhieuNhanVien(x,n);
 return 0;
}

