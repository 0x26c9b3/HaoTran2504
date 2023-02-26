
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

void NhapSoNguyen(int& sn,const char* str, int x, int y){
	do{
		printf("\n Moi nhap %s [%d...%d]:", str, x, y);
		scanf("%d", &sn);
		if(sn<x || sn>y) printf("Ban nhap sai....");
	}while(sn<x || sn>y);
}
void XuatMang(int a[], int n){
	
	for (int i = 0; i< n ; i++) {
		printf("%5d", a[i]);
	}
}

void PhatSinh(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand()%n;
    }
}
int main(){
	int a[MAX];
	int n,x,y;
	int chon;
	printf("\nNhap X va Y:");
	scanf("%d%d",&x,&y);
	NhapSoNguyen(n,"So Phan Tu", x, y);
	srand((unsigned int)time(NULL));
	PhatSinh(a,n);
	printf("Mang ban vua nhap la:");
	XuatMang(a, n);
}
