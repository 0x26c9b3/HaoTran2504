#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100
typedef struct sinhvien
{	char mssv [8];
	char tensinhvien[30];
	int nam;
	float dtb;
}sv;

void NhapNhieuSV(sv a[MAX],int n)
{	
	for(int i=0;i<n;i++)
	{
	printf("Nhap thong tin sinh vien thu %d\n",i+1);
	printf("\nNhap vao mssv:");
	fflush(stdin);
	gets(a[i].mssv);
	printf("\nNhap ten sv:");
	fflush(stdin);
	gets(a[i].tensinhvien);

	printf("\nNhap nam sinh:");
	scanf("%d",&a[i].nam);
	printf("\nNhap diem trung binh:");
	scanf("%f",&a[i].dtb);
	}
}
void XuatNhieuSV(sv a[MAX],int n)
{
	for(int i = 0 ;i<n;i++)
	{
	printf("Ma so sinh vien: %s",a[i].mssv);
	printf("\nTen sinh vien : %s",a[i].tensinhvien);
	printf("\nNam sinh: %d",a[i].nam);
	printf("\nDiem trung binh : %f",a[i].dtb);
	}
}
int main()
{	int n;
	sv a[MAX];

	printf("Nhap vao so sinh vien: ");
	scanf("%d",&n);
	NhapNhieuSV(a,n);
	XuatNhieuSV(a,n);
 return 0;
}

