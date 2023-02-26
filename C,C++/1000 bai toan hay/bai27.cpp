//Bài 27: Đếm số lượng “ước số chẵn” của số nguyên dương n
#include <bits-stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int counter;
    for (int i = 0; i <= n; i++) {
        if (n % i == 0) {
            if (i % 2 == 1) {
                cout << i;
                counter++;
            }
        }
    }
    cout << "So luong uoc so chan: " << counter << endl;
return 0;
}