#include<cstdio>
#include<cmath>
#include<vector>
#include<map>
#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<string>
#include<algorithm>
#include<stringstream>

using namespace std;

int main(){
    string s;
    string t;
    getline(cin ,t);
    getline(cin, s);
    if(s.find(t)!=string::npos) cout << "YES\n";
    else cout <<"NO!";
        
    return 0;
}