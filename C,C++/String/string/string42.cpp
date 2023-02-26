//[Xâu ký tự]. Bài 42. Phép chia dư.cpp
#include <bits-stdc++.h>
using namespace std;

long long modCalc(string s, long long m){
    long long result = 0;
    for (int i = 0; i < s.size(); i++){// Duyệt qua từng ký tự trong chuỗi s
        int x = s[i] - '0';// Lấy giá trị của từng chữ số trong chuỗi s 
        result = result * 10 + x; // Nhân kết quả với m và cộng với x
        result %= m;// Lấy phần dư sau khi chia
    }
    return result;//Trả về kết quả
}
int main(){
    string s;
    cin >> s;
    long long m = 0;
    cin >> m;
    cout << modCalc(s, m) << endl;
    return 0;
}
/*
Input:
s = "123456"
m = 7

Output:
2

Input:
s = "9876543210"
m = 4

Output:
2

Input:
s = "10000000000000000000000000000001"
m = 1000000000

Output:
1

Input:
s = "0"
m = 5

Output:
0

Input:
s = "1000110010001100100100011001001000110010010001100100100"
m = 99999999

Output:
891832
*/