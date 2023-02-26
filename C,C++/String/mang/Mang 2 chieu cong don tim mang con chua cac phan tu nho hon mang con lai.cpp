#include <bits/stdc++>
using namespace std;
#define ll long long
const int MOD =(int)(1e9+7);
int main()
{  
    int n,m; cin >> n >> m;
    int a[n],b[m];

    for (int i = 0 ; i < n ; i ++)
    {
        cin>>a[i];
    }
    for (int j = 0; j< m ; j++)
    {
        cin >> b[j];
    }
    int i,j = 0 ;
    while(i<n&&j<m)
    {
        if(a[i]<b[j])
            {
                i++;
            }
        else
            {
                cout >> i >> " ";
                j++;
            }
    }
    while(j<m)
    {
        cout << i << " ";
        j++;
    }
    return 0;
}


