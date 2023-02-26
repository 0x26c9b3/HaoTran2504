
#include <stdio.h>
#include <math.h>
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
//===================================//
void XuatCacUocSo(int n)
{
	for (int u= 1 ;u <=n  ; u++)
	{
		if( n % u == 0)
		printf("%d ", u); 
	} 
	printf("\b\b");
} 
//=================================//
int DemCacUocSo(int n)
{
	int dem=0; 
	for (int u= 1 ;u <=n  ; u++)
	{
		if( n % u == 0)
		dem++;
	}
	return dem;
 } 
 //==============================//
int TongCacUocSo (int n){
	int tong = 0;
	for ( int i = 1 ; i <=n ;i++)
	{	
		if(n %i == 0)  
		tong+=i ;
	 } 
	 return tong; 
}
//===================================//
int TichCacUocSo ( int n){

long tich =1;
for(int i = 1; i <= n; i++)
  {
    if(n % i == 0)
    tich = tich * i;
  }
return tich; 
}
//===========================================//
int KTSNT ( int n ) //SO NGUYEN TO 
{
 int dem = 0; 
 for ( int i =1 ; i <= n ; i++){
 	if ( n%i == 0) 
 	dem++; 
 } 
 if (dem == 2)return 1; 
}
//===============================================//
int KTSHT ( int n )//SO HOAN THIEN
	{
	    int tong = 0;
	    for (int i = 1; i < n; i++)
	    {
	    		if (n%i == 0) 
	            tong  += i;
	    }
	    if (tong  == n)
	    return 1;
	    else 
	    return 0; 
	}
//=====================================================//
int KTSCP ( int n )//SO CHINH PHUONG
{
	for (int i=2;i<=n/2;i++)
    if(i*i == n )
    return 1; 
	else 
	return 0; 
 } 
 //==========================================//
int main ()
{
	int n;
	NhapSoNguyen(n ,"so nguyen ",1,100 );
	XuatCacUocSo	(n);
	printf("\n Dem cac uoc so trong pham vi : 1 ... %d:%d ",n,DemCacUocSo(n));
	printf("\n Tong cac uoc so trong pham vi : 1 ... %d:%d",n,TongCacUocSo(n));
	printf("\n Tich cac uoc so trong pham vi : 1 ... %d:%ld",n,TichCacUocSo(n));
	if (KTSNT( n)==1)printf("\n %d la so nguyen to ",n);
	else printf ("\n %d khong phai la so nguyen to ",n);
	if (KTSHT( n)==1)printf("\n %d la so hoan thien ",n);
	else printf("\n %d ko phai la so hoan thien",n);
	if (KTSCP( n)==1)printf("%d \nla so chinh phuong!\n", n); 
	else printf("%d \nkhong phai so chinh phuong!\n", n);
	return 0;
 }
