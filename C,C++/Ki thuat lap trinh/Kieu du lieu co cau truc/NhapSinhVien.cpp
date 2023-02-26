//
//  NhapSinhVien.cpp
//  KieuCauTruc
//
//  Created by Trần Minh Thái on 27/10/2021.
//

#include<stdio.h>

struct ttSinhVien
{
    char ms[11];
    char hoTen[31];
    float giuaKy;
    float thucHanh;
    float lyThuyet;
    float diemTK;
};
typedef struct ttSinhVien SinhVien;

void Nhap(SinhVien *sv);
void Xuat(SinhVien sv);

void Nhap(SinhVien *sv)
{
    printf("Ma so sv = ");
    gets(sv->ms);
    printf("Ho ten sv = ");
    gets(sv->hoTen);
    printf("Diem giua ky = ");
    scanf("%f", &sv->giuaKy);
    printf("Diem thuc hanh = ");
    scanf("%f", &sv->thucHanh);
    printf("Diem ly thuyet = ");
    scanf("%f", &sv->lyThuyet);
    
    sv->diemTK=sv->giuaKy*0.1f+sv->thucHanh*0.3f+sv->lyThuyet*0.6f;
}

void Xuat(SinhVien sv)
{
    printf("Ma so sv = %s\n", sv.ms);
    printf("Ho ten = %s\n", sv.hoTen);
    printf("Diem giua ky = %f\n", sv.giuaKy);
    printf("Diem thuc hanh = %f\n", sv.thucHanh);
    printf("Diem ly thuyet = %f\n", sv.lyThuyet);
    printf("Diem tong ket mon = %f\n", sv.diemTK);
}

int main()
{
    SinhVien x;
    Nhap(&x);
    printf("\n>>Thong tin sinh vien:\n");
    Xuat(x);
    return 0;
}

