#include<stdio.h>
#define MAX 100

void NhapKT(int *n);
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
int TimVTAmDau(int a[], int n);
int TimVTAmMax(int a[], int n);

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
int TimVTAmDau(int a[], int n)
{
    for(int i=0; i<n; i++)
        if(a[i]<0)
            return i;
    return -1; //Khong ton tai
}
int TimVTAmMax(int a[], int n)
{
    //a: 1 2 3 4 5
    int vt = TimVTAmDau(a, n); //Tim vi tri phan tu am dau tien trong mang
    if(vt==-1)
        return -1;
    //a: 1 2 3 4 5 6  7 7 8 9 10 2 4 6 -3 4 -7 4 -1 5 -12
    for(int i=vt+1; i<n; i++)
        if(a[i]<0&&a[i]>a[vt])
            vt=i;
    return vt;
}
int main()
{
    int a[MAX], n, kq;
    
    NhapKT(&n);
    NhapMang(a, n);
    printf(">> Cac gia tri trong mang a:\n");
    XuatMang(a, n);
    
    kq = TimVTAmMax(a, n);
    if(kq==-1)
        printf("Khong ton tai so am trong mang\n");
    else
        printf("Vi tri phan tu am lon nhat = %d, co gia tri = %d\n", kq, a[kq]);
    
    return 0;
}
