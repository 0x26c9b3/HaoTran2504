//Bài 56. HackerRank in a String!
#include <bits-stdc++.h>
using namespace std;

string ltrim(const string &s);
string rtrim(const string &s);

string hackerRankInAString(string s){
    string str = "hackerrank";
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == str[j]) {
            j++;
        }
        if(j > 9) return "YES";
            return "No";
    }
}
int main(){ 
    ofstream fout(getenv("OUTPUT_PATH"));
    
    string q_temp;
    
    getline(cin, q_temp);
    
    int q = stoi(ltrim(rtrim(q_temp)));
    
    for (int i = 0; i < q; i++) {
        string s;
        getline(cin, s);
        
        string result = hackerRankInAString(s);
        
        fout << result << "\n";
    }
    fout.close();
    return 0;    
}
string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
/*Mã bắt đầu bằng cách khai báo một chuỗi gọi là "str" và sau đó khai
báo hai hàm, ltrim () và rtrim (). 
Hàm đầu tiên được sử dụng để loại bỏ khoảng trống từ đầu chuỗi. 

Hàm thứ hai loại bỏ bất kỳ khoảng trắng nào từ cuối chuỗi.  
Mã bắt đầu bằng cách nhận đầu vào từ người dùng trên một câu lệnh 
IF kiểm tra xem họ có muốn xem có hay không khi họ nhấn Enter hay không. 
Nếu vậy, nó in ra có! 

Nếu không, nó in ra không !. 

Sau khi in ra có hoặc không, nó mở ra một tệp đầu ra để viết văn bản. 
Mã này có nghĩa là để chỉ ra cách sử dụng các hàm chuỗi LTRIM và RTRIM.
*/