//Bài 40: Tính S(n) = CanBac2(x^n + CanBac2(x^n-1 + … + CanBac2(x^2 + CanBac2(x)))) có n dấu căn
#include <bits-stdc++.h>
using namespace std;

int main(){
    int n; int x;
    float s; float t;
    
	do
	{
	    cout << "\nNhap x(x >= 0): ";
	    cin >> x;
	    if(x < 0)
	        {
	        printf("\nx khong hop le. Xin nhap lai !");
	        }
	}while(x < 0);
	
	do
	{
	    cout << "\nNhap n(n >= 1): ";
	    cin >> n;
	    if(n < 1)
	        {
		    printf("\nn khong hop le. Xin nhap lai !");
	        }
	}while(n < 1);
    
    for (int i = 0; i <= n; i++)
    {
        t = t * x;
        s = sqrt(t + s);
    }
}