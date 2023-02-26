//==========================================================================================================================
//Tran Chi Hao
//MSSV:2180607472
//Lop:21DTHE1
//==========================================================================================================================
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 1000 
//==========================================================================================================================
void NhapSoNguyen(int& sn,const char* str, int min, int max)
{
	do{
		printf("\n Moi nhap %s [%d...%d]:", str, min, max);
		scanf("%d", &sn);
		if(sn<min || sn>max) printf("Ban nhap sai....");
	}while(sn<min || sn>max);
}
//=====================================================================================================================
void NhapMang(int a [],int n)
{
	for ( int i = 0 ; i <n ; i++)
	{
		printf("Nhap vao phan tu tai vi tri A[%d]: ",i);	
		scanf("%d",&a[i]);
	}
}
//==========================================================================================================================
void XuatMang ( int a [],int n)
{
	printf("Cac gia tri trong mang a: ");
	for ( int i = 0 ; i < n ; i++)
	{
		printf("%d\t",a[i]); 
	}
} 	
//====================================================================================================================================
int KtSNT(int n){
	int dem=0;
	for(int i=1; i<=n; i++){
		if(n%i==0)
			dem++;
	}
	if(dem==2) return 1;
	return 0;
}
//================================================================================================================================
void LietKeCacSNT(int a[],int n){
	printf("\n Xuat cac so nguyen to trong pham vi: 1..%d: ", n);
	for(int i=0; i<n; i++){
		if(KtSNT(a[i])==1)
			printf("%d, ", a[i]);
	}
	printf("\b\b.");
}
//==================================================================================================================================================================
int DemCacSNT(int a[],int n){
	int dem=0;
	for(int i=0; i<n; i++){
		if(KtSNT(a[i])==1)
			dem++;
	}
	return dem;
}
//============================================================================================================================================================================
int TongCacSNT(int a[],int n){
	int tong=0;
	for(int i=0; i<n; i++){
		if(KtSNT(a[i])==1)	
			tong=tong+a[i];
	}
	return tong;
}
//===============================================================================================================================================
long TichCacSNT(int a[],int n){
	long tich=1;
	for(int i=0; i<n; i++){
		if(KtSNT(a[i])==1)	
			tich=tich*a[i];
	}
	return tich;
}
//===================================================================================================================================================
float TBCSNT(int a[],int n)
{
	do 
	{
	if (DemCacSNT > 0)
 	return (float)TongCacSNT(a,n)/DemCacSNT(a,n);
	}while (DemCacSNT < 0);
}
//================================================================================================================================
void Menu(int& chon){
	printf("\n*===============MENU==================*");
	printf("\n 1. Liet ke cac so nguyen to trong mang");
	printf("\n 2. Dem     cac so nguyen to trong mang");
	printf("\n 3. Tong    cac so nguyen to trong mang");
	printf("\n 4. Tich    cac so nguyen to trong mang");
	printf("\n 5. TBC     cac so nguyen to trong mang");
	printf("\n 0. Thoat");
	printf("\n*================END===================*");
	printf("\n Ban chon chuc nang: ");
	scanf("%d", &chon);
	}
//====================================================================================================================================
int main()
{
	int a[MAX];
	int n;
	int chon;
	NhapSoNguyen(n,"so luong phan tu", 1, MAX);
	NhapMang(a,n);
	XuatMang(a,n);	
	do{
		Menu(chon);
		switch(chon)
			{
			case 1:
				LietKeCacSNT(a,n);
				break;
			case 2:
				printf("\n Dem so nguyen to trong pham vi: 1..%d: %d", n, DemCacSNT(a,n));
				break;
			case 3:
				printf("\n Tong cac so nguyen to trong pham vi: 1..%d: %d", n, TongCacSNT(a,n));
				break;
			case 4:
				printf("\n Tich cac so nguyen to trong pham vi: 1..%d: %ld", n, TichCacSNT(a,n));
				break;
			case 5:
				printf("\n Trung binh cong cac so nguyen to trong pham vi: 1..%d: %0.2f",n,TBCSNT(a,n));
				break;
			default: chon=0;
			}
	}while(chon);
	return 0;
}
