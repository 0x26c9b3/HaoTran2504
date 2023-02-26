#include <bits-stdc++.h>
using namespace std;
//Có n đứa trẻ và m quả táo, Andrew2804 muốn đếm số cách chia táo
// cho n đứa trẻ, nhưng trong trường hợp này không nhất thiết
// đứa trẻ nào cũng phải có táo. Ví dụ, có 3 đứa trẻ và 2 quả táo,
// có những cách chia như sau 
//(0, 0, 2), (0, 2, 0), (2, 0, 0), (1, 1, 0), (0, 1, 1), (1, 0 ,1).
// Bạn hãy giúp anh ấy nhé ! Ở đây n với m, mình cho <= 25,
// vậy bạn thử nghĩ xem trong trường hợp n,m <= 1000
//, hoặc n,m <= 10^6, và yêu cầu in ra kết quả của bài toán chia dư 
//với 10^9 + 7 thì hướng giải như thế nào?

long long pr[56][56];
void init(){
    for (int i = 0; i <= 55; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(j==0 || j==i) {
                pr[i][j] = 1;
            }
            else {
                 pr[i][j] = pr[i-1][j-1] + pr[i-1][j];
            }
        }
        
    }
    
}
int main(){
    init();
    int n; cin >> n;
    int m; cin >> m;
    cout << pr[m+n-1][n-1] << endl;
    return 0;
}