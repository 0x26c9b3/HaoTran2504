#include <stdio.h>

typedef struct  SinhVien{
	char ma[9];
	char ten[31];
	int namsinh;
	float dtb;
}SV;

void nhap1SV(SV &sv, FILE *f){
	fflush(stdin);
	printf("\nNhap ma sinh vien: ");
	gets(sv.ma);
	fprintf(f, "\nMa: %s", sv.ma);
	fflush(stdin);
	printf("\nNhap ten sinh vien: ");
	gets(sv.ten);
	fprintf(f, "\tTen: %s", sv.ten);
	printf("\nNhap nam sinh sinh vien: ");
	scanf("%d", &sv.namsinh);
	fprintf(f, "\tNam sinh: %d", sv.namsinh);
	printf("\nNhap diem trung binh cua sinh vien: ");
	scanf("%f", &sv.dtb);
	fprintf(f, "\tDiem trung binh: %f", sv.dtb);
}

void nhapDS(SV sv[], int n, FILE *f){
	for(int i=0; i<n; i++){
		printf("\nNhap sinh vien thu %d: ", i+1);
		fprintf(f, "\nSinh vien thu %d: ", i+1);
		nhap1SV(sv[i], f);
	}
	
	fclose(f);
}

void xuat1SV(SV sv){
	printf("Ma: %s\tTen: %s\tNam sinh: %d\tDiem trung binh: %f", sv.ma, sv.ten, sv.namsinh, sv.dtb);
}

void xuatDS(SV sv[], int n){
	for(int i=0; i<n; i++){
		printf("\nSinh vien thu %d", i+1);
		xuat1SV(sv[i]);
	}
}

void xuatSVThiLai(SV sv[], int n){
	for(int i=0; i<n; i++){
		if(sv[i].dtb < 4)
			xuat1SV(sv[i]);
	}
}

void hoanVi(SV sv[], int sv1, int sv2){
	SV temp = sv[sv1];
	sv[sv1] = sv[sv2];
	sv[sv2] = temp;
}

void sapXep(SV sv[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++)
			if(sv[i].dtb < sv[j].dtb)
				hoanVi(sv, i, j);
	}
	
	xuatDS(sv, n);
}

int main(){
	SV sv[100];
	int n, sv1, sv2;
	FILE *f;
	f = fopen("D:\\sinhvien.inp", "w");
	
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	
	nhapDS(sv, n, f);
	xuatDS(sv, n);	
	xuatSVThiLai(sv, n);
	
	printf("\nNhap vi tri sinh vien can hoan vi: ");
	scanf("%d %d", &sv1, &sv2);
	hoanVi(sv, sv1, sv2);
	xuatDS(sv, n);
	sapXep(sv,n);
	
	return 0;
}
