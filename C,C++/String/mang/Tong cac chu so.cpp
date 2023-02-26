#include<bits/stdc++.h>
#include<string.h>
#include<cmath>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int sum =0;
    for(int i = 0 ; i < n ; i++)
        {
            sum+=(s[i]='0');
        }
    cout << sum << endl;
return 0;
}