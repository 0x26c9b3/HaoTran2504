#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'separateNumbers' function below.
 *
 * The function accepts STRING s as parameter.
 */

//Hàm check nếu lấy k ký tự đầu của xâu s thì có tạo chuỗi số liên tiếp được hay không
bool check(string s, int k){
    if(s[0]=='0' && k>1) return 0;
    long long cur = stoll(s.substr(0, k))+1;
    string tmp=to_string(cur);
    for(int i=k; i<s.size(); i++){
        string str=s.substr(i, tmp.size());
        if(tmp!=str) return 0;
        i+=tmp.size()-1;
        cur++;
        tmp=to_string(cur);
    }
    return 1;
}

void separateNumbers(string s) {
    for(int i=1; i<=s.size()/2; i++){
        if(check(s, i)){
            cout << "YES " << s.substr(0, i) << endl;
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        separateNumbers(s);
    }

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