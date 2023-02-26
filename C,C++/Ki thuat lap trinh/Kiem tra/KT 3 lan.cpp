#include<stdio.h>
int main ()
{
	int k,n = 0,c = 1;
		do
		{
		printf("\nK= ");
		scanf("%d",&k);
		if (k>100 || k<1)
		{
		printf("\nVui long nhap lai K!\n");
		n++;
		}
		if(n==3)
		{
		c = 0;
		break;
		}
		}while (n<3);
		if(c==0)
		printf("\nBan da nhap sai qua 3 lan!");
	return 0;
}
