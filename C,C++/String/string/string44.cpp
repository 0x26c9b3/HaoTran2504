#include <bits/stdc++.h>
using namespace std;

long long modCalc(string s, long long m){
    long long res = 0;
    for (int i = 0; i < s.size(); i++){ 
        int x = s[i] - '0';
        res = res * 10 + x;
        res %= m;
    }
    return res;
}
long long powMod(string n, long long m){
    long long tmp = modCalc(n, 1e9 + 7), res = 1, mod = 1e9 + 7;
    while(m) {
        if(m % 2){
            res *= tmp;
            res %= mod;
        }
        tmp *= tmp;
        tmp %= mod;
        m /=2;
    }
    return res;
}
int main(){
    string s;
    long long m;
    cin >> s >>m;
    cout << "The answer is " << powMod(s, m) << endl;
    return 0;
}