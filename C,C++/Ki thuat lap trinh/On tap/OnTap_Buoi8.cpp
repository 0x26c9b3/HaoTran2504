#include <stdio.h>

//S=n!
int luyThua(int n){
	if(n==1)
		return 1;
	return luyThua(n-1)*n;
}

//S=1 + (1+2) + (1+2+3) + . . . . +(1+2+...+n) 
int tongThuaSo(int n){
	if(n==1)
		return 1;
	return tongThuaSo(n-1)+n;
}

int tong(int n){
	if(n==1)
		return 1;
	return tong(n-1) + tongThuaSo(n);
}

//P(x,y)= x^y
float P(float x, float y){
	if(y==0)
		return 1;
	if(y<0)
		return P(x, y+1)*(1/x);
	else
		return P(x, y-1)*x;
}

//USCLN
int USCLN(int n, int m){
	if(n==m)
		return n;
	if(n > m)
		return USCLN(n-m, m);
	return USCLN(n, m-n);
}

int main(){
	int n, m;
	float x, y;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	printf("\nLuy thua S = %d", luyThua(n));
	printf("\nTong S = %d", tong(n));
	
	printf("\nNhap x: ");
	scanf("%f", &x);
	printf("Nhap y: ");
	scanf("%f", &y);
	printf("\nP = %.2f", P(x,y));
	
	printf("\nNhap m: ");
	scanf("%d", &m);
	printf("USCLN(%d,%d) = %d", n, m, USCLN(n,m));
	
	return 0;
}
