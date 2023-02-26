#include <bits-stdc++.h>
using namespace std;

int main(){
    int s = 0;
    int n ; cin >> n ; 
    for (int i = 0; i <= n; i++)
    {
        s = s + 1.0 / (2 * i);
    }
    return s;
    
}