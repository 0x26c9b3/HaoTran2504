#include <stdio.h>
#include <math.h>
int main ()
{
	int n;
	scanf("%d",&n);
	for ( int i = 1 ; i*i <=n ; i++)
	{
		if (i*i == n)
			printf("\n%d",i);
			
	}return 0;
}
