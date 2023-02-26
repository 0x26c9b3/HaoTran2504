#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
    char s1[MAX], s2[MAX];
    
    printf("S1 = ");
    gets(s1);
    
    printf("S2 = ");
    gets(s2);
    
    int kq = strcmp(s1, s2);
    if(kq==0)
        printf("s1=s2");
    else if(kq>0)
        printf("s1>s2");
    else
        printf("s1<s2");
    
    return 0;
}
