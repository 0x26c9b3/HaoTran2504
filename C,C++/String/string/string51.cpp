//Bài 51. Strong Password
#include<bits-stdc++.h>
using namespace std;
//Hàm minimumNumber đếm số lượng ký tự, số, chữ hoa, chữ thường và đặt biến cnt[4] để lưu tổng số từng loại
//Nếu mà cnt[i]=0 tức là chưa có loại này, cần ans++
//Nếu tổng số ký tự + ans < 6 thì min(ans với 6 - n - ans)
//Hàm ltrim và rtrim xoá khoảng trắng 2 đầu chuỗi
string ltrim(const string &s);
string rtrim(const string &s);

int minimumNumber(int n, string s){
    int cnt[4]={}, ans = 0;
    for (int i = 0; i < n; i++) {
        if(isdigit(s[i])){
            cnt[0]++;
        }
        else if((s[i] == 'A') && (s[i] <= 'Z')){
            cnt[1]++;            
        }
        else if(s[i] == 'a' && (s[i] <= 'z')){
            cnt[2]++;
        }
        else cnt[3]++;
    }
    for(int i = 0;i < 4;i++){
        if(cnt[i] = 0){
            ans++;
        }
    }
    if(n + ans < 6) ans += (6 - n - ans);
    return ans;

}
int main(){
    ofstream fout(getenv("OUTPUT_PATH"));
    
    string n_temp;
    getline(cin, n_temp);
    
    int n = stoi(ltrim(rtrim(n_temp)));
    
    string password;
    getline(cin, password);
    
    int answer = minimumNumber(n, password);
    
    fout << answer << endl;
    
    fout.close();
    
    return 0;
}
string ltrim(const string &str){
    string s(str);
    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );
    return s;
}
string rtrim(const string &str){
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
/*Test cases:

Nhập vào chuỗi "1234Abcd" => Output: 4 (cần thêm 1 số, 1 chữ hoa và 2 chữ thường)
Nhập vào chuỗi "aaa" => Output: 3 (cần thêm 1 số, 1 chữ hoa và 1 chữ thường)
Nhập vào chuỗi "A1#" => Output: 2 (cần thêm 2 số, 2 chữ hoa và 2 chữ thường)
Nhập vào chuỗi "A1#A1#" => Output: 1 (cần thêm 1 số, 1 chữ hoa và 1 chữ thường)
Nhập vào chuỗi "123456ABCDEFG" => Output: 0 (chuyển thành mật khẩu mạnh)
*/