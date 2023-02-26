 
#include<stdio.h>
#define MAX 100

void NhapKT(int *n);
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
void XuatPTLe(int a[], int n);

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
void XuatPTLe(int a[], int n)
{
    int i;
    for(i=1; i<n; i=i+2)
        printf("%d\t",a[i]);
}
void TestXuatPTLe()
{
    int a[MAX], n;
    
    NhapKT(&n);
    NhapMang(a, n);
    printf(">> Cac gia tri trong mang a: ");
    XuatMang(a, n);
    
    printf("\n>> Cac phan tu co gia tri le: ");
    XuatPTLe(a, n);
}
int main()
{
    TestXuatPTLe();
    return 0;
}






