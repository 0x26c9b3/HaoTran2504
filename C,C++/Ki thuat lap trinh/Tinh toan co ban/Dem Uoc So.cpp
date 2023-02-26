#include<stdio.h>
int main()
{
	int n;
	printf("N=");
	scanf("%d",&n);
	int dem=0; 
	for (int u= 1 ;u <=n  ; u++)
	{
		if( n % u == 0)
		dem++;
	} 
	printf("So uoc so la: %d",dem);
	return 0;
 } 
