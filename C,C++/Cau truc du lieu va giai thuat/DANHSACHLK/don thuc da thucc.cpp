#include <iostream>
using namespace std;
struct DonThuc{
    int coso;
    int somu;
}
typedef struct DonThuc DT;
struct NODE{
    DT info;
    struct NODE* pNext;
}
typedef struct NODE *NODEPTR
NODEPTR CreateNODE(DT x)
{
    NODEPTR p = new NODEPTR;
    p->info = x;
    p->pNext = NULL;
}
void Input (DT &dt)
{
    scanf("%d%d",&dt.info,&dt.somu);
}
void Output(DT dt)
{
    if(dt.coso>0)
        printf("%dx^%d",dt.coso,dt.somu);
            else if(dt.coso == 0)
                {

                }   
                    else if(dt.coso<0)
                        {
                                printf("(%d)x^%d");
                        }
}
void InsertFisrt(DT dt)
{
    
}
int main ()
{
    return 0;
}