//Bài 34: Tính S(n) = CanBac2(n+CanBac2(n – 1 + CanBac2( n – 2 + … + CanBac2(2 + CanBac2(1) có n dấu căn
#include <bits-stdc++.h>
using namespace std;

int main() {
    int n; 
    float sum = 0;
    do{
        cout << "(N >= 1)\n N: ";
        cin >> n;
        
        if(n < 1) {
            cout <<"Again" << endl;
        }
    }while (n < 1);
    int i = 1;
    while(i <= n) {
        sum = sqrt(i + sum);
        i++;
    }
    cout << sum;
    return 0;
}