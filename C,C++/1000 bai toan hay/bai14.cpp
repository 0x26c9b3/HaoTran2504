// /Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1
#include <bits-stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int x; cin >> x;
    long s = 0;
    long tmp = 1;

    for (int i = 1; i <= n; i++)
    {
        tmp = pow(x, (2 * i + 1));
        s = s + t;
    }
    cout << s;
}