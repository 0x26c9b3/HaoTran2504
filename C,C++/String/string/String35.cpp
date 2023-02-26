//[Xâu ký tự]. Bài 35. Số chia hết cho 6.cpp
#include <bits-stdc++.h>
using namespace std;

//Hàm xóa số 0 đầu tiên trong s
long long SoD(string s) {
    if(s.size()) return s[0] - '0' + SoD(s.substr(1));
    return 0;
}
//Hàm kiểm tra xem có s chia hết cho 6 không 
bool IsDivBy6(string s) {
//Kiểm tra số cuối của s có chia hết cho 2 không
    if((s[s.size() - 1] - '0') % 2) return 0;
//Kiểm tra tổng các chữ số của s có chia hết cho 3 không
    if(SoD(s) % 3) return 0;
    return 1;
}
int main(){
    string s;
    cin >> s;
    if(IsDivBy6(s)) cout << "YES\n";
    else    cout << "NO\n";
    return 0;
}
/* Test case 1: s = "360" 
output: YES
Lý do: 360 chia hết cho 6 vì 360 chia hết cho 2 và tổng các chữ số là 9 chia hết cho 3.
*/

/* Test case 2: s = "420" 
output: YES
Lý do: 420 chia hết cho 6 vì 420 chia hết cho 2 và tổng các chữ số là 6 chia hết cho 3.
*/

/* Test case 3: s = "188" 
output: NO
Lý do: 188 không chia hết cho 6 vì 188 không chia hết cho 2 và tổng các chữ số là 17 không chia hết cho 3.
*/
