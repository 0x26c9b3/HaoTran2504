#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
 
// dinh nghia cau truc luu tru thong tin sach trong thu vien sach.
struct Thuviensach
{
    char Masach[7];
   char Tensach[100];
   float Giasach ;
};
// khai bao mang de luu tru sach.
struct Thuviensach s[1000];
int n= 0;
// ham hien thi menu.
int Hienthimenu()
{
    clrscr();
   printf("\t\t\tQUAN LY SACH TRONG THU VIEN.\n");
   printf("1. Nhap danh sach sach.\n");
   printf("2. Ghi danh sach sach vao tep tin.\n");
   printf("3. In danh sach sach.\n");
   printf("4. Doc danh sach sach tu tep tin.\n");
   printf("5. Thoat.\n");
   printf("Ban chon: ");
   int chon;
   scanf("%d",&chon);
   return chon;
}
// ham nhap danh sach sach
void nhapdanhsachsach()
{
    printf("*********************\n");
   printf("Nhap danh sach sach\n");
   printf("*********************\n");
   // nhap danh sach sach.
   do
   {
       printf("Quyen sach thu %d:\n",n+1);
      printf("\tMa sach: ");
      fflush(stdin);
      gets(s[n].Masach);
      if (strlen(s[n].Masach)==0)
      {
          break;
      }
      printf("\tTen sach: ");
      fflush(stdin);
      gets(s[n].Tensach);
      printf("\tGia sach: ");
      scanf("%f",&s[n].Giasach);
      n++;
 
   }while (1==1);
   printf("\nBam enter de tiep tuc.");
   getch();
}
 
void Ghidanhsachvaoteptin()
{
   FILE *fp;
 
   clrscr();
   printf("\n\t\tGHI DANH SACH VAO TEP TIN:");
   clrscr();
   fp=fopen("Thuviensach.txt","w");
   if(fp==NULL)
   {
       return;
   }
   // ghi du lieu vao file
 
   for (int i=0;i<n;i++)
   {
       fwrite(&s[i],sizeof(struct Thuviensach),1,fp);
    }
 
   fclose(fp);
   clrscr();
   printf("\nBam enter de tiep tuc.");
   getch();
}
 
void Indanhsachsach()
{
    printf("++++++++++++++++++++++++++++++\n");
   printf("DANH SACH SACH TRONG THU VIEN.\n");
   printf("++++++++++++++++++++++++++++++\n");
 
   printf("%-10s %-15s  Gia\n","Ma sach","Ten sach","Gia sach");
   for (int i=0;i<n;i++)
   {
       printf("%-10s %-15s %.4f\n",s[i].Masach,s[i].Tensach,s[i].Giasach);
   }
   printf("\nBam enter de tiep tuc.");
   getch();
}
void Docdanhsachsachtuteptin()
{
    int i = 0;
   FILE *fp;
 
   // mo file o che do doc.
   fp=fopen("thuviensach.txt","r");
   if(fp==NULL)
   {
       printf("Loi roi!");
      return;
   }
   //doc het.
   while(!feof(fp))
   {
        fread(&s[i],sizeof(struct Thuviensach),1,fp);
       i++;
   }
   n=i-1;
   printf("\t\nTong so sach trong thu vien la:%d",n);
   fclose(fp);
   printf("\nBam enter de tiep tuc.");
   getch();
}
 
void main()
{
   int chon;
   do
   {
       chon = Hienthimenu();
      switch (chon)
      {
          case 1:
           nhapdanhsachsach();
           break;
         case 2:
           Ghidanhsachvaoteptin();
           break;
         case 3:
           Indanhsachsach();
           break;
         case 4:
           Docdanhsachsachtuteptin();
           break;
      }
   }while(chon!=5);
getch();
}
