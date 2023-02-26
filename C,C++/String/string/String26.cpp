// Thêm chú thích và test case
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Nhập xâu ký tự
    string s, temp;
    cin >> s;

    // Khởi tạo biến đếm và biến chỉ số
    int cnt = 1 , j = 0;

    // Duyệt từng kí tự của xâu
    for(int i = 0; i < s.size(); i++){
        // Nếu kí tự hiện tại bằng kí tự tiếp theo, tăng biến đếm
        if(s[i]==s[i+1])
            cnt++;
        else {
            // Tạo xâu con từ vị trí j đến cnt
            string tmp = s.substr(j, cnt);
            // So sánh chiều dài xâu con với xâu lớn nhất đã tìm được
            if(cnt > temp.size()){
                // Nếu xâu con dài hơn xâu lớn nhất, gán xâu con vào xâu lớn nhất
                temp = tmp;
            }
            else if(cnt == temp.size()){
                // Nếu xâu con có chiều dài bằng xâu lớn nhất, so sánh từ khoá lexicographically
                if(temp < tmp) temp = tmp;
            }
            // Cập nhật vị trí và gán lại biến đếm
            j = i + 1;
            cnt =1;
        }
    }
    // Xuất xâu con liên tiếp các kí tự giống nhau dài nhất hoặc lexicographically nhất nếu có nhiều xâu cùng dài
    cout << temp << endl;

    return 0;
}

// Test case:
// Input: abbcccdddd
// Output: dddd

// Input: abababab
// Output: abababab

// Input: abbbcdddde
// Output: ddddd
