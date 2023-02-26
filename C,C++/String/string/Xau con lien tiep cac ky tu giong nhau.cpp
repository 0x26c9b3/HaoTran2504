#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    string ans, tmp;
    tmp+=s[0];
    for(int i=1; i<s.size(); i++){
        if(s[i]==s[i-1]) tmp+=s[i];
        else{
            if(tmp.size()>ans.size() || (tmp.size()==ans.size() && tmp>ans)) ans=tmp;
            tmp="";
            tmp+=s[i];
        }
    }
    if(tmp.size()>ans.size() || (tmp.size()==ans.size() && tmp>ans)) ans=tmp;
    cout << ans << endl;
    return 0;
}
