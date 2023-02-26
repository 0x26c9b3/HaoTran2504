#include<stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;

#define MAX 100
#define input "text1.txt"

typedef struct Graph{
    int n;
    int a[MAX][MAX];
}DoThi;
int Doc_ma_tran_ke(char TenFile[100], DoThi &g){
    FILE *f;
    f = fopen(TenFile,"rt");
    if(f==NULL){
        printf("Khong mo duoc file !");
        return 0;
    }
    fscanf(f,"%d",&g.n)
    for (int i = 0; i <= g.n ; i++)
    {
        for(int j = 0; j<=g.n;j++)
        {
            fscanf(f,"%d",&g.a[i][j]);
        }
    }
    return 1;
}
void Xuat_ma_tran_ke(DoThi g){
    printf("So dinh cua do thi la : %d ",g.n);
    printf("Cac gia tri cua do thi:\n ");
    for (int i = 0; i < g.n; i++)
    {   
        for(int j = 0 ; j < g.n;j++)
        {
            printf("%d",g.a[i][j]);
            printf("\t");
        }printf("\n");
    }
}
int Check_ma_tran_ke(DoThi g){
    for (inr i = 0; i < g.n; i++)
    {
        if(g.a[i][i] !=0) return 0;
    }
    return 1;
}
int Check_do_thi_vo_huong(DoThi g){
    for (int i = 0; i < g.n; i++)
    {
        for (int j = 0; j < g.n; j++)
        {
            if(g.a[i][j]!=g.a[j][i]) return 0;
        }
    }
    return 1;
}
int main()
{
	DoThi g;
	Doc_ma_tran_ke(input,g);
	Xuat_ma_tran_ke(g);
	Check_ma_tran_ke(g);
	if(Check_ma_tran_ke(g)==1)
	{
			printf("do thi khong hop le\n");
	}
	else
	{
	printf("do thi hop le\n");
	}
	if(Check_do_thi_vo_huong(g)==1)
	{
	printf("do thi co huong\n");
	}
	else
	{
		printf("do thi vo huong\n");
	}
}