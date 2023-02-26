#include <bits/stdc++>
#include <cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
bool palinDromeStringcheck(string s) 
{   int l=0;r=s.size()-1;
    while(l<r)
    {
        if(s[l]!=s[r]) return false;
        l++;--r;
    }return true;
}
int main (){
    string s;cin >> s;
    if(palinDromeStringcheck(s)) cout >> "YES!";
    else cout>> " NO ";
    return 0;
}