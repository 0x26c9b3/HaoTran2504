//Bài 38: Tính S(n) = CanBac N + 1(N + CanBac N(N – 1 +…+CanBac3(2 + CanBac2(1)))) có n dấu căn
#include <bits-stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    float s = pow(1, 1/2);
    
    for (int i = 0; i <= n; i++)
    {
        s = pow((i + s) * 1.0 , 1.0/(i + 1));    
    }
    cout << s << endl;
    return 0;
}