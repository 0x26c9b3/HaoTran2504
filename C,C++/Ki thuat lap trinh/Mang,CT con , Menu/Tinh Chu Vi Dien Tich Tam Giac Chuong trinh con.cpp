#include<stdio.h>
#include<math.h>
void NhapSoNguyen(int *a)
{
	printf("\nNhap vao cac so nguyen");
	scanf("%d",a);
}
int KiemTra(int a,int b,int c)
{	
	   if(a>0 && b>0 && c>0 && a<(b+c) && b<(a+c) && c<(a+b) )
		return 1;
	   else
		return 0;
}
int ChuVi(int a,int b,int c)
{
	float p = a + b + c;
	return p;
}
float DienTich(int a,int b,int c)
{
	float p = (ChuVi(a,b,c)/2.0f);
	float s =sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
float DuongCao(float s , int canh)
{
	float h = (2*s)/canh;
	return h;
}
void Xuat(int a,int b,int c)
{
	if (KiemTra(a,b,c)==1)
	{
		float s = DienTich(a,b,c);
		float ha = DuongCao(s,a);
		float hb = DuongCao(s,b);
		float hc = DuongCao(s,c);
		printf("\nChu vi cua tam giac la : %d",ChuVi(a,b,c));
		printf("\nDien tich cua tam giac la: %d",DienTich(a,b,c));
		printf("\Duong cao cua canh a: %f\n",ha);
		printf("\Duong cao cua canh b: %f",hb);
		printf("\Duong cao cua canh c: %f",hc);
	}
	else 
		printf("\nKo phai la 3 giac");
}
int main ()
{
	int a,b,c;
	NhapSoNguyen(&a);
	NhapSoNguyen(&b);
	NhapSoNguyen(&c);
	Xuat(a,b,c);
	return 0;
}
