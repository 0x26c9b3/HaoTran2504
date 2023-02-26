#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);   
    int n, q; cin >> n >> q;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    ll D[n + 2];
    for(int i = 1; i <= n; i++){
        if(i == 1)
            D[i] = a[i];
        else
            D[i] = a[i] - a[i - 1];
    }
    while(q--){
        int l, r, k; cin >> l >> r >> k;
        ++l; ++r;
        D[l] += k;
        D[r + 1] -= k;
    }
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        sum += D[i];
        a[i] = sum;
        cout << a[i] << ' ';
    }
}
