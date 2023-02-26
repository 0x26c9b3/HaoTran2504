//Bài 48: Hãy tính tích các chữ số lẻ của số nguyên dương n
#include <bits-stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;
    long s = 0;
    int tmp = n;
    
    while(tmp != 0) {
        if(tmp % 2 == 1){
            s *= (tmp % 10);
        }
        tmp /= 10;
    }
    return 0;
}