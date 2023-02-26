#include <stdio.h>
#include <string.h>

typedef struct  Sach{
	char masach[9];
	char tensach[31];
	char tacgia[31];
	int soluong;
}S;

void nhap1S(S &s, FILE *f){
	fflush(stdin);
	printf("\nNhap ma sach: ");
	gets(s.masach);
	fprintf(f, "\nMa sach: %s", s.masach);
	fflush(stdin);
	printf("\nNhap ten sach: ");
	gets(s.tensach);
	fprintf(f, "\tTen sach: %s", s.tensach);
	printf("\nNhap tac gia: ");
	gets(s.tacgia);
	fprintf(f, "\tTac gia: %s", s.tacgia);
	printf("\nNhap so luong sach: ");
	scanf("%d", &s.soluong);
	fprintf(f, "\tSo luong: %d", s.soluong);
}

void nhapDS(S s[], int n, FILE *f){
	for(int i=0; i<n; i++){
		printf("\nNhap sach thu %d: ", i+1);
		fprintf(f, "\nSach thu %d: ", i+1);
		nhap1S(s[i], f);
	}
	
	fclose(f);
}

void xuat1S(S s){
	printf("\nMa sach: %s\tTen sach: %s\tTac gia: %s\tSo luong: %d", s.masach, s.tensach, s.tacgia, s.soluong);
}

void xuatDS(S s[], int n){
	for(int i=0; i<n; i++){
		printf("\nSach thu %d", i+1);
		xuat1S(s[i]);
	}
}

void timSach(S s[], int n, char sach[]){
	bool flag = true;
	for(int i=0; i<n; i++){
		if(strcmp(s[i].tensach, sach) == 0){
			xuat1S(s[i]);
			flag = false;
		}
	}
	if(flag == true){
		printf("\nTim khong thay");
	}
}

int tongSach(S s[], int n){
	int tong=0;
	for(int i=0; i<n; i++){
		tong+=s[i].soluong;
	}
	
	return tong;
}

int main(){
	S s[100];
	int n;
	char sach[31];
	FILE *f;
	f = fopen("D:\\sach.inp", "w");
	
	printf("Nhap so luong dau sach: ");
	scanf("%d", &n);
	
	nhapDS(s, n, f);
	xuatDS(s, n);	
	
	fflush(stdin);
	printf("\nNhap ten sach can tim: ");
	gets(sach);
	timSach(s, n, sach);
	
	printf("\nTong so luong sach trong thu vien: %d", tongSach(s, n));
	
	return 0;
}
