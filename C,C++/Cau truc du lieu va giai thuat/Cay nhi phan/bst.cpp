#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef int DataType;

typedef struct Node {
	DataType info;
	struct Node *LeftNode;
	struct Node *RightNode;
} NODE;

typedef NODE *NODEPTR;

typedef NODEPTR Root;

void Init(Root &root) {
	root = NULL;
}

NODEPTR CreateNode(DataType X) {
	NODEPTR newNode = new NODE;
	newNode->info = X;
	newNode->LeftNode = NULL;
	newNode->RightNode = NULL;
	return newNode;
}
int IsEmpty(Root root)
{	
	return root->info = NULL;
}
void InsertToBST(Root &root, DataType X) {
	if (root == NULL) {
		root = CreateNode(X);
	} else {
		if (root->info == X) {
			return;
		} else {
			if (root->info > X) {
				InsertToBST(root->LeftNode, X);
			} else {
				InsertToBST(root->RightNode, X);
			}
		}
	}
}
int Remove(Root &root,DataType X)
{
	if(root==NULL)
	return false;
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

void ClearTree(Root &root){

}

NODEPTR Searh(Root &root,DataType X){
	if(root->info==X){
		return root;
	}
	else{
		if(root->LeftNode==NULL&&root->RightNode==NULL){
			return NULL;
		}
		if(root->info>X){
			return Searh(root->LeftNode, X);
		}
		else{
			return Searh(root->RightNode, X);
		}
	}
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

int CheckBST(Root root){
	if(root==NULL){
		return 1;
	}
	if(root->LeftNode!=NULL&&root->LeftNode->info>root->info){
		return 0;
	}
	if(root->RightNode!=NULL&&root->RightNode->info<root->info){
		return 0;
	}
	return CheckBST(root->LeftNode)&&CheckBST(root->RightNode);

}

int CHeckParent(Root root, DataType X){
	if(root->info ==X){
		return  -1000;
	}
	if(root->info<X){
		if(root->RightNode->info==X){
			return root->info;
		}else{
			return CHeckParent(root->RightNode,X);
		}
	}else{
		if(root->info>X)
		{
		if(root->LeftNode!=NULL)
			{
			if(root->LeftNode->info==X){
						return root->info;
					}else{
						return CHeckParent(root->LeftNode,X);
					}
			}
		else return -1;
		}

	}
}

int DemNodeLa(Root root){
	if(root == NULL){
		return 0;
	}
	if(root->LeftNode==NULL&&root->RightNode==NULL){
		return 1;
	}
	return DemNodeLa(root->RightNode)+DemNodeLa(root->LeftNode);
}

int DemTongNut(Root root){
	if(root == NULL){
		return 0;
	}
	return 1+DemTongNut(root->RightNode)+DemTongNut(root->LeftNode);
}
int DemNutTrong(Root root){
	return DemTongNut(root)-DemNodeLa(root);
}

int XacDinhChieuCao(Root root){
	if (root==NULL) {
		return 0;
	}
	int LevelLeft = XacDinhChieuCao(root->LeftNode);
	int LevelRight = XacDinhChieuCao(root->RightNode);
	if(LevelLeft>LevelRight){
		return 1+LevelLeft;
	}
	return 1 + LevelRight;
}

int CheckCompletedBST(Root root){
	if(pow(2, XacDinhChieuCao(root))-1==DemTongNut(root)){
		return 1;
	}
	return 0;
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

int TOngNut(Root root){
	if(root == NULL){
		return 0;
	}
	return root->info+DemTongNut(root->RightNode)+DemTongNut(root->LeftNode);
}

int main() {

	NODEPTR root;

	Init(root);
	InsertToBST(root, 8);
	InsertToBST(root, 3);
	InsertToBST(root, 5);
	InsertToBST(root, 2);

	InsertToBST(root, 20);
	InsertToBST(root, 11);

	InsertToBST(root, 30);
	InsertToBST(root, 9);
	InsertToBST(root, 18);
	InsertToBST(root, 4);
	//LNR(root);
	int x;
	printf("\nNhap vao node muon tim cha: ");
	scanf("%d",&x);
	CHeckParent(root,x);
	//printf("\n%d",DemNodeLa(root));
	//printf("\n%d",DemTongNut(root));
	//printf("\n%d",CheckCompletedBST(root));
	NODEPTR Min = MinNODE(root);

	if(Min==NULL){
		printf("cay rong");
	}else{
		printf("\n%d",Min->info);
	}

//	NODEPTR Result = Searh(root, 4);
//	if(Result==NULL){
//		printf("\nkhong co gia tri nnay");
//	}
//	else{
//		printf("\n%d",Result->info);
//	}

	return 0;
}


