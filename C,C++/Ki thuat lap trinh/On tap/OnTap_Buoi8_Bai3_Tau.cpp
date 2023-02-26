#include <stdio.h>
#include <string.h>

typedef struct NgayGio{
	char ngaykhoihanh[20];
	char giokhoihanh[20];
	char ngayden[20];
	char gioden[20];
}NG;

typedef struct VeTau{
	NgayGio ng;
	char gadi[31];
	char gaden[31];
	char loaitau[31];
	char loaighe[31];
	int sotoa;
	int soghe;
}VT;

void nhap1VT(VT &vt, FILE *f){
	fflush(stdin);
	printf("\nNhap ngay khoi hanh: ");
	gets(vt.ng.ngaykhoihanh);
	fprintf(f, "\nNgay khoi hanh: %s", vt.ng.ngaykhoihanh);
	fflush(stdin);
	printf("\nNhap gio khoi hanh: ");
	gets(vt.ng.giokhoihanh);
	fprintf(f, "\nGio khoi hanh: %s", vt.ng.giokhoihanh);
	fflush(stdin);
	printf("\nNhap ngay den: ");
	gets(vt.ng.ngayden);
	fprintf(f, "\nNgay den: %s", vt.ng.ngayden);
	fflush(stdin);
	printf("\nNhap gio den: ");
	gets(vt.ng.gioden);
	fprintf(f, "\nNgay gio den: %s", vt.ng.gioden);
	fflush(stdin);
	printf("\nNhap ga di: ");
	gets(vt.gadi);
	fprintf(f, "\nNgay ga di: %s", vt.gadi);
	fflush(stdin);
	printf("\nNhap ga den: ");
	gets(vt.gaden);
	fprintf(f, "\nNgay ga den: %s", vt.gaden);
	fflush(stdin);
	printf("\nNhap loai tau: ");
	gets(vt.loaitau);
	fprintf(f, "\nNgay loai tau: %s", vt.loaitau);
	fflush(stdin);
	printf("\nNhap loai ghe: ");
	gets(vt.loaighe);
	fprintf(f, "\nNgay loai ghe: %s", vt.loaighe);
	printf("\nNhap so toa: ");
	scanf("%d", &vt.sotoa);
	fprintf(f, "\nSo toa: %d", vt.sotoa);
	printf("\nNhap so ghe: ");
	scanf("%d", &vt.soghe);
	fprintf(f, "\nSo toa: %d", vt.soghe);
}

void nhapDS(VT vt[], int n, FILE *f){
	for(int i=0; i<n; i++){
		printf("\nNhap ve %d: ", i+1);
		fprintf(f, "\nVe %d: ", i+1);
		nhap1VT(vt[i], f);
	}
	
	fclose(f);
}

void xuat1VT(VT vt){
	printf("\nNgay gio khoi hanh: %s\tNgay gio den: %s\tGa di: %s\tGa den: %s\tLoai tau: %s\tLoai ghe: %s\tSo toa: %d\tSo ghe: %d", vt.ngaygiokhoihanh, vt.ngaygioden, vt.gadi, vt.gaden, vt.loaitau, vt.loaighe, vt.sotoa, vt.soghe);
}

void xuatDS(VT vt[], int n){
	for(int i=0; i<n; i++){
		printf("\nTau %d", i+1);
		xuat1VT(vt[i]);
	}
}

void xuatDSTauDenHue(VT vt[], int n){
	printf("\nTau di den Hue: ");
	for(int i=0; i<n; i++){
		if(strcmp(vt[i].gaden, "Hue") == 0){
			xuat1VT(vt[i]);
		}
	}
}

void xuatDSTauDenHaNoi(VT vt[], int n){
	printf("\nTau di den Hue: ");
	for(int i=0; i<n; i++){
		if(strcmp(vt[i].gaden, "Ha Noi" && strcmp(vt[i].ng.ngayden, "08/11/2014")) == 0){
			xuat1VT(vt[i]);
		}
	}
}

int demKhachDiGheCung(VT vt[], int n){
	int dem=0;
	for(int i=0; i<n; i++){
		if(strcmp(vt[i].loaighe, "ghe cung") == 0)
			dem++;
	}
	return dem;
}

int main(){
	VT vt[100];
	int n;
	FILE *f;
	f = fopen("D:\\vetau.inp", "w");
	
	printf("Nhap so luong ve tau: ");
	scanf("%d", &n);
	
	nhapDS(vt, n, f);
	xuatDS(vt, n);	
	
	xuatDSTauDenHue(vt, n);
	xuatDSTauDenHaNoi(vt, n);
	printf("Co %d khach di tau loai ghe cung", demKhachDiGheCung(vt, n))
	
	return 0;
}
