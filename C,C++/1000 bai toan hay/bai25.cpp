//Bài 25: Tính tổng tất cả các “ước số chẵn” của số nguyên dương n
#include <bits-stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    long s = 0;
    for (int i = 0; i < n; i++) {
        if(n % i == 0){
            if(i % 2 == 0){
                s += i;
                cout << i << " "; //Cac uoc so chan
            }
        }
    }
    cout << s << endl;//TongSoTatCacUocSoChan
    return 0;
    }