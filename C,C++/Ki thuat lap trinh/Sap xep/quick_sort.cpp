#include <bits-stdc++.h>
using namespace std;
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
//ham partition dung de chia mang thanh 2 phan
//phan trai nho hon pivot
//phan phai lon hon pivot 

void quickSort(int a[], int l, int r){
    if(l >= r) return;

    int mid = a[(l + r) / 2];
    int i = l;
    int j = r;

    while (i <= j){ 
        while(a[i] < mid) i++;
        while(a[j] > mid) j--;
            if(i <= j) {
                swap(a[i], a[j]);
                i++;
                j--; 
            } 
    }
    quickSort(a, l, j);
    quickSort(a,  i, r);

}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }cout << endl;
}
int main(){
    int a[] = { 9 , 8 , 7 , 6 , 5 , 4};
    int n = sizeof(a) / sizeof(a[0]);
    int l = 0;
    int r = n - 1;
    quickSort(a, l, r);
    printArray(a, n);
    return 0;
}
