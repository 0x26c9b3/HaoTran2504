//==========================================================================================================================
//Tran Chi Hao
//MSSV:2180607472
//Lop:21DTHE1
//==========================================================================================================================
#include <stdio.h>
#include <math.h>
//==========================================================================================================================
void NhapSoNguyen(int& sn,const char* chuoi,int min,int max)
{
	do
	{
  	printf("\nNhap %s :[%d ... %d ] ",chuoi,min,max);
    scanf("%d",&sn);
    if ((sn<min)||(sn>max))
    printf("Ban nhap sai ! "); 
	}while ((sn<min)||(sn>max));
}
//==========================================================================================================================
int DemCacSNT(int n)
{
	int dem=0; 
	for (int i= 1 ;i <=n  ; i++)
	{
		if( n % i == 0)
		dem++;
	}
	return dem;
 } 
//==========================================================================================================================
int KTSNT ( int n ) //SO NGUYEN TO 
{
 int dem = 0; 
 for ( int i =1 ; i <= n ; i++){
 	if ( n%i == 0) 
 	dem++; 
 } 
 if (dem == 2)
 return 1; 
}
//==========================================================================================================================
void LietKeCacSNT (int n)
{
	printf(" Xuat ra cac so nguyen to trong pham vi 1 ... %d: ",n);
	for (int i= 1 ;i <=n  ; i++)
	{
		if( KTSNT( i)==1)
		printf("%d, ", i); 
	} 
	printf("\b\b");
}
//==========================================================================================================================
int TongCacSNT (int n){
	int tong = 0;
	for ( int i = 1 ; i <=n ;i++)
	{	
		if(KTSNT(i)==1)  
		tong+=i ;
	 } 
	 return tong; 
}
//==========================================================================================================================
long TichCacSNT ( int n){
	long tich= 1;
	for ( int i = 1 ; i <=n ;i++)
	{	
		if(KTSNT(i)==1)  
		tich*=i;
	 } 
	 return tich; 
}
//==========================================================================================================================
int main ()
{
	int n;
	NhapSoNguyen(n ,"so nguyen ", 1 , 10000 );
	LietKeCacSNT(n);
	printf("\n Dem cac so nguyen to trong pham vi : 1 ... %d:\t%d ",n,DemCacSNT(n));
	printf("\n Tong cac so nguyen to trong pham vi : 1 ... %d:\t%d",n,TongCacSNT(n));
	printf("\n Tich cac so nguyen to trong pham vi : 1 ... %d:\t%ld",n,TichCacSNT(n));
	return 0;
 }
 //==========================================================================================================================
