//Bài 32: Cho số nguyên dương n. Kiểm tra xem n có phải là số chính phương hay không

//===[ BEGIN OF CODE ]===//
#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int x) 
{ 
    int s = sqrt(x); 
    return (s*s == x); 
} 
int main() {
    int n;cin >> n;
    if (isPerfectSquare(n)) {
        cout << "YES" << endl;
    }  
    else {
        cout << "NO" << endl;
    }
    return 0;
}    