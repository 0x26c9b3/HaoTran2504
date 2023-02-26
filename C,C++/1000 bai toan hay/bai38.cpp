//Bài 39: Tính S(n) = CanBac N + 1(N! + CanBacN((N – 1)! + … + CanBac3(2! + CanBac2(1!))) có n dấu căn
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    do {
        cout << "Enter N: (N >= 1) ";
        cin >> n;
        if(n < 1) {
            cout << "Again" << endl;            
        }
    }while(n < 1);
    
    float s = 0;
    float m = 1;
    for (int i = 0; i <= n; i++)
    {
        m = m * i;
        s = pow((m + s), 1 / (i + 1));
    }
    cout << s << endl;
    return 0;
}