#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100
void NhapMang(int a[MAX], int n)
{
    for (int i = 0;i<n ; i++){
        scanf("%d", &a[i]);
    }
}
int Maxtrongmang(int a[], int n)
{
    int max = 0;
    for (int i=0; i < n; i++)
    {
        if (a[i]>max)
        max=i;        
    }
    return max;
}
int Mintrongmang(int a[], int n)
{
    int min = 0;
    for (int i=0; i < n; i++)
    {
        if (a[i]<min)
        min=i;        
    }
    return min;
}
int KtSNT(int n){
    int dem=0;
    for(int i=1; i<=n; i++){
        if(n%i==0)
            dem++;
    }
    if(dem==2) return 1;
    return 0;
}
int DemSNT(int a[],int n){
    int dem=0;
    for(int i=1; i<=n; i++){
        if(KtSNT(a[i])==1)
            dem++;
    }
    return dem;
}
int KTDoiXung(int a[],int n)
{
    for (int i = 0; i < n / 2; i++)
        if (a[i] != a[n - 1 - i])
            return 0;
    return 1;
}
int TongTich(int a[],int n)
{    int tich=1;
    for (int i = 0 ; i < n;i++)
    {
        tich*=a[i];
    }return tich;
}
int MaxTich(int a[],int n)
{
    int max = 0;
    for (int i = 0 ; i < n ;i++)
        {
            for (int j = 1 ; j <=n ;j++)
            {
                if ((a[i]*a[j])>max)
                max = a[i]*a[j];
            }
        }return max;
}
int main()
{
    int n;
    int a[MAX];
    scanf("%d",&n);
    NhapMang(a,n);
    printf("%d,%d",a[Maxtrongmang(a,n)],Maxtrongmang(a,n));
    printf("\n%d,%d",a[Mintrongmang(a,n)],Mintrongmang(a,n));
    printf("\n%d",DemSNT(a,n));
    printf("\n%d",MaxTich(a,n));
    if(KTDoiXung(a,n)==1)
    printf("\nYES");
    else
    printf("\nNO");
    printf("\n%d",TongTich(a,n));
    
 return 0;
}

