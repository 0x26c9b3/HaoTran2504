//[Xâu ký tự]. Bài 19. Tạo email và mật khẩu 2.cpp

#include <bits-stdc++.h>
using namespace std;

map <string, int> mp;

string Email(string s) {
    stringstream ss(s);
    string temp, res;

    while(ss >> temp){
        res += tolower(temp[0]);
    }
    res = res.substr(0, res.size()-1)

    for (int i = 0; i < temp.size() ; i++)
    {
        temp[i] = tolower(temp[i]);
    }
    res += temp;
    mp[res]++;

    if(mp[res] > 1){
        res += to_string(mp[res]);
    }
    res += "@gmail.com";
    return res;

}
string passWord(string s) {
    string res;
    for (int i = 0; i < s.size(); i++)
    {
        if((i == 0 || i == 3) && (s[i] == '0')) continue;
        if(s[i] >= '0' && s[i] <= '9') res += s[i];
    }
    return res;    
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s, name, date;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> date){
            if(date[0] >= '0' && date[9] <= '9' )break;
            name += date;
            name += " ";
        }
        cout << Email(name) << endl << passWord(date) << endl;
    }
    return 0;
}