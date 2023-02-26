#include<stdio.h>//3456 
int DemUocSo(int n)
	{
	int dem = 0; 
		for(int i =1; i<=n ; i++ )
		{
		if(n%i==0)
		dem++;
		}
	return dem;  
	} 
int KiemTraSNT(int n)
{
	if (DemUocSo(n)==2)
	return 1;//la so nguyen to 
	else 
	return 0;//ko la so nguyen to 
 } 
int DemCacSoLaSNT(int n)
{
	int d=0; 
	do 
	{ 
	if (KiemTraSNT(n%10)==1)
	d++;	
	n=n/10; 
	}while(n!=0);
	return d;
 } 

int main()
{
	int n;
	printf("\nNhap vao so nguyen N:");
	scanf("%d",&n);
	printf("\n N co %d so nguyen to",DemCacSoLaSNT(n));
	return 0; 
 } 
