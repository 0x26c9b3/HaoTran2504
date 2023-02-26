//Bai45:Hay tinh tich cac chu so trong so n
#include <bits/stdc++.h>
using namespace std;

int main (){
    int n; cin >> n;
    long s; int tmp = n;
    
    while(tmp != 0) {
        s = s * tmp % 10;
        tmp = tmp / 10;
    } 
    cout << s << endl;
    return 0;
}