#include<stdio.h>
#include<math.h>
#define MAX 100
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
void NhapSoNguyen(int& sn,const char* str, int min, int max);
int VTSNTDuongDT(int a[],int n);
int VTSNTDuongCC(int a[],int n);
int DemUS(int n);
int LaSNT(int n);

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
int DemUS(int n)
{
    int d=0;
    for(int u=1; u<=n; u++)
    {
	if(n%u==0)
    d++;
	}
	return d;
}
int LaSNT(int n)
{
    if(DemUS(n)==2)
    return 1;
    else
    return 0;
}
int VTSNTDuongDT(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
	if (LaSNT(a[i])==1)	return i;
 	}
	return -1;
}
int VTSNTDuongCC(int a[],int n)
{
	for(int i=n-1;i>=0;i--)
	{
	if (LaSNT(a[i])==1) return i;
	}
	return -1;
}

int main(){
	int a[MAX];
	int n;
	NhapSoNguyen(n,"So Phan Tu", 1, 100);
	NhapMang(a, n);
	printf("\nMang ban vua nhap la:");
	XuatMang(a, n);
	if (VTSNTDuongDT(a,n)==-1)
	printf("\nKo co so hop le!");
	else
	printf("\nVi tri so nguyen to duong dau tien :A[%d]",VTSNTDuongDT(a,n));
	if (VTSNTDuongCC(a,n)==-1)
	printf("\nKo co so hop le!");
	else
	printf("\nVi tri so nguyen to duong cuoi cung :A[%d]",VTSNTDuongCC(a,n));
	

	printf("\n\n\n\n\n");
	return 0;
}
