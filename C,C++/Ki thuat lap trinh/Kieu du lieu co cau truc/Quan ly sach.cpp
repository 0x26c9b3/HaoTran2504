#include<stdio.h>
#include<string.h>
#include<conio.h>

typedef struct ttSach
{   int masach;
    char tensach[50];
    char tentacgia[50];
    int soluong;
	int giatien;
		int ngay;
	int thang;
	int nam;
	char nxb[50];
	int sotrang; 
}sach;
 
void nhap_1_cuon_sach(sach &x)
{   printf("\nNhap vao ma sach:");
    scanf("%d",&x.masach);
	fflush(stdin);
    printf("\nNhap vao ten sach:");
    gets(x.tensach);
    printf("\nNhap vao ten tac gia:");
    gets(x.tentacgia);
    printf("\nNhap ten nha xuat ban: ");
    gets(x.nxb);
    printf("\nNhap vao so trang cua sach:");
    scanf("%d",&x.sotrang);
    fflush(stdin);
    printf("\nNhap vao so luong cuon sach:");
    scanf("%d",&x.soluong);
	fflush(stdin);
	printf("\nNhap vao ngay san xuat:[1->31]:");
    scanf("%d",&x.ngay);
    fflush(stdin);
    printf("\nNhap vao thang san xuat [1 ->12]:");
    scanf("%d",&x.thang);
    fflush(stdin);
    printf("\nNhap vao nam san xuat [Nam > 0]:");
    scanf("%d",&x.nam);
    fflush(stdin);
    printf("\nNhap vao gia thanh:");
    scanf("%d",&x.giatien);
    fflush(stdin);
}
void nhap_nhieu_cuon_sach(sach a[],int n)
{
    for(int i=0;i<n;i++)
        nhap_1_cuon_sach(a[i]);
}
 
void xuat_nhieu_cuon_sach(sach a[],int n)
{   
for (int i=0;i<n;i++)
	{
	printf("\nMa sach:%d \tTen sach:%s \tTen nxb : %s\tTen tac gia:%s \tSo trang:%d",a[i].masach,a[i].tensach,a[i].nxb,a[i].tentacgia,a[i].sotrang);
	printf("\n\tNgay thang nam san xuat:%d/%d/%d",a[i].ngay,a[i].thang,a[i].nam);
	printf("\n\tSo luong:%d\tGia thanh:%d\n",a[i].soluong,a[i].giatien);
	}
}
 
void tim_kiem_theo_masach(sach a[],int n)
{
    int i;
    int temp;
    //printf("trong danh sach co %d sach\n,shs);
    printf("\nNhap ma sach can tim:");
    scanf("%d",&temp);fflush(stdin);
 
    for(i=0;i<n;++i)
    {
        if(a[i].masach==temp)break;
    }
 
    if(i==n)
        printf("\nKhong co ma sach nay\n");
    else
    {   printf("\nMa sach la:%d",a[i].masach);
        printf("\nTen sach la:%s",a[i].tensach);
        printf("\nTen tac gia la: %s",a[i].tentacgia);
        printf("\nTen nha xb la: %s",a[i].nxb);
        printf("\nSo trang: %d",a[i].sotrang);
        printf("\nSo luong la:%d",a[i].soluong);
        printf("\nNgay thang nam san xuat:%d/%d/%d",a[i].ngay,a[i].thang,a[i].nam);
    }
}
int Hienthimenu(int &chon)
{
	printf("\n**==================MENU================**");
   printf("\n>>\tQUAN LY SACH TRONG THU VIEN\t<<\n");
   printf(">> 1. Nhap thong tin sach \t\t<<\n");
   printf(">> 2. Xuat cac thong tin sach da nhap \t<<\n");
   printf(">> 3. Tim kiem thong tin sach\t\t<<\n");
   printf(">> 4. Thoat\t\t\t\t<<\n");
   printf("\n**==================END=================**");
	printf("\n>> Ban chon:");
   scanf("%d",&chon);
   return chon;
}
int main()	
{    int n;
    sach a[100];
    printf("Nhap vao so loai sach:");
    scanf("%d",&n);
   int chon;
   do
   {
       chon = Hienthimenu(chon);
      switch (chon)
      {
          case 1:
         nhap_nhieu_cuon_sach(a,n);
           break;
         case 2:
       xuat_nhieu_cuon_sach(a,n);
           break;
         case 3:
       tim_kiem_theo_masach(a,n);
           break;
      }
   }while(chon!=4);


 return 0;
}
