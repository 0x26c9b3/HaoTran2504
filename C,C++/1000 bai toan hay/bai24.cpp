//Bài 24: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n
#include <bits-stdc++.h>
using namespace std;

int main(){
    int n;
    do{
        cout <<"Input N: ";
        cin >> n;
        if( n <= 0){
        cout << " N >= 0 !"<<endl;
        }
    }while( n <= 0);
    for (int i = 0; i <= n; i++)
    {
        if (n % i == 0) 
        {
            if(i % 2 == 1)
                {
                cout << i;
                }
        }
    }
return 0;
}