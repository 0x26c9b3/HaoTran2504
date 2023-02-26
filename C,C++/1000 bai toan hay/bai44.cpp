//Bài 44: Hãy tính tổng các chữ số của số nguyên dương n
#include <bits-stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    long s;
    int tmp = n;
    while(tmp != 0) {
        s = s + tmp % 10;
        tmp = tmp / 10;
    }
   cout << s << endl;
}