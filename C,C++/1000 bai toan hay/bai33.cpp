//Bài 33: Sum of S(n) = sqrt(2+sqrt(2+….+sqrt(2 + sqrt(2)))) n * sqrt
#include <bits-stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    float s = 0;
    s = sqrt((float)2);
    for (int i = 2; i <= n; i++) {
        s = sqrt(2 + s);
    }
    cout << s << endl;
    return 0;
}