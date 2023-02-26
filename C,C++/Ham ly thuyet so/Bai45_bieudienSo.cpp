#include <bits-stdc++.h>
using namespace std;
//Bạn được cung cấp một số nguyên x. 
//Bạn có thể biểu diễn x bằng cách tổng của các số trong các số 11,111,1111,11111,… 
//( Các số mà bản thân nó chỉ chứa các chữ số 1)?
//(Bạn có thể sử dụng bất kỳ số nào trong số chúng bất kỳ số lần nào). 
//Ví dụ, 33 = 11 + 11 + 11 144 = 111 + 11 + 11 + 11

int main(){
    int n; cin >> n;
    int r = n%11;
    int ok = 0;
    for (int i = r; i <= n/111; i+=11)
    {
        if((n - 111 * i) % 11 = 0)
            ok = 1;
    }
    if(ok) cout << " YES " << endl;
    else cout << " NO " << endl;
    
}