#include <stdio.h>
#define MAX 100
int KtTrungLap(int n, int a[], int t);
void NhapMang(int n, int a[]);
int SCP(int n);
int KtraSCP(int a[],int n);
void XuatSCP(int a[],int n);

int KtTrungLap(int n, int a[], int t)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == t)
            return 1;
    }
    return 0;
}
void NhapXuatMang(int &n, int a[])
{
    printf("Nhap n: ");
    scanf("%d", &n);
    int t;
	for (int i = 0; i < n;i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &t);
        if (KtTrungLap(n, a, t) == 1)
        {
            printf("Ban nhap sai. Nhap lai di...\n");
            i--;
        }
        else//Kt trung lap return 0
            a[i] = t;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int SCP(int n)
{
    int i;
    for(i=0;i<n/2;i++)
	{
        if(i*i==a)
		{
            return 1;
            break;
        }
    }
}
int KtraSCP(int a[],int n)
{
    int i;
    for(i=0;i<n;i++){
        if(SCP(a[i])==1 && i%2!=0){
            return 1;
            break;
        }
    }
    return 0;
}
void XuatSCP(int a[],int n)
{
    int i;
    if(KtraSCP(A)==1){
        printf("\nCac so chinh phuong tai vi tri le:  ");
        for(i=0;i<n;i++){
            if((SCP(a[i]))==1 && i%2!=0){
                printf("%d  ",A[i]);
            }
        }
    }else if (KtraSCP(A)==0)
        printf("\nKhong co so thoa man!");
}

int main()
{
    int n, a[MAX];
    NhapXuatMang(n,a);
    return 0;
}
