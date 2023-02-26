//[Xâu ký tự]. Bài 43. Ước chung lớn nhất.cpp
#include <bits-stdc++.h>
using namespace std;

// modCalc calculates the remainder when the input string s is divided by m
// using the repeated division method
long long modCalc(string s, long long m){
    long long result = 0;
    for (int i = 0; i < s.size(); i++){
        // convert each digit in the string to an integer
        int x = s[i] - '0';
        result = result * m + x;
        result %= m;
    }
    return result;
}

// gcd calculates the greatest common divisor of the input string s and m
// using the Euclidean algorithm
string gcd(string s, long long m){
    if(m==0) return s;
    // convert the result of modCalc to a string and pass it as the first argument
    // in the next recursive call
    return gcd(to_string(m), modCalc(s, m));
}

int main(){
    string n;
    long long m;
    // read the inputs
    cin >>n >>m;
    // print the result of gcd
    cout << gcd(n, m) << endl;
    return 0; 
}