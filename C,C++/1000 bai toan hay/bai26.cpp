//Bài 26: Tính tích tất cả các “ước số lẻ” của số nguyên dương 
#include <bits-stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;
    long s = 0;
    
    for (int i = 0; i < n; i++) {
        if(n % i == 0){
            if(i % 2 == 1){
                cout <<" " << i;
                s *= i;            
            }
        }
    }
    cout << s << endl;
return 0;
}