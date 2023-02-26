#include <stdio.h>
#define MAX 100

void NhapSoNguyen(int& n,const char* str, int min, int max){
	do{
		printf("\n Moi nhap %s [%d...%d]:", str, min, max);
		scanf("%d", &n);
		if(n<min || n>max) printf("Ban nhap sai....");
	}while(n<min || n>max);
}

void NhapMang(int n, char a[]) 
{
    for(int i = 0;i < n;i++) 
	{
        printf("Nhap vao phan tu tai vi tri A[%d]: ",i);
        fflush(stdin);
        scanf("%c", &a[i]);
    }
}
void XuatMang(int n, char a[]) 
{
	printf("Cac gia tri cua mang la:\n");
    for(int i = 0;i < n;i++) 
	{
        printf("%6c", a[i]);
    }

}
int main() {
    int n;
    char a[MAX];
    NhapSoNguyen(n,"So Phan Tu", 1, 100);
    NhapMang(n, a);
    XuatMang(n, a);
    return 0;
}
