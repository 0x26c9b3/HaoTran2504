#include<bits-stdc++.h>
using namespace std;
int main(){
    long long l,r;
    cin>>l>>r;
    int trai= sqrt(l);
    int phai= sqrt(r);
    if(1ll*trai*trai!=1) ++trai;
    cout << phai-trai*1<<" "<<endl;

}