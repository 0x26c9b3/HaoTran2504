//
//  QuanLyMatHang.cpp
//  KieuCauTruc
//
//  Created by Trần Minh Thái on 29/10/2021.
//
/*
 Cho thông tin mặt hàng gồm:
 - Mã mặt hàng: chuỗi gồm 5 ký tự
 - Tên mặt hàng: chuỗi gồm tối đa 20 ký tự
 - Loại mặt hàng (“Bánh kẹo”, “Nước giải khát”, “Cà phê”, …)
 - Xuất xứ: chuỗi gồm tối đa 10 ký tự
 - Số lượng
 - Đơn giá
 - Ngày sản xuất
 Viết chương trình gồm các chức năng sau:
 1. Nhập và xuất danh sách các mặt hàng
 2. In ra những mặt hàng có xuất xứ x
 3. Sắp xếp danh sách theo thứ tự tăng dần của đơn giá
 4. Sắp xếp danh sách theo thứ tự tăng dần của mã mặt hàng
 5. Tìm mặt hàng có mã số x
 6. Tìm mặt hàng có đơn giá lớn nhất
 7. Tính tổng thành tiền của các mặt hàng có loại là “Bánh kẹo”
 */

#include <stdio.h>
#include <string.h>
#define MAX 1000

typedef struct ttDate
{
    int ng;
    int th;
    int nm;
}Date;
typedef struct ttMatHang
{
    char maMH[6];
    char tenMH[21];
    char loaiMH[21];
    char xuatXu[11];
    int soLuong;
    int donGia;
    Date ngaySX;
}MatHang;

void NhapDate(Date *d);
void XuatDate(Date d);
void NhapMH(MatHang *mh);
void NhapDSMH(MatHang a[], int n);
void XuatMH(MatHang mh);
void XuatDSMH(MatHang a[], int n);
void InMHCoXuatXuX(MatHang a[], int n, char x[]);
void HoanVi(MatHang *a, MatHang *b);
void SapXepDonGia(MatHang a[], int n);
void SapXepMaMH(MatHang a[], int n);
int TimMHX(MatHang a[], int n, char x[]);
int TimMHCoDonGiaMax(MatHang a[], int n);
int TongTienBanhKeo(MatHang a[], int n);

void NhapDate(Date *d)
{
    printf("Ngay = ");
    scanf("%d", &d->ng);
    printf("Thang = ");
    scanf("%d", &d->th);
    printf("Nam = ");
    scanf("%d", &d->nm);
}
void XuatDate(Date d)
{
    printf("%02d/%02d/%d", d.ng, d.th, d.nm);
}
void NhapMH(MatHang *mh)
{
    fflush(stdin);
    printf("> Ma so = ");
    gets(mh->maMH);
    printf("> Ten mat hang = ");
    gets(mh->tenMH);
    printf("> Loai mat hang = ");
    gets(mh->loaiMH);
    printf("> Xuat xu = ");
    gets(mh->xuatXu);
    printf("> Ngay san xuat:\n");
    NhapDate(&mh->ngaySX);
    printf("> So luong = ");
    scanf("%d", &mh->soLuong);
    printf("> Don gia = ");
    scanf("%d", &mh->donGia);
}
void NhapDSMH(MatHang a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Nhap mat hang thu %d: \n", i);
        NhapMH(&a[i]);
    }
}
void XuatMH(MatHang mh)
{
    printf("- Ma so = %s", mh.maMH);
    printf("\n- Ten mat hang = %s", mh.tenMH);
    printf("\n- Loai mat hang = %s", mh.loaiMH);
    printf("\n- Xuat xu = %s", mh.xuatXu);
    printf("\n- Ngay san xuat: ");
    XuatDate(mh.ngaySX);
    printf("\n- So luong = %d", mh.soLuong);
    printf("\n- Don gia = %d",mh.donGia);
}
void XuatDSMH(MatHang a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("\nMat hang thu %d:\n", i);
        XuatMH(a[i]);
    }
}
void InMHCoXuatXuX(MatHang a[], int n, char x[])
{
    for(int i=0; i<n; i++)
    {
        if(strcmp(a[i].xuatXu, x)==0)
             XuatMH(a[i]);
    }
}
void HoanVi(MatHang *a, MatHang *b)
{
    MatHang tam = *a;
    *a=*b;
    *b=tam;
}
void SapXepDonGia(MatHang a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
            if(a[i].donGia>a[j].donGia)
                HoanVi(&a[i], &a[j]);
    }
}
void SapXepMaMH(MatHang a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
            if(strcmp(a[i].maMH, a[j].maMH)>0)
                HoanVi(&a[i], &a[j]);
    }
}
int TimMHX(MatHang a[], int n, char x[])
{
    for(int i=0; i<n; i++)
    {
        if(strcmp(a[i].maMH, x)==0)
            return i;
    }
    return -1;
}
int TongTienBanhKeo(MatHang a[], int n)
{
    int s=0;
    for(int i=0; i<n; i++)
    {
        if(strcmp(a[i].loaiMH, "banh keo")==0)
            s=s+a[i].soLuong*a[i].donGia;
    }
    return s;
}
int TimMHCoDonGiaMax(MatHang a[], int n)
{
    int vtMax = 0;
    for(int i=1; i<n; i++)
        if(a[i].donGia>a[vtMax].donGia)
            vtMax=i;
    return vtMax;
}
int main()
{
    MatHang a[MAX];
    char xx[11], msx[6];
    int n, vt, s, vt2;
    printf("* So mat hang = ");
    scanf("%d", &n);
    
    NhapDSMH(a, n);
    printf("\n* Danh sach mat hang:\n");
    XuatDSMH(a, n);
    
    printf("* Nhap xuat xu can in = ");
    gets(xx);
    printf("\n* Nhung mat hang co xuat xu %s:\n", xx);
    InMHCoXuatXuX(a, n, xx);
    
    SapXepDonGia(a, n);
    printf("\n* Danh sach mat hang sap xep theo don gia tang dan:\n");
    XuatDSMH(a, n);
    SapXepMaMH(a, n);
    printf("\n* Danh sach mat hang sap xep theo ma mat hang tang dan:\n");
    XuatDSMH(a, n);
    printf("\n* Nhap ma so x can tim = ");
    gets(msx);
    vt=TimMHX(a, n, msx);
    if(vt==-1)
        printf("- Khong tim thay");
    else
        printf("- Mat hang co ma so x xuat hien tai vi tri = %d", vt);
    vt2=TimMHCoDonGiaMax(a, n);
    printf("\n* Thong tin mat hang co don gia lon nhat:\n");
    XuatMH(a[vt2]);
    s= TongTienBanhKeo(a, n);
    printf("\n* Tong tien cac mat hang loai banh keo = %d", s);
        
    return 0;
}

