#include <stdio.h>
//S(n) =1 + 1/(1 + 2) + 1/( 1 + 2 + 3 + …..) + 1/( 1 + 2 + 3 + …. + N)
void Nhap(int &n)
{
	int n;
	do
	{
		scanf("%d",&n);
		if(n<1)
			printf("Nhap sai, yeu cau nhap lai!");
	}while(n<1);
}
//n = 10
float Tinh(int n)
{
	float s=0, t=0;
	for(int i=1; i<=n; i++)
	{
		t=t+i;
		s=s+(float)1/t;
	}
	return s;
}

int main()
{
	int n; 

	printf("Nhap so nguyen n: ");
	Nhap(n);
	printf("Ket qua la: %f",Tinh(n));

	return 0;
}
