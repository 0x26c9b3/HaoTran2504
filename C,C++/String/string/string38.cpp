//[Xâu ký tự]. Bài 38. Số chia hết cho 25.cpp
#include <bits-stdc++.h>
using namespace std;

// Hàm kiểm tra xem số nguyên x có chia hết cho 25 hay không
bool IsDivBy25(string s){
    if(s == "0") return 1; // Trả về 1 nếu x = 0
    if(s.size() < 2) return 0; // Trả về 0 nếu độ dài của xâu s < 2
    
    int x;
    x = stoi(s.substr(s.size() - 2 , 2)); // Chuyển xâu s sang số nguyên x
    if(x % 25) return 0; // Trả về 0 nếu x không chia hết cho 25
        return 1; // Trả về 1 nếu x chia hết cho 25
}

int main() {
    string s;
    cin >> s; // Nhập xâu s
    if(IsDivBy25(s)) cout << "YES"; // Nếu x chia hết cho 25, in ra "YES"
    else cout << "NO"; // Ngược lại, in ra "NO"
    return 0;
}
