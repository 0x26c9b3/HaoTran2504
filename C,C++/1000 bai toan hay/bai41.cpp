//Bài 42: Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao cho S(k) < n. Trong đó chuỗi k được định nghĩa như sau: S(k) = 1 + 2 + 3 + … + k
#include <bits-stdc++.h>
using namespace std;

int main(){
    int n; cin >> n; 
    float s = 0;
    int k =0;
    while(s + k < n) {
        k++;
        s += k;
    }
    cout << k << endl;
}
