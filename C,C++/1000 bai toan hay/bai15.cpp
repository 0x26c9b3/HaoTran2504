//Bài 15: Tính S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + ….. + 1/ 1 + 2 + 3 + …. + N

#include <bits-stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    long s,tmp = 0;

    for (int i = 1; i <= n; i++)
    {
        tmp = tmp + i;
        s = s + 1.0 / tmp;
    }
    
}