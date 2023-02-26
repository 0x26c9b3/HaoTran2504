#include <bits-stdc++.h>
using namespace std;

int main () {
    int n; cin >> n;
    int dem = 0;

    for (int i = 0; i < n; i++)
    {
        if(n % i == 0)
        dem++;
    }
    return dem;
}
