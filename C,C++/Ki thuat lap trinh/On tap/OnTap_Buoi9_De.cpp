#include <stdio.h>

void nhap(int a[][100], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void xuat(int a[][100], int n){
	printf("\n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j] % 2 != 0)
				printf("%d\t", a[i][j]);
		}
	}
}

float tbcCheoChinh(int a[][100], int n){
	float s = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j)
				s+=a[i][j];
		}
	}
	
	return s/n;
}

int KTNT(int a){
	if(a<2)
		return 0;
	for(int i=2; i<a; i++){
		if(a%i==0)
			return 0;
	}
	return 1;
}

int timMaxNguyenTo(int a[][100], int n){
	int max = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(KTNT(a[i][j]) == 1){
				if(max < a[i][j])
					max = a[i][j];
			}
		}
	}
}

int main(){
	int n;
	int a[100][100];
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n>100 || n<=0);
	
	nhap(a, n);
	xuat(a, n);
	printf("\nTrung binh cong cua duong cheo chinh la: %f", tbcCheoChinh(a, n));
	printf("\nSo nguyen to lon nhat trong ma tran: %d", timMaxNguyenTo(a, n));
	
	return 0;
}

