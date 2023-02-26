#include<cstdio>
#include<algorithm>
#include<cmath>
#include<map>
#include<string>
#include<iostream>
#include<bits/stdc++.h>
#include<sstream>

using namespace std;

bool Check(string s)
{
    int l = 0 ; r = s.size()-1;
    while (l<r)
    {
        if(s[l]!=s[r]) return 0;
         l++;
         --r;
    }
    return 1;
}
bool CmpString(string a, string b)
{
    return a.size() < b.size();
}
int main(){
    string s; cin >> s;
    stringstream ss(s);
    vector<string> v;
    map<string,int> mp;
    set<string> st;
    string x;
    while(ss>>x)
    {
        if(Check(x)& !st.count(x))
        {   
            st.insert(x);
            v.push_back(x);
        }
    }
    sort(v.begin(), v.end(), CmpString)
    for (auto x:v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0
}