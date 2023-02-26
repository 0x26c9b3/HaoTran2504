#include<stdio.h>
typedef struct DonThuc{
	int CoSo;
	int SoMu;
	
}DT;
typedef struct Node{
	DT Info;
	struct Node* Next;
}NODE;
typedef struct Node* NODEPTR;


void Nhap_1_DonThuc(DT &dt){
	printf("Nhap vao Co So,So mu");
	
	scanf("%d%d",&dt.CoSo,&dt.SoMu);
}
void XuatNhieuDonThuc(DT dt){
	if(dt.CoSo>0)
	{
		printf("%dx^%d",dt.CoSo,dt.SoMu);
	}
	else if(dt.CoSo==0)
		{
		}else
			{
				printf("(%d)x^%d",dt.CoSo,dt.SoMu);
			}
}
NODEPTR Tao_NODE(DT x){
	NODEPTR p = new NODE;
//	if(p==NULL)
//	return -1000000;
	p->Info=x;
	p->Next=NULL;
	return p;
}
void Them_Dau(NODEPTR &pHead,DT x)
{
	NODEPTR p = Tao_NODE(x);
	p->Next = pHead;
	pHead = p;
}
void Show(NODEPTR pHead){
	NODEPTR current =pHead;
	while(current!=NULL)
	{
		XuatNhieuDonThuc(current->Info);
		if(current->Info!=NULL)
		printf("+");current=current->Next;
	}
}
int TimSoMuX(NODEPTR pHead, DT x)
{
	NODEPTR current = pHead;
	while(current!=NULL)
	{
		if(current->Info.SoMu==x)
		{
			return current->Info.CoSo
		}current = current->Next;//Neu o sau current lai. tim` duoc 1 so mu = x;
	}return -1000;
	
}
void Sort(NODEPTR pHead,DT x)
{
	for(NODEPTR i = pHead;i->Next!=NULL;i=i->Next)
	{	
		for(NODEPTR j = i->Next; j->Next=NULL;j=j->Next)
		{
			if(i->Info.SoMu>j->Info.SoMu)
			NODEPTR temp= i->Info;
			i->Info=j->Info;
			j->Info=temp;
		}
	}
}
int main(){
	NODEPTR pHead;
	pHead = NULL;
	for(int i=0;i<4;i++){
		DT newDT;
		scanf("%d",&newDT.CoSo);
		newDT.SoMu = i;
		InsertFirst(pHead,newDT);
	}
	ShowList(pHead);
	return 0;
}


