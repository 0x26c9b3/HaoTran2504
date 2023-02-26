#include<stdio.h>
int TinhTong(int n);
int main()
 {
 	int n;
 	printf("Nhap vao so nguyen n: "); 
	scanf("%d",&n);
	printf("Tong cua S = %d ",TinhTong(n));
	return 0; 
  }
int TinhTong(int n)
{
	int kq = 0;
	for (int i =1;i<=n;i++)
		kq+=i;//kq = kq + i//i+= i+1  
	return kq; 
 } 
