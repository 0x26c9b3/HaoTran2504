// [Xâu ký tự]. Bài 29. Tính tổng các số xuất hiện trong xâu.cpp
#include <bits-stdc++.h>
using namespace std;

int main() {
    // Khai báo biến lưu trữ xâu ký tự và xâu tạm lưu trữ số
    string s, temp;
    // Nhập xâu s
    cin >> s;
    // Khai báo biến sum lưu tổng các số trong xâu s
    long long sum = 0;
    // Duyệt từng kí tự trong xâu s
    for (int i = 0; i < s.size(); i++) {
        // Nếu kí tự là số
        if (isdigit(s[i])) {
            // Tiếp tục đọc tất cả các chữ số liên tiếp
            while (isdigit(s[i])) {
                temp = temp + s[i];
                i++;
                // Nếu đọc hết xâu s
                if (i == s.size()) break;
            }
            // Chuyển xâu tạm thành số và cộng vào tổng
            sum += stoll(temp);
            // Xóa nội dung trong xâu tạm
            temp = "";
        }
    }
    // In ra tổng
    cout << sum << endl;
    // Kết thúc chương trình
    return 0;
}
/* Test case:

Input: abc123def456

Output: 579

Input: 123456

Output: 123456

Input: abcdef

Output: 0
*/