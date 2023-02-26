#include <stdio.h>
int Tong(int n)
{
	if(n<=0=)
	return 0;
	return Tong(n-2)+n;
}
int main()
{
	int n;
	int sl,sc;
	printf("Nhap n:");
	scanf("%d",&n);
	if( n%2!=0)
	{
		sl = Tong(n);
		sc= Tong(n-1);
	}
	else
	{
		sl= Tong (n-1);
		sc= Tong (n);
	}
	printf("tong cac so chan: %d",sl);
	printf("tong cac so le: %d",sc);
	return 0;
}
