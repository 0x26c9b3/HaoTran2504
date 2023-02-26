#include <bits-stdc++.h>
using namespace std;

//====================//
struct VatTu{
    string maVT;
    string tenVT;
    string donVi;
    float sLuongTon;
}VT;
//====================//
struct ListVatTu{
    VT *danhSach[100];
    int soLuong = 0;
}List_VT;
//====================//
struct ChiTietHoaDon{
    string maVT;
    float soLuong;
    int donGia;
    float VAT;
    bool trangThai;//1 - Mua , 0 - Tra
}CTHD;
struct ListChiTietHD{
    CTHD ds[20];
    int sl = 0;
}List_CTHD;
//====================//
struct HoaDon{
    //data
    string soHD;
    string ngayLapHD;
    char loai;//X: xuat - N: nhap
    //dschitiet hd
    List_CTHD = ListCTHD;
    //pointer
    HoaDon *Next;
}HD;
struct ListHoaDon{
    //Danh Sach Lien Ket
    HD *Head = NULL;
    int soLuong = 0;
}List_HD;
//====================//
struct NhanVien{
    //data
    int maNV;
    string ho;
    string ten;
    string phai;
    //dshd
    List_HD ListHD;
    //pointer
    NhanVien *Left;
    NhanVien *Right;
}Tree_NV;
struct ListNhanVien{
    Tree_NV danhSach = NULL;
    int soLuong = 0;
}List_NV;



