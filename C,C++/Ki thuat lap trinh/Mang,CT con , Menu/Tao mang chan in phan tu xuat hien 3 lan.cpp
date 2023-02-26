


#include <stdio.h>
#define MAX 1000

//1. Nh?p vào kích thu?c n, có ki?m tra giá tr? n, sao cho n thu?c [1..1000]
void NhapKT(int *n)
{
    do{
        printf("Nhap kich thuoc mang thuoc khoang [1..%d]: ", MAX);
        scanf("%d", n);
        if(*n<1||*n>MAX)
            printf("Gia tri nhap khong hop le, nhap lai!\n");
        else
            break;
    }while(1);
}
//2. Nh?p các giá tr? t? bàn phím vào m?ng
void NhapMang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Nhap gia tri mang tai vi tri %d: ", i);
        scanf("%d", &a[i]);
    }
}
void XuatMang(int a[], int n)
{
    for(int i=0; i<n; i++)
        printf("%d\t", a[i]);
}
//3. Ð?m nh?ng ph?n t? là s? nguyên t? l?n hon x trong m?ng
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
int DemSNTLonHonX(int a[], int n, int x)
{
    int d=0;
    for(int i=0; i<n; i++)
        if(LaSNT(a[i])==1&&a[i]>x)
            d++;
    return d;
}
//4. In nh?ng ph?n t? có giá tr? xu?t hi?n ít nh?t 3 l?n trong m?ng
int DemX(int a[], int n, int x)
{
    int d=0;
    for(int i=0; i<n; i++)
        if(a[i]==x)
            d++;
    return d;
}
void InPhanTuXHItNhat3Lan(int a[], int n)
{
    int b[MAX], m=0;
    for(int i=0; i<n; i++)
        if(DemX(b, m, a[i])==0&&DemX(a, n, a[i])>=3)
        {
            b[m]=a[i];
            m++;
        }
    XuatMang(b, m);
}
//5. T?o ra m?t m?ng b ch?a t?t c? nh?ng giá tr? ch?n t? m?ng a
//a: 1 2 3 4 5 6 7 8 9 11 13 12 14 2
//m=6
//b: 2 4 6 8 12 14 2
void TaoMangChan(int a[], int n, int b[], int *m)
{
    *m=0;
    for(int i=0; i<n; i++)
        if(DemX(b, *m, a[i])==0&&a[i]%2==0&&a[i]!=0)
        {
            b[*m]=a[i];
            *m=*m+1;
        }
    
}
//6. Hàm main() d? g?i và th?c hi?n các yêu c?u trên
int main()
{
    int a[MAX], n, x, b[MAX], m;
    NhapKT(&n);
    NhapMang(a, n);
    printf("\nGia tri cua mang: ");
    XuatMang(a, n);
    printf("\nNhap gia tri x = ");
    scanf("%d", &x);
    printf("\nSo luong phan tu la SNT > %d = %d", x, DemSNTLonHonX(a, n, x));
    printf("\nNhung phan tu xuat hien it nhat 3 lan: ");
    InPhanTuXHItNhat3Lan(a, n);
    TaoMangChan(a, n, b, &m);
    printf("\nMang vua tao chi chua nhung gia tri chan: ");
    XuatMang(b, m);
    return 0;
}

