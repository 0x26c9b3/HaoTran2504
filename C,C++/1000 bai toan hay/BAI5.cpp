//Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    float S = 0;
    int i = 0;
    while (i < n){
        S = S + 1.0 / ((2 * i) + 1);
        i++;
    }
    cout << S << endl;
    return 0;

}