//Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    float s;
    s = 0;
    for (int i = 0; i <= n; i++)
    {
        s = s + (float)(i / (i + 1));
    }
    cout << s;  
    return 0;
}