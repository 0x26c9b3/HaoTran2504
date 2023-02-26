//[Xâu ký tự]. Bài 32. Số đẹp 1.cpp
#include <bits-stdc++.h> // thư viện chứa các hàm cần thiết như cin, cout, sort, sqrt...
using namespace std;

// hàm kiểm tra số nguyên tố
bool primeCheck(long long n){
    if (n < 2) return 0; // nếu n < 2 thì return 0
    for(int i = 2; i<=sqrt(n); i++){
        if(n % i==0) return 0; // nếu tìm thấy số nào chia hết cho i thì return 0
    }
    return 1; // nếu không tìm thấy thì return 1
}

// hàm tính tổng các chữ số trong 1 số
long long SoD(string s){
    if(s.size()) return s[0] - '0' + SoD(s.substr(1)); // giảm dần chiều dài của chuỗi sau mỗi lần gọi hàm
    return 0; // nếu kích thước của chuỗi = 0 thì return 0
}

// hàm kiểm tra xem các chữ số trong chuỗi có phải là 2,3,5,7 hay không
bool check(string s) {
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] != '2' && s[i] != '3' && s[i] != '5' && s[i] != '7')
        return 0; // nếu tìm thấy 1 chữ số khác 2,3,5,7 thì return 0
    }
    return 1; // nếu không tìm thấy thì return 1
}

int main() {
    string s;
    cin >> s; // nhập chuỗi
    if(check(s) && primeCheck(SoD(s))) cout << "YES" << endl; // nếu chuỗi đúng yêu cầu và tổng các chữ số là số nguyên tố thì in ra YES
    else cout << "NO" << endl; // ngược lại in ra NO
    return 0;
}
/*
Đầu vào: 233, Đầu ra: YES
Đầu vào: 777, Đầu ra: YES
Đầu vào: 2357, Đầu ra: YES
Đầu vào: 258, Đầu ra: NO
Đầu vào: 123456789, Đầu ra: NO
*/