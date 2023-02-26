//[Xâu ký tự]. Bài 50. Tích giai thừa các chữ số.cpp
#include <bits-stdc++.h>
using namespace std;
/*
Đọc chuỗi nhập vào s
Tạo một vector v lưu tích của mỗi chữ số trong s (nếu chữ số > 1)
Xử lý riêng cho các số nhất định: 4=2x2x3, 6=2x3x5, 8=2x2x2x7, 9=3x3x2x7
Sắp xếp vector v từ lớn -> bé và in kết quả
*/
void Process(vector<int>&v,int n){
    if(n==4){
        v.push_back(3);
        v.push_back(2);
        v.push_back(2);
    }
}
int main(){
    string s;
    cin >> s;
    vector <int> v;//Vector chứa kết quả tích giai thừa
    for(int i=0;i<s.size();i++){
        if(s[i] > '1'){//Xét nếu chữ số > 1
            int x = s[i] - '0';//Chuyển chữ số sang số
            if(x==4){
                v.push_back(3);
                v.push_back(2);
                v.push_back(2);
            }
            else if(x==6){
                v.push_back(3);
                v.push_back(5);
            }
            else if(x==8){
                v.push_back(7);
                v.push_back(2);
                v.push_back(2);
                v.push_back(2);
            }
            else v.push_back(x);
        }
    }
    sort(v.begin(),v.end(),greater<int>());
    for(auto x:v){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
/*Test Cases:

Nhập "245": Output "60"
Nhập "1925": Output "5040"
Nhập "384": Output "392"
Nhập "123456789": Output "324"
Nhập "9876": Output "9720"
*/