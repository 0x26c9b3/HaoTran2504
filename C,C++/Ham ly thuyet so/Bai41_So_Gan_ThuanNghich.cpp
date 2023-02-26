#include <bits-stdc++.h>
using namespace std;
#define ll long long;
int check(string s){
    int dau = s[s.length()-1]-'0';
    int cuoi = s[0] - '0';
    if(dau != 2 * cuoi&&cuoi != 2 * dau){
        return 0;
    }
    int l = 1;
    int r = s.length()-2;
    while (l <= r){
        if(s[l] != s[r]){
        return 0;
        }
        l++, r--;
    }
}
int main(){
    string n; getline(cin,n);
    if(check(n)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}