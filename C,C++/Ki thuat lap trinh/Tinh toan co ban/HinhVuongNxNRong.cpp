#include<stdio.h>
int main ()
{
	int n;//khai bao bien
	printf("Nhap N = ");//nhap vo^
	scanf("%d",&n);//nhap vao so n
	for (int h = 1;h<=n;h++)//kiem tra hang 
	{
		for(int c = 1;c<=n;c++)//kiem tra cot ( cot = 1 hoac cot < = n cot + 1)
		{
			if( h == 1|| h == n||c==1||c==n)//neu la hang 1,n cot 1,n
		printf("* ");//thi in ra cai nay` 
			else//con` khong
		printf("  ");//thi in ra cai' nay`
		}
	printf("\n");//in ra hang`
	}
	return 0;
}
