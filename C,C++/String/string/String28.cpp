//[Xâu ký tự]. Bài 28. Số lớn nhất xuất hiện trong xâu.cpp
#include <bits-stdc++.h>
using namespace std;

// Hàm xóa số 0 ở đầu của xâu
void del0(string &s) {
    // Lặp đến khi không còn số 0 hoặc xâu chỉ còn một ký tự
    while(s[0] == '0' && s.size() > 1)
        s = s.substr(1);
}

// Hàm so sánh 2 xâu số
int compareBigNum(string a, string b) {
    // Trả về 1 nếu a > b, -1 nếu a < b, 0 nếu a = b
    if(a.size() > b.size()) return 1;
    if(a.size() < b.size()) return -1;
    int k = a.size();
    // Khai báo k có giá trị bằng với chiều dài của mảng a
    for (int i = 0; i < k; i++)
    {
        if(a[i] < b[i]) return -1;
        if(a[i] > b[i]) return 1;
    }
    return 0;
}

int main(){
    // Khai báo biến
    string s, temp;

    // Nhập xâu
    cin >> s;
    
    // Khai báo biến chứa số lớn nhất
    string MAX = " ";

    // Lặp qua từng ký tự của xâu
    for (int i = 0; i < s.size(); i++){
        // Nếu ký tự hiện tại là số
        if(isdigit(s[i])){
            // Thêm ký tự hiện tại vào xâu temp
            temp = temp = s[i];
            // Tăng i lên 1
            i++;
            // Nếu i bằng độ dài của xâu, dừng lặp
            if(i == s.size()) break;
        }
        // Xóa số 0 ở đầu xâu
        del0(temp);
        // So sánh số trong temp với MAX
        if(compareBigNum(temp, MAX) > 0) MAX = temp;
        // Reset temp về rỗng
        temp = "";
    }

    // Xuất số lớn nhất
    cout << MAX << endl;
    return 0;
}

