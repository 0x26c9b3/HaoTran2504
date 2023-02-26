//Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n

#include <bits/stdc++.h>
using namespace std;

int main(){
    long s = 0;
    long temp = 1;
    int x; int n;
    cin >> x >> n;
    for (int i = 1; i <= n; i++)
    {
        temp = (temp * (2 * x));
        s = s + temp;
    }
    
    return 0;
}