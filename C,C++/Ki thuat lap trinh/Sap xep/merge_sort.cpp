#include<bits-stdc++.h>
using namespace std;
void merge(int a[],int l,int m , int r)
{
    
    //ham dung de ket hop 2 mang con cua mang a
    //mang con dau tien la a[l..m]
    //mang con thu hai la a[m+1..r]
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    
    //tao 2 mang tam
    int L[n1];
    int R[n2];
    
    //sao chep data vao mang tam L[] va R[]
    for (int i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];
    //ket hop 2 mang con vao lai mang a[l..r]
    i = 0;
    j = 0;
    k = l;
    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        }
        else{
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        a[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        a[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int a[], int l, int r){
    if(l < r){
        int m = l + (r - l) / 2;

        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }cout << endl;
}
int main(){
    int a[]= { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(a) / sizeof(a[0]);

    mergeSort(a, 0, n - 1);
    cout << "Sorted array is: " << endl;
    printArray(a, n);
    return 0;
}