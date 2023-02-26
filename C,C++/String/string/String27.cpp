//[Xâu ký tự]. Bài 27. Xâu con liên tiếp các kí tự khác nhau.cpp
// Code để tìm ra xâu con liên tiếp các kí tự khác nhau dài nhất trong một xâu
#include <bits-stdc++.h>
using namespace std;

int main()
{
    string s; // Tạo biến s là chuỗi nhập từ bàn phím
    string temp; // Tạo biến temp để lưu chuỗi con liên tiếp các kí tự khác nhau dài nhất
    cin >> s; // Nhập chuỗi s từ bàn phím
    int cnt = 1, j = 0; // cnt là biến đếm số lần xuất hiện liên tiếp của một kí tự, j là vị trí bắt đầu của chuỗi con liên tiếp các kí tự khác nhau
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i + 1]) // Nếu kí tự tại vị trí i khác kí tự tại vị trí i+1
            cnt++; // Tăng cnt lên 1
        else {
            string tmp = s.substr(j, cnt); // Tạo chuỗi con từ vị trí j trong s, có độ dài là cnt
            if(cnt > temp.size()){ // Nếu độ dài của chuỗi tmp lớn hơn độ dài của temp
                temp = tmp; // Gán temp bằng tmp
                }
            else if(cnt == temp.size()){ // Nếu độ dài của chuỗi tmp bằng độ dài của temp
                if(temp < tmp) temp = tmp; // Nếu temp nhỏ hơn tmp, gán temp bằng tmp
            }
            j = i + 1; // Cập nhật vị trí j
            cnt = 1; // Đặt lại giá trị cnt = 1
        }
    }
    
    cout << temp << endl; // Xuất chuỗi con liên tiếp
    return 0;
}
/*
// Test case 1: 
Input: abcdefghijklmnopqrstuvwxyz
Output: abcdefghijklmnopqrstuvwxyz

// Test case 2: 
Input: abcccdefg
Output: cccc

// Test case 3: 
Input: abccdefg
Output: abc

// Test case 4: 
Input: abcccdefgabc
Output: abc

// Test case 5: 
Input: abcccdefgabccc
Output: abccc
*/