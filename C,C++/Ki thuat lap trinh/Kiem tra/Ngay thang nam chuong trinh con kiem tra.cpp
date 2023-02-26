
#include <conio.h>
#include <stdio.h>
int ktngay(int n);
int ktthang(int n);
int ktnam(int n);
int main ()
{
    int ngay, thang, nam, ngaymax;
    printf("\nNhap ngay : ");
    scanf("%d",&ngay);
    printf("\nNhap thang : ");
    scanf("%d",&thang);
    printf("\nNhap nam : ");
    scanf("%d",&nam);
    if ((ktngay(n))==1)
    printf("\nSo ngay ban nhap la hop le!");
    else
    printf("\nKo hop le!")
    if (ktthang(n)==1)
    printf("\nSo thang ban nhap la hop le!")
    else
    printf("Ko hop le\n")
    if (ktnam(n)==1)
    printf("\nHop le!")
    else
    printf("\nKo hop le")
    return 0;
}
int ktnam(int n)
{
    int nam;
    if (nam>1)
    return 1;
}
int ktngay(int n)
{
    int ngay,ngaymax=31,nam;
    while(thang=2)
    {
    if ((nam%4==0 && nam%100!=0) || (nam%400==0))
                ngaymax=29;
                else 
                ngaymax=28;
    }
    if ((ngay>1)&&(ngay<=ngaymax))
    return 1;
}
int ktthang(int n)
{
    int thang,ngay,ngaymax;
      switch (thang)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
              ngaymax=31;
              break;
            case 4:
            case 6:
            case 9:
            case 11:
                ngaymax=30;
               break;
        }
        if (ngay <= ngaymax)
        return 1;
}
