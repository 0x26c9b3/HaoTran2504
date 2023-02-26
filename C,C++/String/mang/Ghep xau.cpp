#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(string a,string b)
{
    return a+b > b+a;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(),v.end(), cmp );
    for (int i = 0; i < n; i++)
        cout << v[i];
return 0;
    
}