#include <bits-stdc++.h>
using namespace std;
using long long ll;

void pt(ll n){//n1000
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                ++cnt;1
                n/=i;
            }
            if(n!=1){
                cout << i <<"^"<< cnt <<" * ";
            }
            else cout<< i <<"^"<<cnt;
        }
    }
    if(n==1){
        cout << n <<"^1"
    }
}
int main(){
    ll n;
    cin >> n;
    pt(n);    
    return 0;
}