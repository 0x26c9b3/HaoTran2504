//Bài 10: Tính T(x, n) = x^n
#include <bits-stdc++.h>
using namespace std;

double pow_N(double x, long n){
    double result = 1;
    while(n--) {
        result = result * x;
    }
    return result;
}
double qPow(double x, long n){ 
    double result = 1;
    while(n){
        if(n % 2 == 1){
            result = result * x;
        }
        x = x * x;
        n = n / 2;
    }
    return result;
}
int main(){
    double x = 3;
    long n = 2;
    double z;
    z = qPow(x, n);
    cout << z << endl;
    return 0;
}