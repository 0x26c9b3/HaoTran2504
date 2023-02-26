#include <bits-stdc++.h>
using namespace std;
#define ll long long;
const int MOD = (int)(1e9 + 7);
//Cho phương trình mx + ny = p, trong đó p là ước chung lớn nhất của n và m phương trình này được gọi là phương trình đẹp
//nếu nó tồn tại một cặp nghiệm (x, y) nguyên và có tổng 2 số x, y tạo thành một số chẵn.
//Bạn được giao nhiệm vụ kiểm tra với 3 hệ số m, n, p đã cho có thể tạo thành một phương trình đẹp hay không?
ll x , y , d;
int check (ll m, ll n){
    if(n == 0){
        x = 1;
        y = 0;
    }
    else {
        check(n, m % n);
        int tmp = x; 
        x = y;
        y = tmp - m / n * y;
        if((x + y) % 2 == 0){
            return 1;
        }
    } return 0;
}
int main () {
    ll m, n;
    cin >> n >> m;
    if(check(n, m)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl
    return 0;
}