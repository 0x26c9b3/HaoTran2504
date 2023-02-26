#include <bits/stdc++.h>
#define ll long long
int main()
{
    int n,q; cin>>n>>q;
    int a[n+1];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i]; 
    }
    ll F[n+1]={0};
    for( int j = i ; j < n ; j++ )
    {
        F[i] = F[i-1] +a[i]
    }
    while(q--)
    {
        int l,r; cin >> l >> r;
        ++l, r++;
        cout << F[r]- F[l-1] << endl;
    }
return 0;
}