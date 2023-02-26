//Bai28: Cho so nguyen duong n . Tinh tong cac uoc so nho hon chinh no
#include <bits-stdc++.h>
using namespace std;

int main(){
    int n; 
    long s = 0;
    do {
        cout << "Nhap N: "; cin >> n;
        if(n <=0 ){
        cout << "NHap dang hoang! " << endl;
        }
    }while (n <= 0);
    for (int i = 0; i < n; i++) {
        if (n % i == 0) {
            cout << i << " ";
             s+=i;
        }
    }
}