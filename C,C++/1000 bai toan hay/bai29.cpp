//Bài 29: Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25
#include <bits-stdc++.h>
using namespace std;

int main() {
    int n; cin >>n;
    int max = 0;
    for (int i = 0; i < n; i++) {
        if((n % i == 0 && i % 2 == 1)){
            if(i > max){
                max = i;
            }
            cout << i << " ";
        }
    }
    cout << max <<" ";
}