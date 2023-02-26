#include<stdio.h>
#include<conio.h>
int main (){
	float t,l,h,dtb;
	printf("Nhap vao diem toan = ");
	scanf("%f",&t);
	
	printf("Nhap vao diem ly = ");
	scanf("%f",&l);
	
	printf("Nhap vao diem hoa = ");
	scanf("%f",&h);
	
	dtb = ((float)(t+l+h)/3);
	
	if (dtb>=8) 
	printf("Gioi");

	else	if (dtb<8&&dtb>=7)
				printf("Kha");

	else	if (dtb<7&&dtb>=5)
				printf("Trung binh");
	
	else	
				printf("Yeu");
	
	return 0;
}

