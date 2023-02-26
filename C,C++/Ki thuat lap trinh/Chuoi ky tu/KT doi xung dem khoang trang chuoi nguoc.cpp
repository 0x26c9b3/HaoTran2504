//
//  SuaBT.c
//  ChuoiKyTu
//
//  Created by Tr?n Minh Thái on 24/10/2021.
//

#include<stdio.h>
#include<string.h>
#define MAX 100
int KTDoiXung(char s[]);
int DemKyTuTrang(char s[]);
void XuatChuoiNguoc(char s[]);
int TimX(char s[], char x);

int DemKyTuTrang(char s[])
{   //0<=i<=n-1
    int d = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++)
        if (s[i] == ' ')
            d++;
    return d;
}

void XuatChuoiNguoc(char s[])
{
    int n = strlen(s);
    for (int i = n - 1; i >= 0; i--)
        printf("%c", s[i]);
}

int KTDoiXung(char s[])
{
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++)
        if (s[i] != s[n - 1 - i])
            return 0;
    return 1;
}

int TimX(char s[], char x)
{
    int n=strlen(s);
    for(int i=0; i<n; i++)
        if(s[i]==x)
            return i;
    return -1;
}
int main()
{
    char str[MAX], x;
    int kq;
    printf("Chuoi ky tu = ");
    gets(str);
    
    int kt = DemKyTuTrang(str);
    printf("\nSo khoang trang = %d\n", kt);
    int dx = KTDoiXung(str);
    if(dx==0)
        printf("Chuoi khong doi xung");
    else
        printf("Chuoi doi xung");
    printf("\nChuoi dao nguoc = ");
    XuatChuoiNguoc(str);
    
    printf("Nhap ky tu can tim: ");
    scanf("%c", &x);
    kq=TimX(str, x);
    if(kq==-1)
        printf("\nKhong ton tai ky tu %c", x);
    else
        printf("\n%c xuat hien tai vi tri = %d", x, kq);
    return 0;
}

