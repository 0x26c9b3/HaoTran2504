#include <stdio.h>
#include <string.h>
#define MAX 100
int demkhoangtrang(char str[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
            dem++;
    }
    return dem;
}
{
    char str[MAX], n;
    printf("Nhap chuoi: ");
    gets(str);
    n = strlen(str);
    puts(str);
    printf("So khoang trang la:%d", demkhoangtrang(str, n));

    return 0;
}
