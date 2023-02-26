
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

void NhapKT(int &n);
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
int DemSoLe(int a[], int n);
int DemUSX(int a[], int n, int x);

void NhapKT(int &n)
{
    do{
        printf("Nhap vao kich thuoc mang [0..%d]: ", MAX);
        scanf("%d", &n);
        if(n<0||n>MAX)
            printf("Nhap lai kich thuoc!!!\n");
        else
            break;
    }while(1);
}
void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("* Nhap vao phan tu tai vi tri %d: ", i);
        scanf("%d", &a[i]);
    }
}
void XuatMang(int a[], int n)
{
    for(int i=0; i<=n-1; i++)
    {
        printf("%d\t",a[i]);
    }
}
void PhatSinh(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand()%n;
    }
}
int DemSoLe(int a[], int n)
{
    int d=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2!=0)
            d++;
    }
    return d;
}
int DemUSX(int a[], int n, int x)
{
    int d=0;
    for(int i=0; i<n; i++)
    {
        if(x%a[i]==0)
            d++;
    }
    return d;
}
void TestDemSoLe()
{
    int a[MAX], n, kq;
    srand((unsigned int)time(NULL));
    NhapKT(n);
    //NhapMang(a, n);
    PhatSinh(a, n);
    printf("Cac gia tri trong mang a:\n");
    XuatMang(a, n);
    kq=DemSoLe(a, n);
    if(kq==0)
        printf("\nMang khong ton tai so le!");
    else
        printf("\nMang co %d so le", kq);
}
void TestDemUSCuaX()
{
    int a[MAX], n, kq, x;
    srand((unsigned int)time(NULL));
    NhapKT(n);
    //NhapMang(a, n);
    PhatSinh(a, n);
    printf("Cac gia tri trong mang a:\n");
    XuatMang(a, n);
    printf("\nNhap gia tri x = ");
    scanf("%d", &x);
    kq=DemUSX(a, n, x);
    if(kq==0)
        printf("\nMang khong co uoc so cua x");
    else
        printf("\nMang co %d uoc so cua x", kq);
}
int main()
{
    //TestDemSoLe();
    TestDemUSCuaX();
    return 0;
}

