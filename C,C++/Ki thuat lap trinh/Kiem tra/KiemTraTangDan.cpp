#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Nhap vao so nguyen a = ");
	scanf("%d",&a);
	
	printf("Nhap vao so nguyen b = ");
	scanf("%d",&b);
	
	printf("Nhap vao so nguyen c = ");
	scanf("%d",&c);
	
	(a<b&&b<c)?printf("Tang dan"):printf("Ko tang dan");
	return 0;
	
}
