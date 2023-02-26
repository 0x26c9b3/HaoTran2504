//Bài 37: Tính S(n) = CanBac N(N + CanBac N – 1(N – 1 + … + CanBac3(3 + CanBac2(2))) có n – 1 dấu căn
#include <bits-stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    float s = 0;
    s = pow(2, 1/2);
    for (int i = 3; i <= n; i++)
    {
        s = pow((i + s), 1 / i);
    }
    cout << s << endl;
    return 0;
}