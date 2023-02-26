//Bài 41: Tính S(n) = 1 / (1 + 1 / ( 1 + 1 / (…. 1 + 1 / 1 + 1))) có n dấu phân số
#include <bits-stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    float s = 0;
    for(int i = 0; i <= n; i++){
        s = 1 + 1.0 / s;
    }
    cout << s << endl;
    
    return 0;
}