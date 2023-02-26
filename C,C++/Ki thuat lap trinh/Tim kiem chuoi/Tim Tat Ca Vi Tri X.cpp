#include<stdio.h>
#define MAX 100

void NhapKT(int *n);
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
void TimVTX(int a[], int n, int x, int vt[], int *nvt);

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
void TimVTX(int a[], int n, int x, int vt[], int *nvt)
{
    //vt: Luu ds cac vi tri cua phan tu bang voi x
    //nvt: So luong phan tu bang voi x
    *nvt=0;
    for(int i=0; i<n; i++)
        if(a[i]==x)
        {
            vt[*nvt] = i;
            (*nvt)++;
        }
}
int main()
{
    int a[MAX], n, vt[MAX], nvt, x;
    NhapKT(&n);
    NhapMang(a, n);
    printf(">> Cac gia tri trong mang a: ");
    XuatMang(a, n);
    printf("\nNhap gia tri can tim x = ");
    scanf("%d", &x);
    TimVTX(a, n, x, vt, &nvt);
    if(nvt==0)
        printf("\nKhong ton tai phan tu %d!", x);
    else
    {
        printf("\nNhung vi tri xuat hien %d = ", x);
        XuatMang(vt, nvt);
    }
    return 0;
}
