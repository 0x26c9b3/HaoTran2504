//Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
#include <bits-stdc++.h>
using namespace std;

int main(){
    int s = 0;
    int p = 1;
    int n ; cin >> n;

    for (int i = 1; i <= n; i++)
    {
        p = p * i;
        s = s + p;
    }
    cout << s;

    return 0;
}