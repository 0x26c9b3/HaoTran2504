#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#include<sstream>
#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    string s; cin >> s;
    map<string, int> mp;
    vector<string> v;
    stringstream ss(s);
    string x;
    while(ss>>x)
    {
        mp[x]++;
        v.push_back(x);
    }
    for(auto x: mp)
    {
        cout << x.first << " ";
    }
    cout << endl;
    for(auto x: v)
    {
        if(mp[x])
        {
            cout << x << " ";
            mp[x] = 0;
        }
    }
    cout << endl;


    return 0;
}