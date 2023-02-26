//[Xâu ký tự]. Bài 47. Ước chung lớn nhất.cpp
//Chú thích vào mỗi dòng chính.
/*
Bài 47: Tìm ước chung lớn nhất giữa ba số nguyên a, b, c
Tính ước chung in kết quả.
*/
#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {  //Tìm ước chung lớn nhất cho hai số đầu vào.
    if (b == 0) return a;                  //Nếu biến b bằng 0, trả về a.
    return gcd(b, a % b);                 //Trả về gcd sau khi tính toán.
}
int main(){
    long long a, b, c; 
    int a;
    //Khai báo 3 biến a, b, c.
    cin >> a >> b >> c;           //Nhập 3 biến từ bàn phím.
    long long temp = gcd(b, c);   //Lấy kết quả của hàm gcd tính cho hai biến b và c.
    while (temp--) {             //Vòng lặp, với điều kiện temp trừ đi 1 mỗi lần.
        cout << a;               //In ra biến a.
    }
    cout << endl;                //Xuống dòng.
    return 0;                   //Kết thúc chương trình với kết quả 0.
}