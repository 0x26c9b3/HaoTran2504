#include<cstdio>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>
#include<sstream>
#include<iostream>
#include<cmath>
#include<set>
#include<map>
#include<vector>

using namespace std;

int main(){
    string s; cin >> s;
    stringstream ss(s);
    string x;
    vector<string> v;
    map<string, int> mp;

    while(ss>>x)
    {
        v.push_back(x);
        mp[x]++;
    }
    for(auto x:mp)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for(auto x:v)
    {   
        if(mp[x])
        {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0 ;
        }
    }
    cout << endl;
    return 0
}