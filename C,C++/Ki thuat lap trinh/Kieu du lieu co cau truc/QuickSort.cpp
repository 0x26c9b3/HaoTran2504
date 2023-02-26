#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
void Swap(int x,int y)
{
	int tam = x;
	x = y;
	y = tam;
}
void Quick_S(int a[], int left, int right)
{
	int i,j,m;
	m = a[(left+right)/2]; //chon phan tu mid lam goc
	i = left;
	j = right;
	do{
		while(a[i]<m)i++;
		while(a[j]>m)j--;
		if(i<=j){
			Swap(a[i],a[j]);
			i++;
			j--;
		}
	}while(i<j);
	if(left<j)
		QS(a, left, j);
	if(right>i)
		QS(a, i, right);
}
void bubble_s(int a[],int n)
{
	for(int i = 0 ;i < n-1  ; i++)
		for ( int j = n-1 ; j < i;j++)
			swap(a[i],a[j-1]);
}
void InchangeSort(int a[],int n)
{
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if (a[i]>a[j]) Swap(a[i], a[j]);
}
void SelectionSort(int a[], int n)
{
	for(int i = 0; i < n-1; i++)
	{
		int vtmin = i;
		for(int j = i+1; j < n; j++)
		if (a[j] < a[vtmin]) vtmin = j;
	Swap(a[vtmin], a[i]); 
	}
}
void MergeSort(int a[], int n){
int i, j, k, low1, up1, low2, up2, size;
int dstam[MAXLIST];
size = 1;
while (size<n){
low1=0;
k=0;
while(low1+size<n){
low2=low1+size;
up1=low2-1;
up2=(low2+size-1<n)? (low2+size-1):(n-1);
for(i=low1,j=low2;i<=up1 && j<=up2;k++)
if(a[i]<=a[j]) dstam[k]=a[i++];
else dstam[k]=a[j++];
for(;i<=up1;k++) dstam[k]=a[i++];
for(;j<=up2;k++) dstam[k]=a[j++];
low1=up2+1;
}
for(i=low1;k<n;i++) dstam[k++]=a[i];
for(i=0;i<n;i++) a[i]=dstam[i];
size *=2;
}
}
void RadixSort(long a[], int n){
int i, j, d, digit, num;
int h = 10;
long B[10][MAX];
int Len[10]; // kích
for(d = 0; d < MAXDIGIT; d++) { 
for( i = 0; i < 10; i++) 
Len[i] = 0;
for(i = 0; i < n; i++) {
digit = (a[i] % h) / (h / 10);
B[digit][Len[digit]++] = a[i];
 }
num = 0;
for(i = 0; i < 10; i++)
 for(j =0; j < Len[i]; j++)
 a[num++] = B[i][j];
h *= 10;
 }
}
int main()
{
 return 0;
}

