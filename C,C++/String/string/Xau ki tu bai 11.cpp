#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>
#include <set>
using namespace std;

bool check(string s){
    int l=0, r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r]) return 0;
        l++;
        r--;
    }
    return 1;
}

bool cmpstr(string a, string b){
    return a.size()<b.size();
}

int main() {
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string x;
    set <string> st;
    while(ss>>x){
        if(check(x) && !st.count(x)){
           st.insert(x); 
           v.push_back(x);
        }
    }
    sort(v.begin(), v.end(), cmpstr);
    for(auto x : v){
        cout << x << " " << ;
    }
    cout << endl;
    return 0;
}
