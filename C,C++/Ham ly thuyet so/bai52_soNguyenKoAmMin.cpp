#include <bits-stdc++.h>
using namespace std;
#define ll long long;
const int MOD = (int)(1e9 +7);
int x, y, d;
//Cho 2 số a và b, hãy tìm số m là số nguyên không âm nhỏ nhất thõa mãn (a * m) % b = 1.
void check(ll n, ll m){
    if(n==0){
        x = 1;
        y = 0;
        d = m;
    }
    else {
        check(n ,m%n)
        int tmp = x;
        x = y;
        y = tmp - m / n * y;
    }
}
void inverse(ll a, ll m){
    check(a, m);
    if(d != 1){
        cout << " -1 " << endl;
    }
    else cout << (x % m + m) % m << endl;   
}
int main (){
    ll a, b;
    cin >> a >> b;
    inverse(a, b);
}