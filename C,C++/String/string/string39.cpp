//[Xâu ký tự]. Bài 39. Số chia hết cho 11.cpp

#include <bits/stdc++.h>
using namespace std;

bool IsDivBy11(string s){
    // Khởi tạo biến tạm để lưu tổng của các chữ số của chuỗi
    int temp = 0;
    // Duyệt từng ký tự trong chuỗi
    for (int i = 0; i < s.size(); i++) {
        // Nếu i là số chẵn, cộng giá trị của ký tự vào tổng
        if(i % 2 == 0){
            temp = temp + (s[i] - '0');
        }
        // Nếu i là số lẻ, trừ giá trị của ký tự vào tổng
        else
            temp = temp - (s[i] - '0');
    }
    // Kiểm tra xem tổng có chia hết cho 11 hay không
    if(temp % 11) 
        return 0;
        
        // Nếu chia hết trả về 1
        return 1;
}

int main() {
    string s;
    // Nhập chuỗi s
    cin >> s;
    // Gọi hàm IsDivBy11 với tham số là chuỗi s để kiểm tra
    if(IsDivBy11(s)) cout << "YES";
    // Nếu chuỗi s chia hết cho 11, in ra "YES"
    else cout << "NO";
    // Nếu không chia hết, in ra "NO"
    return 0;
}