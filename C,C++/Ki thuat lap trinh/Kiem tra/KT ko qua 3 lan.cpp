#include <stdio.h>
int main()
{
    int k, c = 0, flag = 1;
    printf("Nhap vao so nguyen: ");

    do
    {
        if (c == 3)
        {
            flag = 0;
            break;
        }
        scanf("%d", &k);
        if (k < 1 || k > 100)
        {
            printf("Loi. Nhap lai!\n");
            c++;
        }
    } while (k < 1 || k > 100);
    if (flag == 0)
        printf("Nhap sai 3 lan. Khong nhap duoc nua.");
    else
        printf("So vua nhap la %d", k);
    return 0;
}

