//Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)
#include <bits-stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    float s;
    s = 0;

    for (int i = 1; i <= n; i++)
    {
        s = s + 1.0 / (i * (i + 1));
    }
    cout << s  << endl;

    return 0;
}