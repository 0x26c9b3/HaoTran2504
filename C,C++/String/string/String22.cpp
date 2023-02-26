//[Xâu ký tự]. Bài 22. Tập từ riêng của 2 xâu.cpp
#include <bits-stdc++.h>
using namespace std;

void lowerString(string &s){
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    
}

int main() {
    string s, t, temp;
    getline(cin, s);
    getline(cin, t);

    stringstream ss(t);
    set <string> set1, set2;
    while(ss >> temp){
        lowerString(temp);
        set1.insert(temp);
    }
    stringstream tt(s);
    while(tt >> temp){
        lowerString(temp);
        if(set1.count(temp) == 0)
        set2.insert(temp);
    }
    for (auto x: set2) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}