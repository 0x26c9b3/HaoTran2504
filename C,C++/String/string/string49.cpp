//[Xâu ký tự]. Bài 49. Xóa cụm 111.cpp
#include <bits/stdc++.h>
using namespace std;
/* Bài: Xóa từng xâu 111 trong một chuỗi
- Sử dụng hàm del111 để tìm và xóa các xâu 111 trong chuỗi s
- Nếu chuỗi s vẫn còn ký tự, in ra chuỗi s sau khi xóa xâu 111
- Ngược lại in ra "Empty\n"
*/
string del111(string s){
    while(s.find("111")!=string::npos){ // Tìm xâu "111" within chuỗi s
    int x = s.find("111"); // Lấy vị trí của xâu "111"
        s.erase(x,3); // Xóa 3 ký tự tại vị trí x
    }
    if(s.size()) return s; // Nếu chuỗi còn ký tự thì trả về chuỗi sau khi xóa
    return "Empty"; // Ngược lại trả về "Empty"
}

int main(){
    string s;
    cin >> s;
    cout << del111(s); // In ra chuỗi sau khi xóa
    cout << endl;
    return 0;
}
/*
Test cases:

s = "11101110111" -> output: "Empty\n"
s = "111000111" -> output: "0001\n"
s = "11121111119" -> output: "1219\n"
s = "2100111" -> output: "2100\n"
s = "1111" -> output: "Empty\n"
*/