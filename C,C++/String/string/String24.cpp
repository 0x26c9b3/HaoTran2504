#include <bits-stdc++.h>
using namespace std;
#define ll long long;

ll cnt[256] = {}; 
int main(){
    string s;
    cin >> s;
    for (int i = 0; i <s.size(); i++)
    {
        cnt[s[i]]++;
    }
    
}
