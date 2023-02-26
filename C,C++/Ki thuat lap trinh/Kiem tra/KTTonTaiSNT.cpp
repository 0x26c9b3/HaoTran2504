
#include<stdio.h>
#include<math.h>
#define MAX 100

void NhapKT(int *n);
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
int DemUS(int n);
int LaSNT(int n);
int TonTaiSNT(int a[], int n);

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
        printf("%d ",a[i]);
    }
}
int DemUS(int n)
{ 

    for(int i=2; i<=sqrt(n); i++)
		if(n%i!=0)
        return 0;
       	return 1;
}

int TonTaiSNT(int a[], int n)
{	int d=0;

    for(int i=0; i<n; i++)
        if(DemUS(a[i])==1)
        {d++;
		}
return d;
}
int main()
{
    int a[MAX], n;
    
    NhapKT(&n);
    NhapMang(a, n);
    printf(">> Cac gia tri trong mang a:\n");
    XuatMang(a, n);
	printf("\nTong cac so nguyen to trong mang : %d",TonTaiSNT(a,n));
    return 0;
}


