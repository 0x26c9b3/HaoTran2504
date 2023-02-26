#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    string s;
    getline(cin, s);
    int letter = 0, number = 0, speacial = 0, n= s.size();
    for (int i = 0; i< n ; i++)
    {
        if(s[i] >='a' && s[i] <= 'z' ||s[i] >= 'A' && s[i] <='Z')letter++;
        else if(s[i] >= 0 && s[i] <= 9) number++;
        else speacial++;
    }
    
    cout << letter << " " << number << " " << special << endl;  
    return 0;
}
