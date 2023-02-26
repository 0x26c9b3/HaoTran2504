#include<conio.h>
#include<stdio.h>
#include<string.h>
#define MAX 100
int doixung(char s[MAX])
{			int n = strlen(s);           
            for(int i=0; i < n/2; i++)//MADAM
            {
                        if(s[i] != s[n-1-i])
                        {
                                    return 0;
                        }
            }
            return 1;
}
int main()
{
            char s[MAX];
            printf("xin moi ban nhap chuoi\n");
            gets(s);
            if(doixung(s)==0)
            {
                        printf("chuoi vua nhap khong phai chuoi doi xung\n");
            }
            if(doixung(s)==1)
            {
                        printf("chuoi vua nhap la chuoi doi xung\n");
            }
            return 0 ;
}
