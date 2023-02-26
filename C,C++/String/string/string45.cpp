//[Xâu ký tự]. Bài 45. Chữ số cuối cùng.cpp
#include <bits-stdc++.h>
using namespace std;
long long modCalc(string s, long long m){
    long long res = 0;//result
    for (int i = 0; i < s.size(); i++)
    {
        int x = s[i] - '0';
        res = res * 10 + x;
        res %= m;
    }
    return res;
}
int main() {
    string s;
    cin >> s;
    long long x = modCalc(s,4);
    switch (x) {
        
        case 1:
        {   
            cout << "8\n";
            break;
        }
        case 2:
        {
            cout << "4\n";
            break;
        }
        case 3:
        {
            cout <<"2\n";
            break;
        }
        case 0:
        {
            cout <<"6\n";
            break;
        }
        default:
            break;
    }
    return 0;
}