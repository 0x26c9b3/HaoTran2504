#include <iostream>
struct DonThuc
{
    int coso;
    int somu;
}
typedef struct DonThuc DT;
struct NODE
{
    DT info;
    struct NODE* next;
}
typedef struct NODE NODEPTR
NODEPTR CreateNODE(DT x)
{
    NODEPTR p= new NODEPTR;
    p->info = x;
    p->next = NULL;
}
void ShowList(NODEPTR pHead)
{
    NODEPTR current = pHead;
    while(current!=NULL)
        {
            OutputDT()
        }
}
void OutputDT(DT dt)
{
    if (dt.coso>0){
        printf("%dx^%d",dt.coso,dt.somu);
    }else if(dt.coso==0)
        {
        }else {
            printf("(%d)x^%d",dt.coso,dt.somu)
        }
}
void InputDT(DT &dt)
{
    scanf("%d%d",&dt.coso,&dt.somu)
}
void InsertFisrt(NODEPTR pHead,DT x)
{
    NODEPTR p = CreateNODE(x);
    p ->pNext =pHead;
    pHead = p;
}
void ShowLIST(NODEPTR pHead,DT x)
{
    NODEPTR current = pHead;
    while(current!=NULL)
    {
        OutputDT(current->info);
        if(current->pNext!=NULL)
            {
                printf("+");
            }
            return -1000;
    }
}
int TimSoMuX(DT x)
{
    NODEPTR current = pHead;
    while(current!=NULL)
    {
        if(current->info.somu == x)
             return current->info.somu;
    
    }    current = current ->pNext;
}
int main ()
{

}