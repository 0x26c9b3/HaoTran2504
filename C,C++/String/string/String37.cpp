//[Xâu ký tự]. Bài 37. Số chia hết cho 15.cpp
#include <bits-stdc++.h> // Bắt buộc phải có để sử dụng các hàm từ thư viện chuẩn
using namespace std;   // Sử dụng namespace chuẩn

// Hàm kiểm tra xem xâu ký tự s có chia hết cho 25 hay không
bool IsDivBy25(string s){
    if(s == "0") return 1;  // Nếu xâu ký tự bằng 0 thì trả về 1
    if(s.size() < 2) return 0;  // Nếu độ dài xâu ký tự nhỏ hơn 2 thì trả về 0
    int x;
    x = stoi(s.substr(s.size() - 2 , 2));  // Chuyển xâu ký tự cuối cùng 2 ký tự sang số nguyên
    if(x % 25) return 0;  // Nếu không chia hết cho 25 thì trả về 0
    return 1;  // Nếu chia hết cho 25 thì trả về 1
}
int main() {
    string s;
    cin >> s;  // Nhập xâu ký tự s
    if(IsDivBy25(s)) cout << "YES";  // Nếu xâu s chia hết cho 25 thì in YES
    else cout << "NO";  // Nếu xâu s không chia hết cho 25 thì in NO
    return 0;  // Kết thúc chương trình
}
/*
Input: "125"
Output: "YES"

Input: "26"
Output: "NO"

Input: "0"
Output: "YES"

Input: "250"
Output: "YES"

Input: "75"
Output: "NO"

Input: "100"
Output: "YES"
*/