#include<stdio.h>
int main()
{
	int n;
	printf("N=");
	scanf("%d",&n);
	int dem=0; 
	for (int u = 1 ;u <=n  ; u++)
	{
		if( n % u == 0)
		dem++;
	} 
	if (dem == 2)
		printf("%d La so nguyen to",n);
	else
		printf("%d Khong la so nguyen to ",n);
	return 0;
 } 
