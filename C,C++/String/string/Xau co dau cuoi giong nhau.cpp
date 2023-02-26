#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll cnt[256] = {};

int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.size(); i++){
        cnt[s[i]]++;
    }
    ll ans = s.size();
    for (int i=0;i<s.size(); i++){
        if(cnt[i]>1)ans+=((ll)cnt[i]*(cnt[i]-1)/2);
    }
    cout << ans << endl;
    return 0;
}