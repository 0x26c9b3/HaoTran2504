//Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2
#include <bits-stdc++.h>
using namespace std;

int main (){
    int n; cin >> n;
    float s = 0;
    for (int i = 0; i <= n; i++)
    {
        s += (2 * i + 1) / (2 * i + 2);
    }
    cout << s;    
    return 0;
}