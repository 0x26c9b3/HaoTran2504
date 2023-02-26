//[Xâu ký tự]. Bài 25. Số lớn nhất, nhỏ nhất.cpp
#include <bits-stdc++.h>
using namespace std;

// Hàm tìm số lớn nhất trong m số có tổng bằng s
string findMax(int m, int s){
    // Nếu m = 1 và s = 0 thì kết quả là 0
    if (m == 1 && s == 0) return "0";
    string res;
    // Duyệt m số
    while(m--){
        // Nếu s >= 9 thì thêm số 9 vào kết quả và trừ đi 9 từ s
        if(s >= 9) {
            res = res + '9';
            s = s - 9;
        }
        else {
            // Nếu s < 9 thì thêm số s vào kết quả và gán s = 0
            res += (s + '0');
            s = 0;
        }
    }
    return res;
}

// Hàm tìm số nhỏ nhất trong m số có tổng bằng s
string findMin(int m, int s){
    // Nếu m = 1 và s = 0 thì kết quả là 0
    if(m == 1 && s == 0) return "0";
    string res;
    // Duyệt m số
    while(m--){
        // Nếu s > 9 thì thêm số 9 vào đầu kết quả và trừ đi 9 từ s
        if(s > 9){
            res = '9' + res;
            s = s - 9;
        }  
        else {
            // Nếu s <= 9 và m > 0 thì thêm số (s - 1) vào đầu kết quả và gán s = 1
            if(m) {
                char x = (s - 1) + '0';
                res = x + res;
                s = 1;
            }
            // Nếu s <= 9 và m = 0 thì thêm số s vào đầu kết quả
            else {
                char x = s + '0';
                res = x + res;
            }
        }
    }
    return res;
}

int main(){
    int m, s;
    cin >>m >>s;
    //Nếu m khác 1 và s khác 0 hoặc tổng số từ 9 của m lớn hơn s, in ra "NOT FOUND !".
    if((m != 1 && s !=0) ||  (m * 9 < s)) 
        cout << " NOT FOUND !\n";
    //Nếu điều kiện trên không đạt, gọi hai hàm findMin và findMax để tìm số nhỏ nhất và lớn nhất với m chữ số và tổng số là s.
    else
        cout << findMin(m, s) << endl;
        cout << findMax(m, s) << endl;
}
//Hàm findMin và findMax:

/*Nếu m = 1 và s = 0, trả về "0".
Trong khi m > 0:
Nếu s >= 9, thêm số 9 vào res và giảm s đi 9.
Nếu s < 9:
Nếu m > 1, thêm s - 1 vào đầu res và gán s = 1.
Nếu m = 1, thêm s vào đầu res.
Trả về res.*/




/*Input: 2 20
Output:
99
18

Input: 1 0
Output:
0
0

Input: 4 0
Output:
 NOT FOUND !

Input: 2 10
Output:
 NOT FOUND !*/