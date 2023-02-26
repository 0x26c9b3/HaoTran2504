
#include<stdio.h>
#define MAX 100

void NhapKT(int *n);
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
int TimVTX(int a[], int n, int x);

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
    {
        printf("%d\t",a[i]);
    }
}
int TimVTX(int a[], int n, int x)
{
    //0<=i<=n-1
    //Cach 1
    //for(int i=n-1; i>=0; i--)
    //    if(a[i]==x)
    //        return i;
    //return -1;
    //Cach 2
    int vt=-1;
    for(int i=0; i<n; i++)
        if(a[i]==x)
            vt=i;
    return vt;
}
int main()
{
    int a[MAX], vt, n, x;
    NhapKT(&n);
    NhapMang(a, n);
    printf(">> Cac gia tri trong mang a: ");
    XuatMang(a, n);
    printf("\nNhap gia tri can tim x = ");
    scanf("%d", &x);
    vt = TimVTX(a, n, x);
    if(vt==-1)
        printf("\nKhong ton tai phan tu %d!", x);
    else
        printf("\n%d xuat hien tai vi tri %d", x, vt);
    return 0;
}
