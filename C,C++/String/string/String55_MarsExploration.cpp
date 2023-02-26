//Bài 55. Mars Exploration
#include <bits-stdc++.h>
using namespace std;

int marsExploration(string s){
    int ans = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] != 'S') ans++;
        if(s[i] != 'O') ans++;
        if(s[i] != 'S') ans++;
    }
    return ans++;
}

int main() {
    string s;
    getline(cin, s);
    
    int result = marsExploration(s);
    
    cout << result << endl;
        
    return 0;
}