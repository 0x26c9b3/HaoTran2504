//[Xâu ký tự]. Bài 48. Số may mắn.cpp
#include <bits-stdc++.h>
using namespace std;
/*Bài 48: Kiểm tra một số có phải là số may mắn không
Xây dựng hàm SoD tách từng số trong chuỗi và lấy tổng của những số đó
Nếu số kết quả vẫn còn 2+ chữ số thì tiếp tục tối giản cho đến khi con số có 1 chữ số
Nếu chữ số cuối cùng là 9 in ra "YES\n" ngược lại in ra "NO\n"
*/
// Tính tổng các chữ số trong số
long long SoD(string s) {
if(s.size()) return s[0] - '0' + SoD(s.substr(1));
return 0;
}

int main(){
string n;
cin >> n;
// Tối giản số cho đến khi giảm thành 1 chữ số
while(n.size() > 1){
n = to_string(SoD(n));
}
// Kiểm tra nếu là 9 in ra YES, ngược lại NO
if(n=="9") cout << "YES\n";
else cout <<" NO \n";
return 0;
}
/*
Test Cases:

Case 1:
n = 123456
Output: NO

Case 2:
n = 379
Output: YES

Case 3:
n = 18
Output: YES

Case 4:
n = 7
Output: NO

Case 5:
n = 19260817
Output: NO
*/