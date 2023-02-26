#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
    char s1[MAX], s2[MAX], s3[MAX], s4[MAX];
    
    printf("S1 = ");
    gets(s1);
    
    int n = strlen(s1);
    //s2=s1;
    for(int i=0; i<n; i++)
        s2[i]=s1[i];
    
    strcpy(s3, s1);//s3 = s1;
    //s4 = Lay 4 ky tu dau tien cua s1
    //for(int i=0; i<4; i++)
        //s4[i]=s1[i];
    strncpy(s4, s1, 4);
    printf("S2 = %s\n", s2);
    printf("S3 = %s\n", s3);
    printf("S4 = %s\n", s4);

    return 0;
}
