#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{int a,b;
    scanf("%d%d",&a,&b);
    int answer = 1;
    for(;b>0;answer=answer*a,b--);
    printf("%d",answer);	
 return 0;
}

