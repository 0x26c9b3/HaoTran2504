//[Xâu ký tự]. Bài 34. Số đẹp 3.cpp
#include <bits-stdc++.h>
using namespace std;
// Hàm kiểm tra xem s có giảm dần hay không
bool nonIncreasingCheck(string s){
    //Duyệt từ đầu tới cuối chuỗi s
    for (int i = 0; i < s.size() - 1; i++){
        if(s[i] < s[i+1]) return 0; //Kiểm tra 
    }
    return 1;
}
// Hàm kiểm tra xem s có tăng dần không
bool nonDecreasingCheck(string s){
    for (int i = 0; i < s.size() - 1; i++){
        if (s[i] > s[i+1]) return 0; //Kiểm tra
    }
    return 1;
}
int main(){
    string s;
    cin >> s;
    if((nonIncreasingCheck(s)) || (nonDecreasingCheck(s)))
        cout << "YES\n";
    else 
        cout << "NO\n";
    return 0;
}  
/*
Input: "12345"
Output: "YES"
Input: "54321"
Output: "YES"
Input: "12321"
Output: "YES"
Input: "11233"
Output: "NO"
Input: "1221"
Output: "YES"
*/