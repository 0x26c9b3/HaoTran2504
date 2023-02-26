#include <stdio.h>
#include <string.h>
#define MAX 100

int ViTriTimX(char s[],char x)
{
	int n =strlen(s);
	for (int i = 0;i<n;i++)
	{
			if(s[i]==x)
			return i;
	}
	return -1;
}
void XuatChuoiNguoc(char s[])
{
	int n = strlen(s);
	for (int i = n -1;i>=0;i--)
	{
		printf("%c",s[i]);	
	}
}
int demkhoangtrang(char s[])
{
    int dem = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
            dem++;
    }
    return dem;
}
int doixung(char s[MAX])
{			int n = strlen(s);           
            for(int i=0; i < n/2; i++)//
            {
                        if(s[i] != s[n-1-i])
                        {
                                    return 0;
                        }
            }
            return 1;
}
int main ()
{
            char s[MAX];
            char x = 'A';
            printf("\nxin moi ban nhap chuoi\n");
            gets(s);
            if(doixung(s)==0)
            {
                        printf("\nchuoi vua nhap khong phai chuoi doi xung\n");
            }
            if(doixung(s)==1)
            {
                        printf("\nchuoi vua nhap la chuoi doi xung\n");
            }
            printf("\nSo khoang trang = %d",demkhoangtrang(s));
            printf("\nChuoi dao nguoc la : ");
            XuatChuoiNguoc(s);
            printf("\nVi tri cua x tim duoc nam o vi tri s[%d]",ViTriTimX(s,x));
            return 0 ;
}
