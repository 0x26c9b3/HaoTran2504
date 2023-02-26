//==========================================================================================================================
//Tran Chi Hao
//MSSV:2180607472
//Lop:21DTHE1
//==========================================================================================================================
#include<stdio.h>
#include<conio.h>
#include<math.h>


void NhapSoNguyen(int& sn,const char* str, int min, int max){
	do{
		printf("\n Moi nhap %s [%d...%d]:", str, min, max);
		scanf("%d", &sn);
		if(sn<min || sn>max) printf("Ban nhap sai....");
	}while(sn<min || sn>max);
}
//==============================================================
int KtSNT(int n){
	int dem=0;
	for(int i=1; i<=n; i++){
		if(n%i==0)
			dem++;
	}
	if(dem==2) return 1;
	return 0;
}
//===============================================================
int LietKeCacSNT(int n){
	printf("\n Xuat cac so nguyen to trong pham vi: 1..%d: ", n);
	for(int i=1; i<=n; i++){
		if(KtSNT(i)==1)
			printf("%d, ", i);
	}
	printf("\b\b.");
}
//==============================================================
int DemCacSNT(int n){
	int dem=0;
	for(int i=1; i<=n; i++){
		if(KtSNT(i)==1)
			dem++;
	}
	return dem;
}
//==============================================================
int TongCacSNT(int n){
	int tong=0;
	for(int i=1; i<=n; i++){
		if(KtSNT(i)==1)	
			tong=tong+i;
	}
	return tong;
}
//==============================================================
long TichCacSNT(int n){
	long tich=1;
	for(int i=1; i<=n; i++){
		if(KtSNT(i)==1)	
			tich=tich*i;
	}
	return tich;
}
//==============================================================
float TBCSNT(int n)
{
 return (float)TongCacSNT(n)/DemCacSNT(n);
}
//==============================================================
void Menu(int& chon){
	printf("\n ==========MENU==========");
	printf("\n 1. Liet ke cac so nguyen to");
	printf("\n 2. Dem     cac so nguyen to");
	printf("\n 3. Tong    cac so nguyen to");
	printf("\n 4. Tich    cac so nguyen to");
	printf("\n 5. TBC     cac so nguyen to");
	printf("\n\n 0. Thoat");
	printf("========================");
	printf("\n Ban chon chuc nang: ");
	scanf("%d", &chon);
	}
//==============================================================
int main(){
	int n;
	int chon;
	NhapSoNguyen(n,"SO NGUYEN", 1, 99);
	do{
		Menu(chon);
		switch(chon){
			case 1:
				LietKeCacSNT(n);
				break;
			case 2:
				printf("\n Dem so nguyen to trong pham vi: 1..%d: %d", n, DemCacSNT(n));
				break;
			case 3:
				printf("\n Tong cac so nguyen to trong pham vi: 1..%d: %d", n, TongCacSNT(n));
				break;
			case 4:
				printf("\n Tich cac so nguyen to trong pham vi: 1..%d: %ld", n, TichCacSNT(n));
				break;
			case 5:
				printf("\n Trung binh cong cac so nguyen to trong pham vi: 1..%d: %0.2f",n,TBCSNT(n));
				break;
			default: chon=0;
		}
	}while(chon);
	return 0;
}
