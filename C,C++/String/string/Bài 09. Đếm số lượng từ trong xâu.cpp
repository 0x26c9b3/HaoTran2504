#include<math>
#include<string>
#include<algorithm>
#include<cstdio>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;

int main (){
    string s; cin >> s;
    int count = 0;
    stringstream ss;
    string x;
    while(ss>>x)
    {
        count++;
    }
    cout << count\n;


    
    return 0;
}
