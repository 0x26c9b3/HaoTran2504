//Bài 9: Tính T(n) = 1 x 2 x 3…x N
#include <bits-stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int s = 1;
    for (int i = 0; i < n; i++)
    {
        s = s * i;
    }
    cout << s;
}