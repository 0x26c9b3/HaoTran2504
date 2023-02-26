#include<time.h>
#include<iostream>
#include<string>
using namespace std;



//======================CHI TIET Hoa Don ===========================//
struct Chi_Tiet_HD
{
    string ma_vt;
    float so_luong;
    int don_gia;
    float vat;
    bool trangthai;
};
typedef struct Chi_Tiet_HD CTHD;
struct DnSach_CTHD
{
    CTHD ds[20];
    int sl=0;

};
typedef struct DnSach_CTHD DSCTHD;
//======================-DSLK Hoa Don-===========================//
struct Hoa_Don
{
    //data
    string so_hd;
    string ngay_lap_hd;
    char loai;
    //pointer
    Hoa_Don *pNEXT;
};
typedef struct Hoa_Don* HD;

struct DnSach_HoaDon
{
    HD pHEAD == NULL;
    int sl = 0;

};
typedef struct DnSach_HoaDon DSHD;
//======================-MANG Vat Tu-===========================//
struct Vat_Tu
{   //data
    string ma_vt;
    string ten_vt;
    string don_vi_tinh;
    float soluongton;
};
typedef struct Vat_Tu* VTUPTR;

struct DnSach_Vtu
{
    VTUPTR ds[100];
    int sl;
};
typedef struct DnSach_Vtu DSVTU;
//======================TREE Nhan Vien===========================//
struct Nhan_Vien
{   //data
    int ma;
    string ho;
    string ten;
    string phai;
    //danh sach hoa don

    DSCTHD DanhSachChiTietHD;

    //pointer
    Nhan_Vien *pLeft;
    Nhan_Vien *pRight;
};
typedef struct Nhan_Vien* NVPTR;//tree

struct DnSach_Nvien
{
    NVPTR ds = NULL;
    int sl = 0;
};
typedef struct DnSach_Nvien DSNV;
//======================MENU===========================//
void Menu()
{
    DSVTU dsvt;
    bool kt=true;

    while(true)
        {   system("cls");
            cout <<"1.Them vat tu" << endl;
            cout <<"2. Xuat danh sach vat tu" << endl;
            cout << "0.Thoat" << endl;

            int luachon;
                cout << "=> Lua chon cua ban:"; cin >> luachon;
              switch(luachon)
              {
                case 1:
                    {   if(dsvt.sl>=100)
                            {cout << "Them khong thanh cong! Data da full!" << endl;
                            system("pause");
                            }
                            else
                                {
                                    ThemVatTu(DSVTU dsvt);
                                }

                        break;
                    }
                case 2:
                    {
                        XuatDSVTU(DSVTU dsvt);
                        system("pause");
                        break;
                    }
                case 0:
                    {
                        kt=false;
                        break;
                    }
              }
        }
}
void ChuanHoaChu(string &a);
int KtraTrung(string a,  DSVTU dsvt);
void ThemVatTu(DSVTU &dsvt);
string TaoMaVTU(DSVTU dsvt);
void XuatDSVTU(DSVTU dsvt);

//====================== CHUC NANG ===========================//
void ChuanHoaChu(string &a)
{
    while(a[0]== ' ');
        {
            a.erase(a.begin()+0);
        }
    while(a[a.length()-1]== ' ')
        {
            a.erase(a.begin()+a.length()-1);
        }
    //xoa ky tu giua
    for(int i=0;i<a.length();i++)
        {
            if (a[i] == ' '&& a[i+1] ==' ')
                {
                    a.erase() = a.begin()+i;
                    i--;
                }
        }
    //chuan hoa ki tu
    if (a[0] > = 97 && a[0] <= 92)
        {
            a[0]-=32;
        }
    for(int i = 1; i < a.length() ; i++)
        {
            if (a[0] >97 && a[0] < 92)
                {
                    a[0]-=32;
                }
                else if(a[i]>=65 && a[0]<= 90)
                    {
                        a[0]+=32;
                    }
        }
}
void ThemVatTu(DSVTU &dsvt)
{
    VTUPTR p = new Vat_Tu;
    p->ma_vt = TaoMaVTU(dsvt);
    cout << "=> Nhap ten vat tu: "<<endl;
    cin.ignore;
    getline(cin,p->ten_vt);
    cout<<"=> Don vi tinh: "<<endl;
    getline(cin,p->don_vi_tinh);
    cout <<"=> Nhap vao so luong ton: "<<endl;
    cin >> p->soluongton;
    dsvt.ds[dsvt.sl] = p;
    dsvt.sl++;
}
//===========================================================//
string TaoMaVTU(DSVTU dsvt)
{
    string a = VT0000;
    do
    {
        for(i = 2; i < a.length(); i++)
         {
             a[i] = rand() % (57-48+1)+48;
         }
    }while(KtraTrung(a,dsvt)>=0);
    return a;
}
//===========================================================//
int KtraTrung(string a,  DSVTU dsvt)
{
    for(int i=0; i < dsvt.sl ; i++)
    {
        if(dsvt.ds[i]->ma_vt==a)
        {
            return i;
        }
    }return -1;
}
//===========================================================//
void XuatDSVTU(DnSach_Vtu dsvt)
{
    for(int i = o;i < dsvt.sl;i++)
    {   cout <<===========Vat Tu==================<<endl;
        cout<<"*Ten VTU:"<<dsvt.ds[i]->ten_vt<<endl;
        cout <<"*Ma VTU:" << dsvt.ds[i]->ma_vt<<endl;
        cout <<"*Don vi tinh: " << dsvt.ds[i]->don_vi_tinh<<endl;
        cout <<"*So luong ton: " << dsvt.ds[i]->soluongton<<endl;

    }
}

int main()
{
    srand(time(NULL));
    DSVTU ds;
    string a = TaoMaVTU(ds);

    cout<<a<<endl;
    Menu();

    return 0;
}
