//[Xâu ký tự]. Bài 41. Số nhị phân chia hết cho 2^K.cpp
#include <bits-stdc++.h>
using namespace std;

bool IsDivBy2k(string s, int k){
    //Khai báo chuỗi temp, với kích thước bằng với s.size(), khởi tạo từng char trong chuỗi là '0
    string temp(s.size(), '0');
    //Kiểm tra nếu K = 0 hoặc chuỗi s = temp thì không cần làm gì nữa
    if(k == 0 || temp == s) return 1;
    if(k > s.size()-1) return 0; // k kiểm tra nếu k lớn hơn s.size()-1 thì trả về 0
    reverse(s.begin(), s.end()); // đảo chuỗi
    int f = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
        f = 1; // nếu có ký tự '1' trong chuỗi s, gán f = 1
        break;
        }
    }
    if(f == 0) return 0; // nếu không có ký tự '1' trong chuỗi s, trả về 0
    for (int i = k - 1; i >= 0; i--){
        if(s[i] == '1'){
        return 0; // nếu ký tự '1' xuất hiện trong vị trí k-1 hoặc trước, trả về 0
        }
    }
    return 1; // trả về 1 nếu không có ký tự '1' trong vị trí k-1 hoặc trước
}

int main(){
    string s;
    int k;
    cin >> s >> k;
    if(IsDivBy2k(s, k)) cout << "YES";
    else cout <<"NO"<<endl;
    return 0;
}
/*
Input: "11", 1. Output: "YES"
Input: "101", 2. Output: "NO"
Input: "100", 2. Output: "YES"
Input: "1111", 2. Output: "NO"
Input: "1111", 3. Output: "YES"
Input: "0", 2. Output: "YES"
Input: "1", 0. Output: "YES"
Input: "11", 0. Output: "NO"
*/
