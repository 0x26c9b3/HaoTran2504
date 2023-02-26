#include<bits-stdc++.h>
using namespace std;
void swap(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}
void selection_sort(int a[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int min_index = i;
        for (int j ; i+1; j < n; j++)
        {
            if(a[j] < a[min_index])
            min_index = j;
        }
        swap(a[i],a[min_index]);
    }
}
int main(){
    int a[]={7,2,3,5,9};
    int n = sizeof(a) / sizeof(a[0]);
    selection_sort(a,n);
    cout << "Sorted array:";
    for (int i = 0; i < n ; i++)
    {
        cout << a[i] << " ";
    }
    
}