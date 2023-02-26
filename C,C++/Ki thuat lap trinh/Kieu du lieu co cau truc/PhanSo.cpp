
// Code mau
 
#include<stdio.h>
#include<math.h> 
#define MAX 20

typedef struct PHANSO
{
	int tu, mau; 
}PS;

//============================================
void Nhap1PS(PS &a){
	printf("Nhap tu so: "); 
	scanf("%d",&a.tu);
	do{
		printf("Nhap mau so(!=0):" );
		scanf("%d",&a.mau);
		if(a.mau==0)
			printf("Mau phai khac 0...Moi nhap lai!!\n"); 
	} while(a.mau==0); 
	
	if(a.mau<0){
		a.tu=-a.tu;
		a.mau=-a.mau; 
	}
	//RutGon(a);
}
//============================================
void Xuat1PS(PS a){
	printf("[%d/%d]\t",a.tu,a.mau); 
} 
//============================================
int UCLN(int x,int y) {
	x=abs(x);
	y=abs(y);
	while(x!=y){
		if(x>y)	x = x-y;
		else	y = y-x; 
	} 
	return x; 
}
//============================================
void RutGon(PS &a){
	int x=UCLN(a.tu,a.mau); 
	a.tu=a.tu/x;
	a.mau=a.mau/x; 
} 
//============================================
PS TongPS(PS a[])
{
	PS tong;
	for (int i = 0 ; i < n;i++)
	{
	tong.tu=a[i].tu*a[i+1].mau+a[i+1].tu*a[i].mau;
	tong.mau=a[i].mau*a[i+1].mau;
	RutGon(tong);
	}
	return tong; 
} 
//============================================
int SoSanhPS(PS a,PS b){
	return a.tu*b.mau-b.tu*a.mau;
} 
//============================================
void NhapSoNguyen(int& n, const char* string, int min, int max){  
	do{
		printf("\n Moi nhap %s [%d..%d]: ",string, min, max);
		scanf("%d", &n);
		if(n<min || n>max) printf("Ban nhap sai...");
	}while(n<min || n>max);
}
//======================================================
void NhapMang(PS a[], int n){
	for(int i=0; i<n; i++){
		printf("Moi nhap phan so thu A[%d]:\n", i);
		Nhap1PS(a[i]);
	}
}
//======================================================
void XuatMang(PS a[], int n)
{
	for(int i=0; i<n; i++){
		Xuat1PS(a[i]);
	}
}
int GTPS(PS a[])
{
	float gt= a.tu/a.mau;
	return gt;
}
//======================================================
int GTPSLN(PS a[],int n)
{
	float max = GTPS(a[0]);
	for (int i=1;i<n;i++)
	{
		if(GTPS(a[i])>max)
		max = GTPS(a[i]);
	}
	return max;
}
int GTPSNN(PS a[],int n)
{
	float min = GTPS(a[0]);
	for (int i=1;i<n;i++)
	{
		if(GTPS(a[i])<min)
		min = GTPS(a[i]);
	}
	return min;
}
int main(){
	
	PS a[MAX];
	int n;
	PS tong = TongPS(a,b);
	
	NhapSoNguyen( n, "SO LUONG PHAN SO", 1, 10);
	NhapMang(a,n);
	XuatMang(a,n);
	
	printf("Tong cac phan so trong mang : ");
	Xuat1PS(tong);
	
	printf("\nGia tri phan so lon nhat trong mang ",GTPSLN(a,n));
	
	printf("\nGia tri phan so nho nhat trong mang ",GTPSNN(a,n));
	
	return 0; 	
} 
