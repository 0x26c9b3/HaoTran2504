#include<bits-stdc++.h>
using namespace std;
int pr[1000001];
void init()
{
    for (int i = 2; i < 1000001; i++)
    {
        pr[i]=1;
    }
    pr[0]=pr[1]=0;
    for(int i = 2; i < sqrt(1000001);i++)
    {
        if(pr[i]==1){
            for(int j=i*i;j<1000001;j+=i)
            {
                pr[j]=0;
            }
        }
    }
}
int main(){
    init();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(pr[n]){
            cout<<"Yes"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}