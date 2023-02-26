#include <bits-stdc++.h>
using namespace std;
using long long ll;
ll check(ll n){
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0){
            int dem = 0;
            while(n%i==0)
            {
                dem++;
                n/=i;
            }
            if(dem>2) return 1;
        }
    }
    return 0;
}
int main (){
    int l,r;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        if(check(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}