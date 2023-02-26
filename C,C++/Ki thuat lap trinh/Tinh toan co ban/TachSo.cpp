#include<stdio.h>
void CacPhanTu(int n)
{
	do 
	{ 
		printf("%d\n",n%10); 
		n=n/10; 
	}while (n>0); 
}
int main()
{	
	int n;
	printf("Nhap vao so nguyen duong n =");
	scanf("%d",&n);
	CacPhanTu(n);
	return 0; 
}
//#include <stdio.h>
//void inham(int n)
//{
//   do
//   {
//       printf("%d\n",n%10);
//       n=n/10;
//   }while(n>0);
//}
//int main()
//{
//    int n;
//    printf("nhap vao so nguyen n: ");
//    scanf("%d", &n);
//    inham(n);
//    
//    return 0;
//}
