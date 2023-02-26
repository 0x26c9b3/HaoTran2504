#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string>
#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<string>
#include<sstream>

using namespace std;

bool CmpString(string a, string b)
{
    if a.size() == b.size() return a < b;   
    return a.size() < b.size();

}
int main(){
    string s; cin >> s;
    vector<string> v;
    stringstream ss(s);
    string x;
    while (ss>>x)
    {
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    for(auto x: v)
    {
        cout << x << " ";
    }
    cout << endl;
    sort(v.begin(),v.end(),CmpString)
    for(auto x: v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}