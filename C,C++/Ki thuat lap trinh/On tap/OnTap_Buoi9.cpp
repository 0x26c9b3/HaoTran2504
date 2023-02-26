#include <stdio.h>

void nhap(int a[][100], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
}

void xuat(int a[][100], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

int tongCheoPhu(int a[][100], int n){
	int s = 0;
	for(int i=0; i<n; i++){
		s+=a[i][n-i-1];
	}
	
	return s;
}

int dem(int a[][100], int n, int x){
	int d = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j] == x)
				d++;
		}
	}
	return d;
}

int max(int a[][100], int n){
	int max = a[0][0];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(max < a[i][j]){
				max = a[i][j];
			}
		}
	}
	
	return max;
}

void duongCheoChinh(int a[][100], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j)
				printf("%d\t", a[i][j]);
		}
	}
}

float tbcCheoPhu(int a[][100], int n){
	int s;
	for(int i=0; i<n; i++){
		s+=a[i][n-i-1];
	}
	
	return (float)s/n;
}

int KTNT(int a){
	if(a<2)
		return 1;
	for(int i=2; i<a; i++){
		if(a%i == 0)
			return 1;
	}
	return 0;
}

int demNguyenTo(int a[][100], int n){
	int d=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(KTNT(a[i][j]) == 0)
				d++;
		}
	}
	return d;
}

void timMaxTrenDong(int a[][100], int n){
	for(int i=0; i<n; i++){
		int max=a[i][0];
		for(int j=0; j<n; j++){
			if(max < a[i][j])
				max = a[i][j];
		}
		
		printf("\nPhan tu lon nhat o dong %d la: %d", i, max);
	}
}

void timLeAm(int a[][100], int n){
	for(int i=n-1; i>=0; i--){
		for(int j=n-1; j>=0; j--){
			if(a[i][j]%2 != 0 && a[i][j] < 0){
				printf("\nSo le am cuoi cung trong mang: %d", a[i][j]);
				return;
			}
		}
	}
}

bool KTHT(int a){
	int s=0;
	
	for(int i=1; i<=a/2; i++){
		if(a%i==0)
			s+=i;
	}
	
	if(s==a)
		return true;
	return false;
}

void timSoHoanThien(int a[][100], int n){
	printf("\nSo hoan thien trong ma tran: ");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(KTHT(a[i][j]) == true)
				printf("%d\t", a[i][j]);
		}
	}
}

int timMin(int a[][100], int n){
	int min = a[0][0];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(min > a[i][j])
				min = a[i][j];
		}
	}
	
	return min;
}

int demMin(int a[][100], int n){
	int dem = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j] == timMin(a, n))
				dem++;
		}
	}
	
	return dem;
}

int timCotNhoNhat(int a[][100], int n){
	int min = 0;
	int flag = 0;
	for(int i=0; i<n; i++){
		min += a[i][0];
	}
	
	for(int i=1; i<n; i++){
		int s = 0;
		for(int j=0; j<n; j++){
			s+=a[j][i];
		}
		if(min > s){
			min = s;
			flag = i;
		}
	}
	
	return flag;
}

int main(){
	int n, x;
	int a[100][100];
	printf("Nhap n: ");
	scanf("%d", &n);
	
	nhap(a, n);
	xuat(a, n);
	printf("\nTong cac gia tri nam tren duong cheo phu: %d", tongCheoPhu(a,n));
	printf("\nNhap x: ");
	scanf("%d", &x);
	printf("\nDem cac gia tri bang %d: %d", x, dem(a,n,x));
	printf("\nPhan tu lon nhat trong ma tran: %d", max(a,n));
	duongCheoChinh(a,n);
	printf("\nTrung binh cong cua duong cheo phu: %f", tbcCheoPhu(a,n));
	printf("\nDem phan tu la so nguyen to: %d", demNguyenTo(a,n));
	timMaxTrenDong(a,n);
	timLeAm(a,n);
	timSoHoanThien(a,n);
	printf("\nDem phan tu la min: %d", demMin(a,n));
	printf("\nTim cot co gia tri nho nhat: %d", timCotNhoNhat(a,n));
	
	return 0;
}
