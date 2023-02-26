// Chuyển đổi chuỗi s thành số dư mod 4
#include <bits-stdc++>
using namespace std;

/*Bài 46: Tìm số dư cho số nguyên n

Định nghĩa modCalc có chức năng tính số dư từ một xâu s và số nguyên m
Nếu r*10 + x chia cho m dư 0 thì in ra " 0 \n"
*/
// Tính số dư của chuỗi s sau khi chia cho m
long long modCalc(string s, long long m){
    long long r = 0;
    // Duyệt từng ký tự trong chuỗi
    for(int i = 0; i < s.size(); i++){
        int x = s[i] - '0';
        r = r * 10 + x; // Tăng r lên 10 lần, và thêm số đọc được từ chuỗi
        r %= m; // Modulo
    }
    return r;
}

// Chính
int main(){
    string n; cin >> n; 
    long long x = modCalc(n, 4);
    // Kiểm tra xem số dư có bằng 0 hay không
    if(x % 4) cout << " 0 \n";
    else cout << "  \n";
    return 0;
}
/*
Input: 123456
Output: 0

*/