#include <stdio.h> 
#define MAX 100
#define MIN 0

int tong(int a[],int n)
{

if (n == 1) return a[0];
else return a[n - 1] + tong(a, n - 1);

}
void nhapMang(int a[], int n)
{
	if(n==0)
		return;
	nhapMang(a, n-1);
	printf("\nNhap phan tu a[%d]:",n-1);
	scanf("%d",&a[n-1]);
}

void xuatMang(int a[], int n){
	if(n == 0)
		return;
	xuatMang(a, n-1);
	printf("%d \t",a[n-1]);
}

int main ()
{
	int a [MAX];
	int n;
	printf("so phan tu trong mang [%d...%d]\n",MIN,MAX);
	scanf("%d",&n);
	nhapMang(a,n);
	xuatMang(a,n);
	printf("Tong = %d", tong(a,n));
	return 0; 
}
  
