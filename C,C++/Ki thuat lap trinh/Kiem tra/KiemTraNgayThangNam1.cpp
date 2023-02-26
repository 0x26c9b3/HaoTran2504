
#include <stdio.h>

int main()
{
    int ng, th, nm;
    
    printf("Ngay = ");
    scanf("%d", &ng);
    printf("Thang = ");
    scanf("%d", &th);
    printf("Nam = ");
    scanf("%d", &nm);
    
    switch(th)
    {
        case 4:
        case 6:
        case 9:
        case 11:
            if(1<=ng&&ng<=30)
                printf("Hop le");
            else
                printf("Khong hop le");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(1<=ng&&ng<=31)
                printf("Hop le");
            else
                printf("Khong hop le");
            break;
        case 2:
            if(nm%400==0||(nm%4==0&&nm%100!=0))//Nam nhuan
            {
                if(1<=ng&&ng<=29)
                    printf("Hop le");
                else
                    printf("Khong hop le");
            }
            else
            {
                if(1<=ng&&ng<=28)
                    printf("Hop le");
                else
                    printf("Khong hop le");
            }
            break;
        default: printf("Khong hop le");
    }
}
