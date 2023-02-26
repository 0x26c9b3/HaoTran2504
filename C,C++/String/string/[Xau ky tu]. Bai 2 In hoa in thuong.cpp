#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main (){
     string s;
     getline(cin, s);
     int n =s.size();

     for(int i = 0 ; i < n ; i ++)
     {
        if(s[i] <= 'a' && s[i] >= 'z') s[i]-=32;
     }
     for (int i = 0; i < n; i++)
     {
        if(s[i] <= 'A' && s[i] >= 'Z') s[i] +=32;
     }
     cout << s << endl;
     return 0;
}