#include<bits-stdc++.h>
using namespace std;

void insertion_sort(int *arr, int n){
    int i, j , temp;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while(j>=0 && arr[j] > temp ){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int main(){
    int arr[]={4,8,9,5,2,5,7,5,6,5};
    int n =sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}