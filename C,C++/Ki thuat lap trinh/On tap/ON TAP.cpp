#include<bits/stdc++.h>
using namespace std;
//=================CTDL============//
typedef struct DonThuc
{
    int coso;
    int somu;
}DT;

typedef struct Node
{
    DT info;
    struct Node *pNext;
}NodePtr;
//==================================//
void CreateNode(NodePtr p, int x)
{
    NodePtr p = new NodePtr;
    p.info = x;
    p.pNext = nullptr;
    return p;
}
void Insert(Node p,NodePtr x)
{
    NodePtr pHead = CreateNode(x);
    pHead == x;
    pHead.pNext == nullptr;

}
