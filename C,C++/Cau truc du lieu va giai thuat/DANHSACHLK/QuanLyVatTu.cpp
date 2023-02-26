#include<bits-stdc++.h>
#include<iostream>
#include<fstream>
#include<ctime>
#include<string>
#include<cstdlib>
#include<conio.h>

using namespace std;
// cau truc du lieu
typedef struct Chi_Tiet_HD CTHD;
typedef struct DnSach_CTHD DSCTHD;
typedef struct Hoa_Don HD;
typedef struct DnSach_HoaDon DSHD;
typedef struct Vat_Tu VTU;
typedef struct DnSach_Vtu DSVTU;
typedef struct Nhan_Vien NV;
typedef struct DnSach_Nvien DSNV;

//them xoa sua 
void DocGhiFileVTU(DSVTU &dsvt);
void ThemVatTu(DSVTU &dsvt);
string TaoMaVTU(DSVTU dsvt);
void XoaVTU(DSVTU dsvt);
void XuatDSVTU(DSVTU dsvt); 
//linh tinh

void ChuanHoaChu(string &a);
int Ktra_Trung(string a,  DSVTU dsvt);
int Ktra_MaVT();


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
    //danh sach chi tiet
    DSCTHD DanhSachChiTietHD;
    //pointer
    Hoa_Don *pNEXT;
};
typedef struct Hoa_Don HDPTR;

struct DnSach_HoaDon
{
    HDPTR *phead = NULL;
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
    bool trangthai;
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
    DSHD DanhSachHD;

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
            cout <<"2. Xuat danh sach vat tu" << endl;
            cout << "0.Thoat" << endl;

            int luachon;
                cout << "=> Lua chon cua ban:"; cin >> luachon;
              switch(luachon)
              {
                case 1:
                    {   
                    if(dsvt.sl>=100)
                        {
                            cout << "Them khong thanh cong! Data da full!" << endl;    
                            system("pause");
                        }
                        else 
                        {
                         ThemVatTu(dsvt);
                         printf("\nThem phan tu thanh cong!:");
                        }
                   
                        break;
                    }
                case 2:
                    {  
                        XuatDSVTU(dsvt);
                        system("pause");
                        break;
                    }
                case 3:
                    {
                        break;

                    }
                case 4:
                    {
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
//====================== CHUC NANG ===========================//
void ChuanHoaChu(string &a)
{
    while(a[0]==' ');
        {
            a.erase(a.begin()+0);
        }
    while(a[a.length() - 1] ==' ')
        {
            a.erase(a.begin() + a.length()-1);
        }
    //xoa ky tu giua
    for(int i=0;i<a.length();i++)
        {
            if (a[i]==' '&&a[i+1]==' ')
                {
                    a.erase(a.begin()+i);
                    i--;    
                }
        };
    //chuan hoa ki tu
    if (a[0] >= 97 && a[0] <= 122)
        {
            a[0]-=32;
        }
    for(int i = 1; i < a.length() ; i++)
        {
            if (a[0] >=97 && a[0] <=122)
                {
                    a[0]-=32;
                }
                else if(a[i]>=65 && a[0]<= 90)
                    {
                        a[0]+=32;
                    }
        }  
}
//===============================================================//
string TaoMaVTU(DSVTU dsvt)
{
    string a = "VT0000";
    do
    {
        for(int i = 2; i < a.length(); i++) 
         {
             a[i] = rand() % (57-48+1)+48;
         }
    }while(Ktra_Trung(a,dsvt)>=0);
    return a;
}
//===========================================================//
int Ktra_Trung(string a,  DSVTU dsvt)
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
void ThemVatTu(DSVTU &dsvt)
{   
     VTUPTR p = new Vat_Tu;
    p->ma_vt = TaoMaVTU(dsvt);
    cout << "=> Nhap ten vat tu: "<<endl;
    getline(cin,p->ten_vt);
    cout<<"=> Don vi tinh: "<<endl;
    getline(cin,p->don_vi_tinh);
    cout <<"=> Nhap vao so luong ton: "<<endl;
    cin >> p->soluongton;
    ChuanHoaChu(p->ma_vt);
    ChuanHoaChu(p->ten_vt);
    ChuanHoaChu(p->don_vi_tinh);
    dsvt.ds[dsvt.sl] = p;
    dsvt.sl++;
}
//===========================================================//
void XuatDSVTU(DSVTU dsvt)
{
    for(int i = 0 ; i < dsvt.sl ; i++)
    {   cout <<"==================Vat Tu i + 1 =================="<< endl;
        cout <<"=> Ten VTU:\t" << dsvt.ds[i]->ten_vt << endl;
        cout <<"=> Ma VTU:\t" << dsvt.ds[i]->ma_vt << endl;
        cout <<"=> Don vi tinh:\t" << dsvt.ds[i]->don_vi_tinh << endl;
        cout <<"=> So luong ton:\t" << dsvt.ds[i]->soluongton << endl;
    }
}
//=============================================================//
void DocGhiFileVTU(DSVTU &dsvt)
{
    ifstream filein;
    filein.open("dsvt.txt",ios_base::in);
    while(filein.eof!= true)
    {   
        dsvt.ds[dsvt.sl] = new VTU;
        getline(dsvt.ds[dsvt.sl]->ma_vt,',');
        getline(dsvt.ds[dsvt.sl]->ten_vt,',');
        getline(dsvt.ds[dsvt.sl]->don_vi_tinh,',');
        filein(dsvt.ds[dsvt.sl]->soluongton,',');
        filein.ignore();
        dsvt.sl++;
    }
    filein.close;
}
//=============================================================//
void XoaVTU(DSVTU dsvt)
{  
    string a;
    cout <<" Neu vat tu da duoc lap hoa don thi ko xoa duoc!"<< endl;
    cout <<" => Nhap vao ma vat tu can xoa:";  cin >> a;
    ChuanHoaChu(a);
    int vt = Ktra_MaVT(a, dsvt)
    //kiem tra ton tai
    if(dsvt.ma_vt==a)
    {
        cout <<"Khong the xoa vat tu, do da lap hoa don hoac khong ton tai!"<<endl;
        system("pause");
    }
    else
    {
        for(int i = vt; i < dsvt.sl - 1; i ++ )
            {
             dsvt.ds[i]->ma_vt == dsvt.ds[i+1]->ma_vt;
            }
    }
    
}   
int Ktra_MaVT(string a, DSVTU dsvt)
{
    for(int i = 0; i <a.length(); i++ )
    {
        if(dsvt.ds[i]->ma_vt==a)
        {
            //neu chua lap hoa don
            if(dsvt.ds[i]->trangthai == false)
                {
                    return i;   
                }
        }
    }return -1;
}
int main()
{   
    DSVTU dsvt;
    srand(time(NULL));
    Menu();
    getch();

    return 0;
}