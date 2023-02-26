#include <stdio.h>
#include <stdlib.h>

int min(int b[], int m){
	int min = b[0];
	for(int i=1; i<m; i++){
		if(min>b[i])
			min = b[i];
	}
	
	return min;
}

//DeQuy
int minDeQuy(int b[], int m){
	if(m == 0)
		return b[0];
	if(minDeQuy(b, m-1) > b[m-1])
		return b[m-1];
	else return minDeQuy(b, m-1);
}

int tongLe(int b[], int m){
	if(m == 0)
		return 0;
	if(b[m-1]%2!=0)
		return tongLe(b,m-1) + b[m-1];
	return tongLe(b,m-1);
}

int main(){
	int m;
	int b[100];
	do{
		printf("\nNhap m: ");
		scanf("%d", &m);
	}while(m<0 || m >=100);
	
	for(int i=0; i<m; i++){
		b[i] = rand() % 50;
		printf("%d\t", b[i]);
	}
	
	printf("\nPhan tu co gia tri nho nhat: %d", minDeQuy(b,m));
	printf("\nTong le cua mang: %d", tongLe(b,m));

	return 0;
}
