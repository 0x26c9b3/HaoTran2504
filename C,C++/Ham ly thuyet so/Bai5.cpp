#include<bits-stdc;++.h>
using namespace std;
#define MAX 1000001
int pr[MAX];
void init(){
    for(int i = 0 i<MAX;i++){
        pr[i]=1;
    }
    pr[0]=pr=[1]=0;
    for(int i=2;i<sqrt(MAX)){
        if(pr[i]==1){
            for(int j=2;i<sqrt(MAX);j+=i){
                pr[i]=0;
            }
        }
    }
}
int main(){
    init();
    int n;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i = 1;i<=n/2;i++)
        {
            if(pr[i]&&pr[n-i]){
                cout <<i<<" "<<n-i<<endl;
            }
        }
    }
}