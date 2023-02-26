//[Xâu ký tự]. Bài 33. Số đẹp 2.cpp
#include<bits-stdc++.h>
using namespace std;

// Hàm kiểm tra chuỗi s có phải là chuỗi đối xứng hay không
bool palindromeCheck(string s){
    // Tạo 1 chuỗi t bằng chuỗi s
    string t = s;
    // Đảo ngược chuỗi s
    reverse(s.begin(), s.end());
    // Trả về kết quả so sánh giữa chuỗi s và chuỗi t
    return t == s;
}

// Hàm kiểm tra số 6 xuất hiện trong chuỗi s
bool check6(string s){
    // Duyệt qua từng ký tự trong chuỗi s
    for (int i = 0; i < s.size(); i++){
        // Nếu tìm thấy ký tự 6 trong chuỗi s
        if(s[i] == '6') return 1;
    }
    // Trả về false nếu không tìm thấy ký tự 6 trong chuỗi s
    return 0;
}

int main(){
    string s;
    cin >> s;
    // Kiểm tra xem chuỗi s có là chuỗi đối xứng và có chứa số 6
    if(check6(s) && palindromeCheck(s)) cout << "YES\n";
    // Ngược lại, trả về NO
    else cout <<"NO\n";
    return 0;
}
/*
Input: "666966" Output: "YES"
Input: "666666" Output: "YES"
Input: "123456" Output: "NO"
Input: "660566" Output: "NO"
Input: "9009" Output: "YES"
*/