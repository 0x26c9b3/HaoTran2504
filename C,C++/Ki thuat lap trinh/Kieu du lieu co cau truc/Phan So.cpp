#include <stdio.h>
#define MAX 100
typedef struct PhanSo
{
	int tu;
	int mau;
}ps;

void NhapDayPS(ps a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf_s("\nNhap phan so thu %d: ", i+1);
		scanf_s("%d%d", &a[i].tu, &a[i].mau);
	}
}
void XuatDayPhanSo(ps a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf_s("%d/%d\t", a[i].tu, a[i].mau);
	}
}
int UCLN(int a, int b)
{
	for (int i = a; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			return i;
		}
	}
	return 1;
}
void ToiGianPS(ps a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int ucln = UCLN(a[i].tu, a[i].mau);
		a[i].tu = a[i].tu / ucln;
		a[i].mau = a[i].mau / ucln;
	}
}
float GTPS(ps a)
{
	return 1.0*a.tu / a.mau;
}
int FindMaxPS(ps a[], int n)
{
	int vt;
	float max = GTPS(a[0]);
	for (int i = 1; i < n; i++)
	{
		if (GTPS(a[i]) > max)
		{
			max = GTPS( a[i]);
			vt = i;
		}
	}
	return vt;
}
int main()
{
	ps a[MAX];
	int n;
	printf_s("Nhap n: ");
	scanf_s("%d", &n);
	NhapDayPS(a, n);
	XuatDayPhanSo(a, n);
	ToiGianPS(a, n);
	printf_s("\nDay phan so toi gian:\n");
	XuatDayPhanSo(a, n);
	int max = FindMaxPS(a, n);
	printf_s("\nMax phan so: ");
	printf_s("%d/%d\t", a[max].tu, a[max].mau);
	return 0;
}
