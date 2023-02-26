#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;


int main() {
    string s1, s2;
    cin >> s1 >> s2;
    set <char> st1, st2, st3;
    for(int i=0; i<s1.size(); i++){
        st1.insert(s1[i]);
        st3.insert(s1[i]);
    }
    for(int i=0; i<s2.size(); i++){
        if(st1.count(s2[i])) st2.insert(s2[i]);
        else st3.insert(s2[i]);
    }
    for(auto x : st2){
        cout << x;
    }
    cout << endl;
    for(auto x : st3){
        cout << x;
    }
    return 0;
}