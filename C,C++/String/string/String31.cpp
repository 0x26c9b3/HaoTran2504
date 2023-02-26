//[Xâu ký tự]. Bài 31. Tổng chữ số của số nguyên.cpp
#include <bits-stdc++.h>
using namespace std;

// Tính tổng các chữ số trong xâu s
long long SoD(string s){
    // Nếu xâu rỗng thì trả về 0
    if(s.size() == 0) return 0;
    // Ngược lại trả về giá trị tại vị trí đầu tiên trong xâu - '0' + giá trị tổng của xâu con từ vị trí thứ 2 trở đi
    return s[0] - '0' + SoD(s.substr(1));
}

int main(){
    //Khai báo biến s
    string s;
    cin >> s;
    cout << SoD(s) << endl;
    return 0;
}
/*
Input:
123

Output:
6

Input:
1230

Output:
6

Input:
100

Output:
1

Input:
1000

Output:
1

Input:
10000

Output:
1

Input:
11111

Output:
5
*/