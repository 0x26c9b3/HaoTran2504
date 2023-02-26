#include<stdio.h>
#define MAX 100

void NhapKT(int *n);
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
int DemUS(int n);
int LaSNT(int n);
int DemSNT(int a[], int n);

void NhapKT(int *n)
{
    do{
        printf("Nhap vao kich thuoc mang [0..%d]: ", MAX);
        scanf("%d", n);
        if(*n<0||*n>MAX)
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
        printf("%d ",a[i]);
}
int DemUS(int n)
{
    int d=0;
    for(int i=1; i<=n; i++)
        if(n%i==0)
            d++;
    return d;
}
int LaSNT(int n)
{
    if(DemUS(n)==2)
        return 1;
    return 0;
}
int DemSNT(int a[], int n)
{
    int d=0;
    for(int i=0; i<n; i++)
        if(LaSNT(a[i])==1)
            d++;
    return d;
}
int main()
{
    int a[MAX], n, kq;
    
    NhapKT(&n);
    NhapMang(a, n);
    printf(">> Cac gia tri trong mang a:\n");
    XuatMang(a, n);
    
    kq = DemSNT(a, n);
    if(kq==0)
        printf("Khong ton tai so nguyen to trong mang\n");
    else
        printf("Co %d so nguyen to trong mang\n", kq);
    
    return 0;
}
	
