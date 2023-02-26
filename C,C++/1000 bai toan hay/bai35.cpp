//Bài 36: Tính S(n) = CanBac2(n! + CanBac2((n-1)! +CanBac2((n – 2)! + … + CanBac2(2!) + CanBac2(1!)))) có n dấu căn
#include <bits-stdc++.h>
using namespace std;

int main() {
    int n;cin >> n;
    int i = 1;
    int m = 1;
    float sum = sqrt(0); 
    while(i <= n) {
        m = m * i;
        sum = sqrt(m +sum);
        i++;
    }
    cout << sum << endl;
    return 0;
}