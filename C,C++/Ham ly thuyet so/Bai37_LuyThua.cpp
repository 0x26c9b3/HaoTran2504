#include <bits-stdc++.h>
using namespace std;
#define ll long long;
const int MOD =(int)(1e9+7);
ll powMod(ll a,ll b){
    ll res = 1;
    a %= MOD;
    while(b){
        if(b%2==1){
            res *= a;
            res %=MOD;
        }
        a*=a;
        a%=MOD;
        b/=2;
    }
    return res;
}
int main(){
    ll a,b;
    cin >> a >> b;
    cout << powMod(a,b) << endl;
}