#include<bits-stdc++.h>
using namespace std;

int pr[10000001];
void init(){
    for(int i =0 ; i<1000001;i++){
        if(pr[i]==1)
            pr[i]=1;
    }
    pr[0]=pr[1]=0;
    for (int i = 2;i<sqrt(10000001); i++){
        if(pr[i]==1{
            for(int j=i*i;j<1000001;j+=i)
                {
                    pr[i]=0;
            }
        }
    }
}
int main(){
    init();
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        if(pr[i]){
            cout << i<<" ";
        }
    }
}