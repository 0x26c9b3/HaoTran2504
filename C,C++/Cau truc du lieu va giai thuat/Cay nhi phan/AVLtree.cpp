#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100


typedef struct Node {
	int info;
	struct Node *LeftNode;
	struct Node *RightNode;
	int height;
} NODE;
typedef NODE *NODEPTR;
typedef NODEPTR Root;

//void Init(Root &root);
//NODEPTR CreateNode(DataType X);
//int IsEmpty(Root root);
//void InsertToBST(Root &root, DataType X);
//NODEPTR Remove(Root root,DataType X);
int LayChieuCao(Root root);
//NODEPTR Xoa1NODE(Root root,DataType X);
//void Free(NODEPTR root);
//NODEPTR Searh(Root &root,DataType X);
void LNR(Root root);
void RNL(Root root);
void NLR(Root root);
//int CheckBST(Root root);
//int CHeckParent(Root root, DataType X);
//int DemNodeLa(Root root);
//int DemTongNut(Root root);
//int XacDinhChieuCao(Root root);
//int Bf(Root root);
int Max(int a,int b);
//NODEPTR XoayTrai(NODEPTR p);
//NODEPTR XoayPhai(Root p);
NODEPTR CanBangCay(Root p);
//int CheckCompletedBST(Root root);
NODEPTR MinNODE(Root root);
//int TOngNut(Root root);
//NODEPTR TaoCayAVL_Arr(int a[MAX],int n);
void Init(Root &root) {
	root = NULL;
}

NODEPTR CreateNode(int X) {
	NODEPTR p = new NODE;
	if(p==NULL)
	return 0;//full bo nho!
	p->info = X;
	p->LeftNode = NULL;
	p->RightNode = NULL;
	p->height = 1;
	return p;
}
int IsEmpty(Root root)
{	
	return root->info = NULL;
}

NODEPTR InsertToBST(Root root,int X) {
	if (root == NULL)
		root = CreateNode(X);
		else if(root->info == X) 
			return NULL;
			else if(root->info > X)
				InsertToBST(root->LeftNode, X);
				else if(root->info < X) 
					InsertToBST(root->RightNode, X);
	root->height = 1+Max(LayChieuCao(root->LeftNode),LayChieuCao(root->RightNode));
		return CanBangCay(root);
	
}

NODEPTR Remove(Root root,int X)
{
	if(root==NULL)
	return 0;
	if(root->info>X)
		return Remove(root->LeftNode,X);
	if(root->info<X)
		return Remove(root->RightNode,X);
	Root p,f,rp;
	p = root;
	if ( root->LeftNode==NULL)
	root =root->RightNode;
	else if( root->RightNode==NULL)
	root = root->LeftNode;
	else{
		f= p;
		rp = p->RightNode;
		while(rp->LeftNode != NULL){
			f= rp;// luu cha cua reprt
			rp = rp->LeftNode;
			}
		p->info = rp->info;
		if(f== p )
			f->RightNode = rp->RightNode;
		else if(rp->LeftNode != NULL)
			f->RightNode = rp->LeftNode	;
		else f->LeftNode = rp->RightNode;
		p= rp;			
		}
}
NODEPTR Xoa1NODE(Root root,int X)
{
	if(root==NULL)
	return 0;
	if(root->info>X)
		return Remove(root->LeftNode,X);
	if(root->info<X)
		return Remove(root->RightNode,X);
	else{
		if(root->LeftNode==NULL)
		{
			NODEPTR temp = root->RightNode;
			delete root;
			return temp;
		}
		else if(root->RightNode==NULL)
		{
			NODEPTR temp = root->LeftNode;
			delete root;
			return temp;
		}
		NODEPTR temp = MinNODE(root->RightNode);
	root->info = temp->info;
	root->RightNode=Remove(root->RightNode,temp->info);	
	}
	if (root==NULL)
		return root;
	root->height= 1+Max(LayChieuCao(root->LeftNode),LayChieuCao(root->RightNode));
	return CanBangCay(root);
}
void LNR(Root root) {
	if (root != NULL) {
		LNR(root->LeftNode);
		printf("%d\t", root->info);
		LNR(root->RightNode);
	}

}

void RNL(Root root) {
	if (root != NULL) {
		RNL(root->RightNode);
		printf("%d\t", root->info);
		RNL(root->LeftNode);
	}

}
void NLR(Root root)
{
		if (root != NULL) {
					printf("%d\t", root->info);
							NLR(root->LeftNode);
		NLR(root->RightNode);


	}

}
//void Free(NODEPTR root )
//{
//    if ( root == NULL )
//        return;
//    Free(root->LeftNode );
//    Free(root->RightNode );
//    Free(root);
//}
int LayChieuCao(Root root)
{
	if(root == NULL)
		return 0;
	return root->height;
}
int Bf(Root root)
{
	if(root == NULL)
	return 0;
	return LayChieuCao(root->LeftNode)-LayChieuCao(root->RightNode);
}
int Max(int a,int b)
{
	return a>b ? a:b;
}
NODEPTR XoayTrai(NODEPTR p)
{
	//TH1: ko xoay duoc do p == NULL
	if(p==NULL)
	return NULL;
	//TH2:ko co cay con phai
	if(p->RightNode==NULL)
	return NULL;
	//TH3:Xoay trai
	NODEPTR q = p->RightNode; 
	p->RightNode = q->LeftNode;// chuyen cay con trai cua q thanh cay con phai cua p
	q->LeftNode = p;//luc nay q thanh p (node)
	p->height= 1+Max(LayChieuCao(p->LeftNode),LayChieuCao(p->RightNode));//cap nhat chieu cao cua nut p
	q->height= 1+Max(LayChieuCao(q->LeftNode),LayChieuCao(q->RightNode));//cap nhat chieu cao cua q
	return q;
	
}
NODEPTR XoayPhai(Root p)
{
	//TH1: ko xoay duoc do p == NULL
	if(p==NULL)
	return NULL;
	//TH2:ko co cay con phai
	if(p->LeftNode==NULL)
	return NULL;
	//TH3:Xoay trai
	NODEPTR q = p->LeftNode; 
	q->RightNode = p->LeftNode;// chuyen cay con trai cua q thanh cay con phai cua p
	q->RightNode = p;//luc nay q thanh p (node)
	p->height= 1+Max(LayChieuCao(p->LeftNode),LayChieuCao(p->RightNode));//cap nhat chieu cao cua nut p
	q->height= 1+Max(LayChieuCao(q->LeftNode),LayChieuCao(q->RightNode));//cap nhat chieu cao cua q
	return q;
	
}
NODEPTR CanBangCay(Root p)
{
	if(Bf(p)<-1)
	{
		if(Bf(p)>0)
		{
			p->RightNode= XoayPhai(p->RightNode);
		}
		p= XoayTrai(p);
	}
	else if(Bf(p)>1)
		{
			if (Bf(p->LeftNode)<0)
			{
				p->LeftNode = XoayTrai(p->LeftNode);
			}
			p=XoayPhai(p);
		}
	return p;
}

NODEPTR MinNODE(Root root){
	if(root == NULL){
		return NULL;
	}
	NODEPTR current = root;
	while(current->LeftNode!= NULL)
	{
		current = current->LeftNode;
	}
	return current;
}

NODEPTR TaoCayAVL_Arr(int a[MAX],int n)
{
	NODEPTR root = NULL;
	for(int i =0; i < n; i++)
	{
		root = InsertToBST(root,a[i]);
	}
	return root;
}

int main() {

	NODEPTR root;int a[MAX];int n;
//	printf("\nNhap vao kich thuoc mang");
//	scanf("%d",&n);

	Init(root);
//	TaoCayAVL_Arr(a,n);
	root =InsertToBST(root, 8);
	root =InsertToBST(root, 3);
	root =	InsertToBST(root, 5);
	root =	InsertToBST(root, 2);

	root =	InsertToBST(root, 20);
	root =	InsertToBST(root, 11);

	root =	InsertToBST(root, 30);
	root =	InsertToBST(root, 9);
	root =	InsertToBST(root, 18);
	root =	InsertToBST(root, 4);
	LNR(root);
//	int x;
//	printf("\nNhap vao node muon tim cha: ");
//	scanf("%d",&x);
//	CHeckParent(root,x);
//	printf("\n%d",DemNodeLa(root));
//	printf("\n%d",DemTongNut(root));
//	printf("\n%d",CheckCompletedBST(root));
//	NODEPTR Min = MinNODE(root);
//
//	if(Min==NULL){
//		printf("cay rong");
//	}else{
//		printf("\n%d",Min->info);
//	}
//
//	NODEPTR Result = Searh(root, 4);
//	if(Result==NULL){
//		printf("\nkhong co gia tri nnay");
//	}
//	else{
//		printf("\n%d",Result->info);
//	}

	return 0;
}


