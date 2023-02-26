#include <stdio.h>
void NhapSoNguyen(int *a)
{
	do
	{
		printf("\nNhap vao so nguyen ");
		scanf("%d",a);
	}while(a<0);
}

int USCLN(int a,int b)
{
	if(a<0)
		a = -a;
	if(b<0)
		b=-b;
	if(a*b==0)
		return a+b;
	while(a!=b)
		{
			if(a>b)
				a-=b;
			if(b>a)
				b-=a;
		}
		return a;
} 
int BSCNN(int a,int b)
{
	return(a*b)/USCLN(a,b);
}
void XuatKQ(int a,int b)
{
	int us = USCLN (a,b);
	int bs = BSCNN (a,b);
	printf("\nUoc so chung lon nhat la %d",us);
	printf("\nBoi so chung nho nhat la %d",bs);
}
int main ()
{
	int a,b;
	NhapSoNguyen(&a);
	NhapSoNguyen(&b);
	XuatKQ(a,b);
	return 0;
}
