
#include <stdio.h>
int main()
{
    unsigned int ng, th, nm;
    printf("Nhap vao ngay: ");
    scanf("%u", &ng);
    printf("Nhap vao thang: ");
    scanf("%u", &th);
    printf("Nhap vao nam: ");
    scanf("%u", &nm);
    printf("Ngay %02u/%02u/%u ", ng, th, nm);
    if(th==1||th==3||th==5||th==7||th==8||th==10||th==12)
    {
        if(1<=ng&&ng<=31)
            printf("hop le");
        else
            printf("khong hop le");
    }
    else if(th==4||th==6||th==9||th==11)
    {
        if(ng>=1&&ng<=30)
            printf("hop le");
        else
            printf("khong hop le");
    }
    else if(th==2)
    {
        if(nm%400==0 || (nm%4==0&&nm%100!=0))//Nhuan
        {
            if(ng>=1&&ng<=29)
                printf("hop le");
            else
                printf("khong hop le");
        }
        else //Khong nhuan
        {
            if(ng>=1&&ng<=28)
                printf("hop le");
            else
                printf("khong hop le");
        }
    }
    else
        printf("khong hop le");
    return 0;
}

