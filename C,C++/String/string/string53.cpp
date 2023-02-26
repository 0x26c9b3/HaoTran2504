//bai 53:Two Character

#include <bits-stdc++.h>
using namespace std;

string ltrim(const string &s);
string rtrim(const string &s);
//Hàm xóa tất cả ký tự c trong s
string remove(string s, char c){
    string tmp;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != c) tmp += s[i];
    }
    return tmp;
}
//Hàm check xem xâu s có phải xâu xen kẽ 2 ký tự không
bool check(string &s){
    if(s.size() <= 1) return 1;
    for(int i = 0; i < s.size() -1 ; i++){
        if(s[i] = s[i+1]){
            s = remove(s, s[i]);
            return 0;
        }
    }
    return 1;
}
//Hàm xử lý xâu s, chỉ giữ lại 2 loại ký tự là x và y trong xâu
int process(string s, char x, char y){
    string res = "";
    for(int i=0; i < s.size(); i++) {
        if(s[i] == x || s[i] == y) {
            res += s[i];
        }
    }
    if(check(res)) return res.size();
    return 0;
}

//Tìm xâu xen kẽ dài nhất có thể đạt được

int alternate(string s){
    while(!check(s)){
        map<char, int> mp;
        vector<char> v;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]] = i;
        }
        int ans = 0;
        for(auto x: mp) v.push_back(x.first);
        for(int i = 0; i < v.size(); i++){
            for(int j = i+1 ; j < v.size(); j++){
                ans = max(ans, process(s, v[i], v[j]));
            }
        }
        return ans;
    }
}
int main(){

    ofstream fout(getenv("OUTPUT_PATH"));
    
    string l_temp;
    getline(cin, l_temp);
    
    int l = stoi(ltrim(rtrim(l_temp)));
    
    string s;
    getline(cin, s);
    
    int res = alternate(s);
    
    fout << res << endl;
    
    fout.close();
    
    return 0;
}

string ltrim(const string &str){
    string s(str);
    
    s.erase(
        s.begin(), 
        find_if(s.begin(), s.end(),
        not1(ptr_fun<int, int>(isspace)))
        );
}
string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}