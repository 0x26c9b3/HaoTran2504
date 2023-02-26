#include <bits-stdc++.h>
using namespace std;

// Tính a^b % c
long long powMod(long long a, long long b, long long c){
    long long ans = 1; // Khởi tạo kết quả ban đầu là 1
    while(b) { // Lặp cho đến khi b = 0
        if(b % 2) { // Nếu b lẻ
            ans = ans * a ; // Nhân ans với a
            ans %= c; // Lấy phần dư sau khi chia cho c
        }
        a = a * a; // Lấy bình phương của a
        a = a % c; // Lấy phần dư sau khi chia cho c
        b /= 2; // Chia b cho 2
    }
    return ans; // Trả về kết quả
}

int main(){
    string s;
    cin >> s; // Nhập vào xâu nhị phân
    
    long long sum = 0; // Khởi tạo tổng ban đầu là 0
    reverse(s.begin(),s.end()); // Đảo ngược xâu nhị phân

    for (int i = 0; i < s.size(); i++) { // Duyệt từng ký tự trong xâu
        if (s[i] == '1'){ // Nếu ký tự tại vị trí i là 1
            sum += powMod(2, i, 5); // Cộng 2^i vào tổng
            sum %= 5; // Lấy phần dư sau khi chia cho 5
        }
    }
    if(sum % 5) cout << "NO"; // Nếu tổng không chia hết cho 5, in "NO"
    else cout << "YES"; // Ngược lại, in "YES"
    return 0;
}