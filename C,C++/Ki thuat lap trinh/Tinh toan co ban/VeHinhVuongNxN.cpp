#include<stdio.h>
int main ()
{
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);//7
	
	for (int d = 1;d<=n;d++)
	{
		for(int f= 1;f<=n;f++)
		{
		printf("* ");
		}
	printf("\n");
	}
	printf("\n");
	return 0;
	
}
