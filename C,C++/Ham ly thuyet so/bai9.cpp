#include<bits-stdc++.h>
using namespace std;
define max 1000001;
int prime[max];

void init(){
    for (int i = 0; i < max; i++)
    {
        prime[i]=1;
    }
    prime[0]=prime[1]=0;
    for (int i = 2; i < max; i++)
    {
        if(prime[i]=1){
            for (int j = i*i; i < max; j+=i)
            {
                prime[i]=0;
            }
        }
    }
}
int main()
{   
    init();
    long long n;
    cin >> n;
    int cnt =0;
    for (int i = 1; i < sqrt(n); i++)
    {
        if(pr[i])
        {
            ++cnt;
        }
    }
    cout << cnt << endl;
    
    return 0;
}