//[Xâu ký tự]. Bài 30. Ghép số.cpp
#include <bits-stdc++.h> // thư viện chứa các hàm tiên tiến
using namespace std; // sử dụng các hàm trong namespace std

void del0(string &s){ // hàm xóa số 0 đầu trong một chuỗi
    while(s[0] == '0' && s.size() > 1){
        s = s.substr(1);
    }
}

bool compareTwoString(string a, string b){ // hàm so sánh 2 chuỗi
    // so sánh a + b với b + a để tìm ra chuỗi lớn nhất
    return a + b > b + a; 
}

int main(){
    string s, temp;
    cin >> s; // nhập xâu s
    vector<string> v; // vector chứa các số trong xâu s
    for (int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i])){ // nếu s[i] là một chữ số
            while(isdigit(s[i])){
                temp = temp + s[i]; // thêm ký tự vào temp
                i++;
                if(i == s.size()) break;
            }
            del0(temp); // xóa số 0 đầu
            v.push_back(temp); // thêm temp vào vector v
            temp = "";
        }
    }
    sort(v.begin(), v.end(), compareTwoString); // sắp xếp vector v theo hàm so sánh compareTwoString
    for(auto x : v){ // duyệt vector v và in ra từng phần tử
        cout << x;
    }
    return 0; // kết thúc chương trình
}
/*
Input: "12987429346820943"
Output: "12987429346820943"

Test case 1:
Input: 123456789
Output: 123456789

Test case 2:
Input: 103005678950
Output: 103005678950

Test case 3:
Input: 1030056789505050
Output: 1030056789505050

Test case 4:
Input: 55555555555555 999999999999999
Output: 9999999999999995 5555555555555

Test case 5:
Input: 100000 5555 9
Output: 9555 100000
*/