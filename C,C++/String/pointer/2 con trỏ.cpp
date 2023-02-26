#include <bits/stdc++>
using namespace std;
using long long = ll;

int main()
{

    int n,s; cin >> n > s;
    for (int i = 0 ; i <n;i++)
        {
            cin >> a[i];
        }
    ll sum = 0;
    int l = 0;
    int ans;
    for ( int r = 0; r < n; r++)
    {
        while(sum > s)
        {
          l++;
        }
        sum += a[r];
    }  ans +=r-l+1;
    return 0;
}