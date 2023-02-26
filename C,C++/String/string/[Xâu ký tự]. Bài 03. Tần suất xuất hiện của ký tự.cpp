#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
int count_k(string s,int k){
    int count=0;
        for(int i=0;i<s.size()-k+1;i++){
            if(
        }
}
int main(){
    string s;
    cin >> s;
    int n = s.size();
    map<char,int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if(mp[s[i]])
            {
                cout << s[i] << " " << mp[s[i]] << endl;
                mp[s[i]]=0;
            }
    }
    return 0;
    
    
    
    return 0;
}