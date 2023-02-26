#include<stdio.h>
int main()

{
	float tb;
	char HoVaTen[20];
	
	printf("Nhap diem tb: ");
	scanf("%f",&tb);
	fflush(stdin);

	printf("Nhap ho va ten : ");	gets(HoVaTen);
	printf("\nHo va ten: %s",HoVaTen);
	printf("\nDiem tb :%f",tb);
	return 0;
	
}
