#include <stdio.h>

void nhapMang(int a[], int n){
	if(n==0)
		return;
	nhapMang(a, n-1);
	printf("\nNhap phan tu %d:",n-1);
	scanf("%d",&a[n-1]);
}
void xuatMang(int a[], int n){
	if(n == 0)
		return;
	xuatMang(a, n-1);
	printf("%d\t",a[n-1]);
}

int tinhTong(int a[], int n){
	if(n==0)
		return 0;
	return a[n-1] + tinhTong(a, n-1);
}

int tinhTongSoChan(int a[], int n){
	if(n==0)
		return 0;
	if(a[n-1] % 2 == 0)
		return a[n-1] + tinhTongSoChan(a, n-1);
	return tinhTongSoChan(a, n-1);
}

int tinhTongSoLe(int a[], int n){
	if(n==0)
		return 0;
	if(a[n-1] % 2 != 0)
		return a[n-1] + tinhTongSoLe(a, n-1);
	return tinhTongSoLe(a, n-1);
}

bool KTNguyenTo(int a){
	if(a<2) 
		return false;
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
			return false;
	}
	return true;
}

int tinhTongSoNguyenTo(int a[], int n){
	if(n==0)
		return 0;
	if(KTNguyenTo(a[n-1]) == true)
		return a[n-1] + tinhTongSoNguyenTo(a, n-1);
	return tinhTongSoNguyenTo(a, n-1);
}

int findChan(int a[], int n, int i){
	if(i < n)
        if(a[i] % 2 == 0)
        	return a[i];
        else 
			return findChan(a,n, i+1);
                   
    return -1;
}

int findLe(int a[], int n, int i){
	if(i < n)
        if(a[i] % 2 == 0)
        	return findLe(a,n, i+1);
        else 
			return a[i];
                   
    return -1;
}

int findNguyenTo(int a[], int n, int i){
	if(i < n)
        if(KTNguyenTo(a[i]) == true)
        	return a[i];
        else 
			return findNguyenTo(a,n, i+1);
                   
    return -1;
    
}

int findChanCuoi(int a[], int n){
	if(n==0)
		return -1;
	if(a[n-1] % 2 == 0)
		return a[n-1];
	else
		return findChanCuoi(a,n-1);
}

int findMax(int a[], int n){
	if(n==1)
		return a[0];
	if(a[n-1] > findMax(a, n-1))
		return a[n-1];
	return findMax(a,n-1);
}

int demPTChan(int a[], int n){
	if(n>0){
		int d=demPTChan(a,n-1);
		if(a[n-1] % 2 == 0)
			return d+1;
		else
			return d;
	}
}
// 3	7	9	2
int demPTMax(int a[], int n, int max){
	if(n>0){
		int d=demPTMax(a, n-1, max);
		if(a[n-1] == max)
			return d+1;
		else
			return d;
	}
}

int main(){
	int n, a[100];
	
	
	printf("Nhap so luong phan tu n: ");
	scanf("%d", &n);
    
    nhapMang(a, n);
    xuatMang(a, n);
    
    int max = findMax(a,n);
    
    printf("\nTong cac phan tu co trong mang: %d", tinhTong(a,n));
    
    printf("\nTong cac phan tu chan co trong mang: %d", tinhTongSoChan(a,n));
    
    printf("\nTong cac phan tu le co trong mang: %d", tinhTongSoLe(a,n));
    
    printf("\nTong cac phan tu la so nguyen to co trong mang: %d", tinhTongSoNguyenTo(a,n));
    
    printf("\nSo chan dau tien trong mang: %d", findChan(a,n, 0));
    
    printf("\nSo le dau tien trong mang: %d", findLe(a,n, 0));
    
    printf("\nSo nguyen to dau tien trong mang: %d", findNguyenTo(a,n, 0));
    
    printf("\nSo chan cuoi trong mang: %d", findChanCuoi(a,n));
    
    printf("\nSo max trong mang: %d", findMax(a,n));
    
    printf("\nSo luong phan tu chan co trong mang: %d", demPTChan(a,n));
    
    printf("\nSo luong phan tu max co trong mang: %d", demPTMax(a,n, max));
    
    return 0;
}
