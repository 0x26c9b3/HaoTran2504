#include <stdio.h>
#define MAX 100
void NhapMang(int a[MAX][MAX],int n,int m)
{
	for ( int i = 0 ; i < n ; i ++)
	{
		for (int j = 0 ; j < m ; j++)
		{
		printf("\nNhap vao phan tu a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		}
	}
}
void XuatMang(int a[MAX][MAX],int n,int m)
{
		for ( int i = 0 ; i < n ; i ++)
	{
		for (int j = 0 ; j < m ; j++)
		{
		printf("%4d",a[i][j]);
		}printf("\n");
	}
}
int tong(int a[][MAX], int i, int m)
{
	int s=0;
	for(int j=0;j<m;j++)
		s=s+a[i][j];
	return s;
}
int tonglonnhat(int a[][MAX], int n, int m)
{
	int i,d;
	int max=tong(a,0,n);
	for( i=0;i<n;i++)
	{
		int t=tong(a,i,n);
		if(max<t)
		{
			max=t;
			d=i;
		}
	}
	return d;
}
int main ()
{	int n,a[MAX][MAX], m;
	printf("Nhap Hang x Cot :");
	scanf("%d%d",&n,&m);
	NhapMang(a,n,m);
	XuatMang(a,n,m);
	printf("Hang co tong lon nhat la hang so %d",tonglonnhat(a,n,m));
	return 0;
	
}
//#include <stdio.h>
//#include <stdbool.h> 
//#define MAX 100
//
//void NhapMang(int *a,int n)
//{
//	for ( int i = 0 ; i < n ; i ++)
//	{
//		printf("Nhap a[%d]",i);
//		scanf("%d",(a+i));
//	}
//}
//void XuatMang(int*a ,int n)
//{
//	for(int i = 0 ;i<n;i++)
//	printf("%4d",*(a+i));
//}
//
//void sortArray(int *a, int n) 
//{
//	for (int i = 0; i < n; i++) 
//	{
//		for (int j = i + 1; j < n; j++)
//		 {
//			if (*(a+i) > *(a+j))	
//			 {
//				int temp = *(a+i);
//				*(a+i) = *(a+j);
//				*(a+j) = temp;
//			}
//		}
//	}
//}
//void swap(int &x,int &y)
//{
//	int temp = x;
//	x=y;
//	y=temp;
//}
//void QuickSort(int *a,int n)
//{
//	for (int i = 0;i <n;i++)
//	{
//		for (int j = i+1;j <n;j++)
//		{
//			if (*(a+i)>*(a+j))
//			swap(*(a+i),*(a+j));
//		}printf ("%4d",*(a+i));
//	}
//}
//bool soCP(int n){
//  int i = 0;
//  while(i*i <= n){
//        if(i*i == n){
//            return true;
//        }
//        ++i;
//    }
//    return false;
//}
//int SoCPdautien(int *a,int n)
//{
//	for (int i =0 ; i < n ;i ++)
//	{
//			if (soCP(*(a+i))==true)
//			return *(a+i);
//	}return -1;
//}
//int SoCPMax(int *a,int n)
//{
//	int	max = -1;
//	for(int i =0 ;i <n;i++)
//	{
//		if(soCP(*(a+i)) == true && *(a+i)> max)
//		max = *(a+i);
//	}
//	return max;
//}
//
//int main ()
//{
//	int *a,n;
//	printf("Nhap n:");
//	scanf("%d",&n);
//	a = new int [n];
//	NhapMang(a,n);
//	XuatMang(a,n);
//	printf("\nMang sau khi rut gon: ");
////	sortArray(a, n);
//	QuickSort(a,n);
//	XuatMang(a,n);
//	printf ("\n So CP dau tien : %d",SoCPdautien(a,n));
//	printf("\n So chinh phuong MAX : %d",SoCPMax(a,n));
//	return 0;	
//}
// 
//#include<stdio.h>
//#include<math.h> 
//float tong(int n)
//{
//	if (n==1)
//	return 0;
//	return tong(n-1)+(float)(n-1)/n;
//
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printf("%f",tong(n));
//	return 0;
//}
// 
//#include<stdio.h>
//#include<math.h> 
//#define MAX 20
//typedef struct PHANSO
//{
//	int tu, mau; 
//}PS;
//
//void Nhap1PS(PS &a);
//void NhapMang(PS a[], int n);
//void Xuat1PS(PS a);
//void XuatMang(PS a[], int n);
//int UCLN(int x,int y);
//void RutGon(PS &a);
//int SoSanhPS(PS a,PS b);
//void NhapSoNguyen(int& n, const char* string, int min, int max);
//float GTPS(PS a[]);
//float GTPSLN(PS a[],int n);
//float GTPSNN(PS a[],int n);
//
//
//void Nhap1PS(PS &a){
//	printf("Nhap tu so: "); 
//	scanf("%d",&a.tu);
//	do{
//		printf("Nhap mau so(!=0):" );
//		scanf("%d",&a.mau);
//		if(a.mau==0)
//			printf("Mau phai khac 0...Moi nhap lai!!\n"); 
//	} while(a.mau==0); 
//	
//	if(a.mau<0){
//		a.tu=-a.tu;
//		a.mau=-a.mau; 
//	}
//	RutGon(a[]);
//}
//
//void Xuat1PS(PS a){
//	printf("[%d/%d]\t",a.tu,a.mau); 
//} 
//
//int UCLN(int x,int y) {
//	x=abs(x);
//	y=abs(y);
//	while(x!=y){
//		if(x>y)	x = x-y;
//		else	y = y-x; 
//	} 
//	return x; 
//}
//
//void RutGon(PS &a){
//	int x=UCLN(a.tu,a.mau); 
//	a.tu=a.tu/x;
//	a.mau=a.mau/x; 
//} 
//void NhapSoNguyen(int& n, const char* string, int min, int max){  
//	do{
//		printf("\n Moi nhap %s [%d..%d]: ",string, min, max);
//		scanf("%d", &n);
//		if(n<min || n>max) printf("Ban nhap sai...");
//	}while(n<min || n>max);
//}
//
//void NhapMang(PS a[], int n){
//	for(int i=0; i<n; i++){
//		printf("Moi nhap phan so thu A[%d]:\n", i);
//		Nhap1PS(a[i]);
//	}
//}
//
//void XuatMang(PS a[], int n)
//{
//	for(int i=0; i<n; i++){
//		Xuat1PS(a[i]);
//	}
//}
//float GTPS(PS a)
//{
//		return  = 1.0*a.tu /a.mau;
//
//}
//float GTPSLN(PS a[],int n)
//{
//	float max = GTPS(a[0]);
//	for (int i=1;i<n;i++)
//	{
//		if(GTPS(a[i])>max)
//		max = GTPS(a[i]);
//	}
//	return max;
//}
//float GTPSNN(PS a[],int n)
//{
//	float min = GTPS(a[0]);
//	for (int i=1;i<n;i++)
//	{
//		if(GTPS(a[i])<min)
//		min = GTPS(a[i]);
//	}
//	return min;
//}
//int main(){
//	
//	PS a[MAX];
//	int n;
//	
//	NhapSoNguyen( n, "SO LUONG PHAN SO", 1, 10);
//	NhapMang(a,n);
//	XuatMang(a,n);
//	printf("\nGia tri phan so lon nhat trong mang %f ",GTPSLN(a,n));
//	
//	printf("\nGia tri phan so nho nhat trong mang %f ",GTPSNN(a,n));
//	
//	return 0; 	
//} 
