//Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!

#include <bits-stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    float x, s, t;
    long m, n;
    s = 1;
    
    for (int i = 1; i <= n; i++)
    {
        t = pow(x, (2 * i));
        m = i * 2;
        n = n * m * (m - 1);
        s = s + t / n;
    }
    cout << s;
    return 0;
}