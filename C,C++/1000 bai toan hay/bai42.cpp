//Bài 43: Hãy đếm số lượng chữ số của số nguyên dương n
#include <bits-stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int count = 0;
    int tmp = n;
    while(tmp != 0){ 
        count = count + 1;
        tmp = tmp / 10;
    }
    cout << count << endl;
    return 0;
}
  