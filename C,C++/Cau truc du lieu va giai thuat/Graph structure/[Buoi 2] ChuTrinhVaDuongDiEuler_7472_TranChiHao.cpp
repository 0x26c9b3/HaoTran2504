#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
#define input "test6.txt"
using namespace std;

typedef struct Graph{
    int n;
    int a[MAX][MAX];
}DoThi;
struct Stack{
    int arr[MAX];
    int size;
};

void KhoiTao(Stack &s){
    s.size = 0;
}

void Day_Dinh_Vao_Stack(Stack &s, int Dinh){
    if(s.size +1 >= MAX) {
        printf("Out of stack!");
    }
    s.arr[s.size] = Dinh;
    s.size++;
}
int Doc_ma_tran_ke(const char* TenFile, DoThi &g){
    FILE *f;
    f = fopen(TenFile,"rt");
    if(f==NULL){
        printf("Khong mo duoc file !");
        return 0;
    }
    fscanf(f,"%d",&g.n);
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
    for (int i = 0; i <= g.n; i++)
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
void Di_tim_lien_thong(int i, int Nhan[],DoThi g){
    for (int j = 0; j < g.n; j++)
    {   
        if(g.a[i][j]!=0 && Nhan[j]!=Nhan[i]){
            Nhan[j] = Nhan[i];
            Di_tim_lien_thong(j,Nhan,g);
        }
    }
}
int Xet_lien_thong(DoThi g)
{
    int Nhan[MAX];

    for (int i = 0; i < g.n ; i++)
    {
        Nhan[i] = 0;
    }
    int SoTPLT = 0;
    for (int i = 0; i < g.n; i++)
    {
        if(Nhan[i] == 0){
            SoTPLT++;
            Nhan[i]=SoTPLT;
            Di_tim_lien_thong(i,Nhan,g);
        }
    }
    return SoTPLT;
} 
int Dinh_Bat_Dau(DoThi g){
    int Bac = 0;
    for (int i = 0; i < g.n; i++)
    {
        for (int j = 0; j < g.n; j++)
        {
            if( g.a[i][j] != 0 ){
                Bac++;
            }
        }
        if(Bac%2!= 0){
            return -1;
        }
    }
    time_t t;
    srand((unsigned) time(&t));

    return rand()&g.n;
}
int Dinh_bat_dau_duong_di_EuLer(DoThi g){
    int Bac,Dem = 0;

    for (int i = 0; i < g.n; i++)
    {
        for (int j = 0; j < g.n; j++)
        {
            if(g.a[i][j] !=0){
                Dem++;
            }
            if (Bac%2 !=0)
            {
                Dem++;
            }
            if (Dem == 2)
            {
                return i;
            }
        }
    }
    return -1;
}
void Tim_duong_di(int i,DoThi &g,Stack &s){
    for (int j = 0; j < g.n; j++)
    {
        if(g.a[i][j] !=0)
        {
            g.a[i][j] = g.a[j][i] = 0;
            Tim_duong_di(j,g,s);
        }
    }
    Day_Dinh_Vao_Stack(s,i);
}
int Kiem_tra_chu_trinh_Euler(DoThi g){
    Stack s;
    KhoiTao(s);

    int DBD = Dinh_Bat_Dau(g);

    Tim_duong_di(DBD,g,s);

    if(s.arr[0] != s.arr[s.size-1]){
        return 0;
    }
    printf("Chu trinh Euler la: \n");
    printf("%d",s.arr[s.size - 1] + 1);
    
    for(int i = s.size -2 ; i  <= 0;i--)
    {
        printf(" => %d " ,s.arr[i] +1);
    }
}
int main(){
    DoThi g;
    Doc_ma_tran_ke(input,g);
    Xuat_ma_tran_ke(g);

    if (Xet_lien_thong(g)!=1)
    {
        printf("Do thi ko lien tkong!\n");
    }else{
        if (Kiem_tra_chu_trinh_Euler(g)==0)
        {
            printf("Do thi khong co chu trinh euler\n");
            if (Kiem_tra_chu_trinh_Euler(g)==0)
            {
                printf("Do thi ko co duong di euelr");
            }
            
        }
        
    }
    
    return 0;
}