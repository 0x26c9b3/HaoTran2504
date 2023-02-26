#include<stdio.h>
#include<math.h>
#define MAX 100

void NhapSoNguyen(int& sn,const char* str, int min, int max){
	do{
		printf("\n Moi nhap %s [%d...%d]:", str, min, max);
		scanf("%d", &sn);
		if(sn<min || sn>max) printf("Ban nhap sai....");
	}while(sn<min || sn>max);
}

//==============================================================
void NhapMang(int a[], int n)
{
	for (int i = 0;i<n ; i++){
		printf("Moi ban nhap A[%d] :", i);
		scanf("%d", &a[i]);
	}
}
//============================================================
void XuatMang(in2t a[], int n){
	
	for (int i = 0; i< n ; i++) {
		printf("%5d", a[i]);
	}
}

//=============================================================
// 2a xuat cac phan tu chia het cho 3 có trong mang//
void ChiaHetBa(int a[], int n)
{
	for (int i=0; i < n; i++)
	{
		if(a[i]%3==0)
		printf("%6d",a[i]);
	}
	printf("\b\b");
}
//===============================================================
//2b dem so luong so duong trong mang
int DemSoDuong(int a[], int n)
{
	int dem;
	for (int i=0; i < n; i++)
	{
		if(a[i]>0)
		dem++;
	}
	return dem;
}
//===============================================================
//2c Tong cac so trong mang
int TongCacSo(int a[], int n)
{
	int tong=0;
	for(int i=0; i<n; i++)
	{
		tong=tong+a[i];
	}
	return tong;
}
//===============================================================
//2d trung binh cong cua mang
float TBCcuamang(int a[], int n){
	int d= TongCacSo(a, n);
	if (d > 0)
		return (float)d/n;
	return 0;
}
//===============================================================
// 2e tbc cac phan tu duong trong mang
float TBCsoduong(int a[], int n){
	int tong=0;
	int dem;
	for(int i =0; i< n ; i++)
{
		if (a[i]>0)
		{
			tong= tong + a[i];
			dem++;
		}
	}
	return (float) tong/dem;
}
//===============================================================
// 2f xuat cac so nguyen to trong mang
int DemUS(int n)//* Luc nay a[i] truyen` vao n, gia tri cua n luc nay = a[i]
{
    int d=0;
    for(int u=1; u<=n; u++)
        if(n%u==0)
            d++;
    return d;
}
//===============================================================
int LaSNT(int n)//* Luc nay a[i] truyen` vao n, gia tri cua n luc nay = a[i]
{
    if(DemUS(n)==2)//Luc nay n = a[i] , n se chay nguoc len tim ham DemUS
        return 1;
    return 0;
}
//===============================================================
void XuatSNTtrongmang(int a[], int n)
{
	printf("\nCac SNT trong mang la :");
 	for(int i=0; i<n; i++)
        {
		if(LaSNT(a[i])==1)//Chu y luc nay a[i] se di tim ham LaSNT va truyen vao` nhung vi tri co' dau *
		printf("%6d",a[i]);
		}
}
//===============================================================
int DemSNTtrongmang(int a[], int n){
	int dem= 0;
	for(int i=0; i<n; i++)
	{
		if(LaSNT(a[i])==1)//Chu y luc nay a[i] se di tim ham LaSNT va truyen vao` nhung vi tri co' dau *
		dem++;
	}
	return dem;
}
//===============================================================
//2h tinh tong cac SNT trong mang
int TongSNTtrongmang(int a[], int n)
{
	int tong=0;
	for (int i=0; i<n; i++)
	{
		if (LaSNT(a[i])==1)//Chu y luc nay a[i] se di tim ham LaSNT va truyen vao` nhung vi tri co' dau *
			tong=tong+a[i];
	}
	return tong;
}
//===============================================================
// 2i Tinh tbc cac so nguyen to trong mang**
float TBCSNTtrongmang(int a[], int n)
{
	return (float)TongSNTtrongmang(a,n)/DemSNTtrongmang(a,n);
}
//===============================================================
//2j tim phan tu duong dau tien 
int SoDuongDT(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		if (a[i] >0)
		return a[i];
			return -1;
	}
}
//===============================================================
//2k tim phan tu duong cuoi cung
int SoDuongCC(int a[], int n)
{
	for (int i=n-1; i>=0 ; i--)
	{
		if (a[i] > 0)
		return a[i];
			return -1;
	}

}
//===============================================================
//2L tim gia tri lon nhat(nho nhat)
int Maxtrongmang(int a[], int n)
{
	int max = 0;
	for (int i=0; i < n; i++)
	{
		if (a[i]>a[max])
		max=i;		
	}
	return max;
}
//===============================================================
int Mintrongmang(int a[], int n)
{
	int min = 0;
	for (int i=0; i < n; i++)
	{
		if (a[i]<a[min])
		min=i;		
	}
	return min;
}
//======================================================================
void Menu(int& chon){//truyen tham chieu
	printf("\n\t======================MENU===========================");
	printf("\n\t|| 1. Xuat cac phan tu chia het cho 3 trong mang   ||");
	printf("\n\t|| 2. Dem so luong so duong trong mang		   ||");
	printf("\n\t|| 3. Tinh tong cac so trong mang	 	   ||");
	printf("\n\t|| 4. Tinh TBC cua mang				   ||");
	printf("\n\t|| 5. Tinh TBC cac phan tu duong trong mang	   ||");
	printf("\n\t|| 6. Xuat cac SNT trong mang	 	 	   ||");
	printf("\n\t|| 7. Dem so luong SNt trong mang		   ||");
	printf("\n\t|| 8. Tong cac SNT trong mang			   ||");
	printf("\n\t|| 9. Tinh TBc cac SNT trong mang		   ||");
	printf("\n\t|| 10. Phan tu duong dau tien			   || ");
	printf("\n\t|| 11. Phan tu duong cuoi cung			   ||");
	printf("\n\t|| 12. Gia tri phan tu lon nhat va lon nhat	   ||");
	
	printf("\n\t|| 0. THOAT		      	    		   ||");
	printf("\n\t========================END==========================");

	printf("\n\n\tMOI BAN CHON CHUC NANG: ");
	scanf("%d",&chon);
}

//================================================================================
int main(){
	int a[MAX];
	int n;
	int chon;
	NhapSoNguyen(n,"So Phan Tu", 1, 100);
	NhapMang(a, n);
	printf("Mang ban vua nhap la:");
	XuatMang(a, n);
	do {
		Menu(chon);
		switch (chon){
			case 1: printf("\n Tong cac phan tu chia het cho 3 trong mang = ");
					ChiaHetBa(a,n);
				break;
			case 2: printf("\n Dem so luong so duong trong mang = %d",DemSoDuong(a,n));
				break;
			case 3: printf("\n Tinh tong cac so trong mang	 = %d",TongCacSo(a,n));
				break;
			case 4:	printf("\n Tinh TBC cua mang = %.2f",  TBCcuamang( a,  n));
				break;
			case 5:	printf("\n Tinh TBC cac phan tu duong trong mang = %.2f",TBCsoduong(a,n));
				break;	
			case 6: XuatSNTtrongmang(a,n);
				break;
			case 7: printf("\n Dem so luong SNT trong mang = %5d",DemSNTtrongmang( a, n));
				break;
			case 8: printf("\n Tong cac SNT trong mang = %d", TongSNTtrongmang( a, n));
				break;
			case 9: printf("\n Tinh TBc cac SNT trong mang = %0.2f",TBCSNTtrongmang( a, n));
				break;
			case 10: printf("\n  Phan tu duong dau tien	 = %d",SoDuongDT(a ,n));
				break;
			case 11: printf("\n Phan tu duong cuoi cung = %d",SoDuongCC(a, n));
				break;	
			case 12:
					{
					printf("\n  Gia tri phan tu lon nhat trong  mang = %d,tai vi tri A[%d]",a[Maxtrongmang(a,n)],Maxtrongmang(a,n));
					printf("\n  Gia tri phan tu nho nhat trong  mang = %d,tai vi tri A[%d]",a[Mintrongmang(a,n)],Mintrongmang(a,n));
					}
				break;	
			default : chon = 0;
			 }
	}while (chon);	
	
	

	printf("\n\n\n\n\n");
	return 0;
}
