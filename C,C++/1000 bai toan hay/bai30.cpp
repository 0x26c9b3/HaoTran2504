//Bài 30: Cho số nguyên dương n. Kiểm tra xem n có phải là số hoàn thiện hay không
#include <bits-stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    long s = 0;
    for (int i = 0; i < n; i++) {
        if(n%i == 0){
            s += i;
        }
    }
    if(s == n){
        cout << "Số " << n << " là số hoàn thiện" << endl;
    } 
    else {
        cout <<"Số " << n << " không là số hoàn thiện" << endl;
        }
}