#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
void NhapChuoi(char s[50])
{
	printf("Moi ban nhap vao chuoi ki tu:");
	gets(s);
	
 }
 void ChuyenKiTuDau(char s[50])
 {
 	s[0]-=32;
 	printf("Chuoi ma ban vua nhap la : %s\n",s);
 }
 int DemKiTu(char s[50])
 {	int d= 0,len1 = strlen(s);
 	for (int i = 0 ; i < len1; i++)
 	{
 		for (int j = i+1 ; j < len1;j++)
		 {
		 if (s[i]==s[j])
		 d++;
		}
	}return d;
 }
 void XuatChuoi(char s[50])
 {	
 	printf("Chuoi ma ban vua nhap la : %s\n",s);
 }
 void XuatChuoiNguoc(char s[50])
{
    int n = strlen(s);
    for (int i = n - 1; i >= 0; i--)
        printf("%c", s[i]);
}
void XuatCacCumTuGiong(char s1[50], char s2[50])
{
	  for(int i = 0; i < strlen(s1); i++)
    {
        for(int j = 0; j < strlen(s2); j++)
        {
            if(s1[i] == s2[j])
              printf("\nCac ki tu giong: %c %c \t",s1[i],s2[j]);
        }
    }
}


int main()
{
	char s1[50],s2[50];
	NhapChuoi(s1);
	XuatChuoi(s1);
	ChuyenKiTuDau(s1);

	NhapChuoi(s2);
	XuatChuoi(s2);
	printf("Chuoi sau khi dao nguoc : ");
	XuatChuoiNguoc(s1);

	printf("\nSo ki tu trung nhau: %d ",DemKiTu(s1));
	
		XuatCacCumTuGiong(s1,s2);


 return 0;
}

