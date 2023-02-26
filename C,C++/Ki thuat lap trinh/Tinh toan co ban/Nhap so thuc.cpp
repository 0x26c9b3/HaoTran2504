//a
#include<stdio.h>
int main ()
{
	int a ;
	printf("Moi nhap 1 so nguyen: ");
	scanf("%d",&a);
	printf("\nSo nguyen ban vua nhap: %d",a);
//b
	float b;
	printf("\nMoi ban nhap 1 so thuc: ");
	scanf("%f",&b);
	printf("\nSo thuc ban da nhap la: %.02f", b);
//c
	char c;
	printf("\nMoi nhap 1 ki tu:");
	fflush(stdin);
	scanf("%c",&c);
	printf("\nKi tu da nhap la %c",c);
	return 0;
}

