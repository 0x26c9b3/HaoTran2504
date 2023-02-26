//[Xâu ký tự]. Bài 23. Ghép xâu.cpp
#include <bits-stdc++.h>
using namespace std;
bool cmpStr(string a, string b){
    string ab=a+b, ba=b+a;
    return ab>ba; 
}
int main() {
    int t; cin >> t;
    vector <string> v;
    while(t--){
        string s;
        cin >> s;
        v.push_back(s);
    }
    stable_sort(v.begin(), v.end(), cmpString);
    for(auto x: v){ 
        cout << x;
    }
    return 0;
}