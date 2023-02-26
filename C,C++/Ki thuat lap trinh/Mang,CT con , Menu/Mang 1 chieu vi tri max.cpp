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
void XuatMang(int a[], int n){
	
	for (int i = 0; i< n ; i++) {
		printf("%5d", a[i]);
	}
}

//=============================================================

//2j tim phan tu duong dau tien 
int SoDuongDT(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		if (a[i] >0)
		return i;
		
	}return -1;
}
//===============================================================
//2k tim phan tu duong cuoi cung
int SoDuongCC(int a[], int n)
{
	for (int i=n-1; i>=0 ; i--)
	{
		if (a[i] > 0)
		return i;
		
	}return -1;

}
//===============================================================
//2L tim gia tri lon nhat
int Maxtrongmang(int a[], int n)
{
	int max = 0;
	for (int i=0; i < n; i++)// 2 3 4 
	{
		if (a[i]>a[1])
		max=i;		
	}
	return max;
}
//===============================================================
int DemSoPTMAX(int a[],int n)
{
	int dem = 0;
	for (int i=0;i<n;i++)
	{
		if (a[i]==a[Maxtrongmang(a,n)])
		dem++;
	}
	return dem;
}
void VTMax (int a[],int n)
{
	for(int i=0;i <n;i++)
	{
		if(a[i]==a[Maxtrongmang(a,n)])
		printf("a[%d]",i);
	}
 }

void ThemX(int a[],int &n,int &x,int &vitri)//n=4 vitri =2
{
	printf("Nhap vao vi tri can them:");
	scanf("%d",&vitri);
	printf("Nhap vao gia tri x can them:");
	scanf("%d",&x);
	for(int i =n;i>vitri;i--)
	{
	a[i]=a[i-1];
	}
	a[vitri]=x;
	n++;
}
void ThemY(int a[],int &n,int y)
{
	printf("\n8Nhap vao gia tri can chen o dau mang:");
	scanf("%d",&y);
	for(int i=n;i>=0;i++)
	{
	a[i]=a[i-1];	
	}
	a[0]=y;
}
//================================================================================
int main(){
	int a[MAX];
	int n;
	int x,y;
	int vitri;
	int chon;
	NhapSoNguyen(n,"So Phan Tu", 1, 100);
	NhapMang(a, n);
	printf("Mang ban vua nhap la:");
	XuatMang(a, n);
	printf("\nVi tri phan tu duong dau tien : a[%d] = %d",SoDuongDT(a,n),a[SoDuongDT(a,n)]);
	printf("\nVi tri phan tu duong cuoi cung : a[%d] = %d",SoDuongCC(a,n),a[SoDuongCC(a,n)]);
	printf("\nGia tri phan tu lon nhat trong mang = %d ",a[Maxtrongmang(a,n)]);
	printf("\nVi tri cua cac phan tu max:");
	VTMax(a,n);
	ThemY(a,n,y);
	ThemX(a,n,x,vitri);
	
	printf("\n\n\n\n\n");
	return 0;
}	
