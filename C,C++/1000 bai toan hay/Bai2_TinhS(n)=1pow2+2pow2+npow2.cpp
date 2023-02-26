#include <bits-stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int s;

    for (int i = 0; i < n; i++)
    {
        s = s + i * i;
    }
    
    return s;
}