#include <stdio.h>
#define MAX 100

void NhapSoNguyen(int& n,const char* str, int min, int max){
	do{
		printf("\n Moi nhap %s [%d...%d]:", str, min, max);
		scanf("%d", &n);
		if(n<min || n>max) printf("Ban nhap sai....");
	}while(n<min || n>max);
}

void NhapMang(float a[],int n)
{
    for(int i = 0;i < n;i++) 
	{
        printf("Nhap vao phan tu tai vi tri A[%d]: ",i);
        fflush(stdin);
        scanf("%f", &a[i]);
    }
}
void XuatMang(float a[],int n) 
{
	printf("Cac gia tri cua mang la:\n");
    for(int i=0;i<n;i++)
	{
        printf("%8.2f", a[i]);
    }

}
int main() {
    int n;
    float a[MAX];
    NhapSoNguyen(n,"So Phan Tu", 1, 100);
    NhapMang(a,n);
    XuatMang(a,n);
    return 0;
}
