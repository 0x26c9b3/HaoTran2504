//Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!

#include<bits-stdc++.h>
using namespace std;

int main(){
    int x; cout << "x ="<<endl;
    cin >> x;
    int n; cout << "n ="<<endl;
    cin >> n;

    float tmp = 1;
    float s = 0;
    int m = 1;

    for (int i = 1; i <= n; i++)
    {
        tmp = tmp * x;
        m = m * i;
        s = s + tmp/m;
    }
    cout << s;
    
    return 0;
}