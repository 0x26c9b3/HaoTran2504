#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main (){
    string s; cin >> s;
    int n = s.size();
    map<char,int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    
    return 0;
}