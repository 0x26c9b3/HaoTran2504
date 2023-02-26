//[Xâu ký tự]. Bài 36. Số chia hết cho 4.cpp
#include <bits-stdc++.h>
using namespace std;

// Hàm kiểm tra xem số chuỗi s có chia hết cho 4 không
bool IsDivBy4(string s){
    int x;
    // Nếu độ dài chuỗi s chỉ có 1 chữ số
    if(s.size() == 1){
        x = s[0]; // x là giá trị số đầu tiên của chuỗi s
        if(x % 4) return 0; // nếu x không chia hết cho 4, trả về 0
        return 1;
    }
    x = stoi(s.substr(s.size() - 2, 2)); // x là giá trị của 2 chữ số cuối của chuỗi s
    if(x % 4) return 0; // nếu x không chia hết cho 4, trả về 0
    return 1;
}

int main(){
    string s;
    cin >> s;
    if(IsDivBy4(s)) cout << "YES\n";
    else cout <<"NO\n"; 
    return 0;
}
/*
Input: "16"
Output: "YES"

Input: "100"
Output: "YES"

Input: "25"
Output: "NO"

Input: "7"
Output: "NO"

Input: "2048"
Output: "YES"

Input: "125"
Output: "NO"
*/