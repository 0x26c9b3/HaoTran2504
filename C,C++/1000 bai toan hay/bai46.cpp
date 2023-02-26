//Bài 46: Hãy đếm số lượng chữ số lẻ của số nguyên dương n
#include <bits-stdc++.h>
using namespace std; 


int main () {
    int n; cin >> n;
    int counter = 1;
    int tmp = n;
    
    while(tmp != 0) {
        if(n % 2 == 1){
            counter++;
        }
        tmp = tmp / 10;
    }
    cout << counter << endl;
}