#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
void NhapN(int *n) 
{
    do {
        printf("Nhap kich thuoc cua mang: ");
        scanf("%d", n);
        if (*n <= 0 || *n > MAX)
            printf("Nhap sai, moi nhap lai\n");
        else 
        break;
    	} while (*n <= 0 || *n > MAX);
}
void PhatSinh (int a[],int n)
{
	int k = n+ 1; 
	for (int i = 1 ; i < n;i++)
	{
		a[i] = rand()%k - rand ()%k;	 // 0 ----> n -1  
	} 
}
void XuatMang ( int a [],int n)
{
	for ( int i = 0 ; i <= n-1 ; i++)
	{
		printf("%d",a[i]); 
	} 
} 
 int main() {
    int n;
    float a[MAX];
    NhapN(&n);
	PhatSinh(a,n);
    XuatMang(n, a);
    return 0;
}
