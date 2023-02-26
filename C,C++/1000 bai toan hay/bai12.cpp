//Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n

#include <bits-stdc++.h>
using namespace std;

int main(){
    long s = 0;
    long temp = 1;
    
    int x; cin >> x;
    int n; cin >> n;


    for (int i = 1; i <= n; i++)
    {
        temp = temp * x;
        s = s + temp;
    }
    

    return 0;
}