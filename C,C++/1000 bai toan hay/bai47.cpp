//Bài 47: Hãy tính tổng các chữ số chẵn của số nguyên dương n
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int count, tmp = n;
    float sum = 0;
    while(tmp != 0){
        if(tmp % 2 == 0){
            sum += tmp % 10;
        }
        tmp /= 10;
    }
    cout << sum << endl;
return 0;
}