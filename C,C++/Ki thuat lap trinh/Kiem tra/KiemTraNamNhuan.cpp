
#include <stdio.h>

int main()
{
    int nam;
    printf("Nam = ");
    scanf("%d", &nam);
    
    if(nam%400==0||(nam%4==0&&nam%100!=0))
        printf("Nam nhuan");
    else
        printf("Khong nhuan");
    
    return 0;
}

