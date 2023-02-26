#include<stdio.h>
#define MAX 100

int main()
{
    float dtb;
    char hoTen[31], x, y;

    printf("Nhap ky tu = ");
    scanf("%c", &x);

    fflush(stdin);
    printf("Nhap ky tu = ");
    scanf("%c", &y);

    printf("Diem trung binh = ");
    scanf("%f", &dtb);
    fflush(stdin);
    printf("Ho va ten = ");
    gets(hoTen);

    printf("\nKet qua nhap:");
    printf("\n- Ho va ten: %s", hoTen);
    printf("\n- DTB = %f\n", dtb);
    
    return 0;
}
