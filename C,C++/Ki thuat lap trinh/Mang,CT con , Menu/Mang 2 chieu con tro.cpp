#include <stdio.h>

#include <stdlib.h>
int main()
{
	int *a= NULL,h,c;
	
	printf("Nhap kt mang hxc:");
	scanf("%d%d",&h,&c);
	a = (int *)malloc(dong * cot * sizeof(int));
	printf("\nNhap mang:");
	
	for (int i=0;i <h;i++)
		for (int j=0 ;j<c;j++)
		{
			printf("\nNhap a[%d][%d]:",i,j);
			scanf("%d",(a+i*c+j));
		}

		for(int i=0;i<h;i++)
	{
		for (int j = 0 ;j<c;j++)
		{
			printf("%d\t",*(a+i*c+j));
		}
		printf("\n");
	}
	
	return 0;
}
