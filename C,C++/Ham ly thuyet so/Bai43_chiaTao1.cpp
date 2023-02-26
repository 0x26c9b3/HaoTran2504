    //Có n quả táo và m cái hộp, Andrew2804 muốn tìm
    //số cách chia n quả táo này vào m hộp sao cho hộp nào cũng
    //có ít nhất 1 quả táo. Bạn hãy giúp anh ta nhé.
#include <bits-stdc++.h>
using namespace std;

int pr[1001][1001];
void init(){
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(j = 0 || j = i){
                pr[i][j] = 1;
            }
            else {
                pr[i][j] = pr[i-1][j-1] + pr[i-1][j];
                pr[i][j] %= (int)(1e9 + 7)
            }
        }
        
    }
    
}
int main(){
    init();
    int n, m; cin >> n >> m;
    cout << pr[n-1][m-1] << endl;
}