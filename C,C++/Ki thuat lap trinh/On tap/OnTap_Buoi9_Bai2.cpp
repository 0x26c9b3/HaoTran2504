#include <stdio.h>

typedef struct DATE{
	int ngay;
	int thang;
	int nam;
};

typedef struct MatHang{
	char ma[6];
	char ten[41];
	char nuoc[21];
	DATE date;	
	int soluong;
	int dongia;
}MH;

void nhap1MH(MH &mh){
	fflush(stdin);
	printf("Nhap ma mat hang: ");
	gets(mh.ma);
	fflush(stdin);
	printf("Nhap ten mat hang: ");
	gets(mh.ten);
	fflush(stdin);
	printf("Nhap nuoc san xuat mat hang: ");
	gets(mh.nuoc);
	printf("Nhap ngay: ");
	scanf("%d", &mh.date.ngay);
	printf("Nhap thang: ");
	scanf("%d", &mh.date.thang);
	printf("Nhap nam: ");
	scanf("%d", &mh.date.nam);
	printf("Nhap so luong: ");
	scanf("%d", &mh.soluong);
	printf("Nhap don gia: ");
	scanf("%d", &mh.dongia);
}
 
void nhapDS(MH mh[], int n){
	for(int i=0; i<n; i++){
		printf("Nhap mat hang thu %d: \n", i+1);
		nhap1MH(mh[i]);
	}
}

void xuat1MH(MH mh){
	printf("Ma: %s\tTen: %s\tNuoc: %s\tNgay thang nam: %d/%d/%d\tSo luong: %d\tDon gia: %d\t", mh.ma, mh.ten, mh.nuoc, mh.date.ngay, mh.date.thang, mh.date.nam, mh.soluong, mh.dongia);
} 

void xuatDS(MH mh[], int n){
	for(int i=0; i<n; i++){
		printf("\n");
		xuat1MH(mh[i]);
	}
}

void matHangMax(MH mh[], int n){
	int max = 0;
	MH mhMax;
	for(int i=0; i<n; i++){
		if(max < (mh[i].dongia * mh[i].soluong)){
			max = mh[i].dongia * mh[i].soluong;
			mhMax = mh[i];
		}	
	}
	
	xuat1MH(mhMax);
}

void sapXep(MH mh[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(mh[i].dongia > mh[j].dongia){
				MH temp = mh[i];
				mh[i] = mh[j];
				mh[j] = temp;
			}
		}
	}
	
	xuatDS(mh, n);
}

void luuTep(MH mh[], int n){
	FILE *f;
	f = fopen("dsmh.dat", "w");
	for(int i=0; i<n; i++){
		fprintf(f, "\nMat hang thu %d: ", i);
		fprintf(f, "Ma: %s\tTen: %s\tNuoc: %s\tNgay thang nam: %d/%d/%d\tSo luong: %d\tDon gia: %d\t", mh[i].ma, mh[i].ten, mh[i].nuoc, mh[i].date.ngay, mh[i].date.thang, mh[i].date.nam, mh[i].soluong, mh[i].dongia);
	}
	
	fclose(f);
}

int main(){
	int n;
	MH mh[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	
	nhapDS(mh, n);
	matHangMax(mh, n);
	sapXep(mh, n);
	luuTep(mh, n);
	
	return 0;
}
