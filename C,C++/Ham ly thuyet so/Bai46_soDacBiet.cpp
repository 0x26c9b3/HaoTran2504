#include <bits-stdc++.h>
using namespace std;
//Với mỗi số nguyên dương N, số M được coi là đặc biệt của N nếu M được tạo ra bằng tổng các luỹ thừa không âm khác nhau của N.
//Ví dụ N=4 thì M=17 là số đặc biệt vì 4^0+4^2=17 Viết chương trình nhập số N và số K.
//Sau đó in ra số đặc biệt thứ K của N nếu sắp xếp các số đặc biệt của N theo thứ tự tăng dần.
//Kết quả có thể rất lớn, hãy in ra theo modulo (10^9)+7.
#define ll long long;
const int MOD = (int)(1e9+7);
int a[31];

ll powMod(ll a, ll b){
    ll res = 1;
    a %= MOD;
    while (b) {
        if(b % 2 = 1){
            res = res * a;
            res = res % MOD;
        }
        a = a * a;
        a = a % MOD;
        b = b / 2;
    }    
    r eturn res;     
}
void init (){
    a[0] = 1; 
    for (int i = 0; i < 31; i++)
    {
        a[i] = a[i - 1] * 2;
    }
}
int main(){
    init();
    ll n, k;
    cin >> n >> k;
    set<int>se;
    for (int i = 30 ; i >= 0 ; i--)
    {
        if(k >= a[i])
        se.insert(i);
        k = k - a[i]; 
    }
    ll ans = 0;
    for (auto it::se){
        ans += powMod(n,it);
        ans %= MOD;
    }
    cout << ans << endl;

    return 0;
}