//Bài 16: Tính S(n) = x + x^2/1 + 2 + x^3/1 + 2 + 3 + … + x^n/1 + 2 + 3 + …. + N

#include <bits-stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int x; cin >> x;

    float tmp = 1;
    float s = 0;
    for (int i = 1; i <= n; i++)
    {
        tmp = tmp + i;
        s = s + (float) (pow(x, i) / tmp);
    }
    cout << s;
}