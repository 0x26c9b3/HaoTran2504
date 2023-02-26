#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
typedef struct Node {
	int info;
	struct Node* LeftNode;
	struct Node* RightNode;
}NODE;
typedef NODE* NODEPTR;
typedef NODEPTR Root;
void Init(Root &root)
{
	root = NULL;
}
int IsEmpty(Root root)
{	
	return root->info = NULL;
}
int CheckRightBST(Root root)
{
    if (root == NULL)
        return 1;
    if (root->LeftNode != NULL && root->LeftNode->info > root->info)
        return 0;

    if (root->RightNode != NULL && root->RightNode->info < root->info)
        return 0;
    if (!CheckRightBST(root->LeftNode) && !CheckRightBST(root->RightNode))
        return 0;
 
    return 1;
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
		if(root->info>X){
			if(root->LeftNode->info==X){
						return root->info;
					}else{
						return CHeckParent(root->LeftNode,X);
					}
		}

	}
}
int DemNodeLa(Root root)
{
  if(root == NULL)       
    return 0;
  if(root->LeftNode == NULL && root->RightNode==NULL)      
    return 1;            
  else 
    return DemNodeLa(root->LeftNode)+DemNodeLa(root->RightNode);      
}
int maxValue(Root root)
{  
  
    Root max = root;
    while (max->RightNode != NULL)
        max = max->RightNode;
     
    return (max->info);
}

int DemTongNodeLa(Root root,int X)
{
	return 1+DemNodeLa(X)+DemTongNodeLa(root,X);
}
NODEPTR CreateNode(int X){
	NODEPTR p = new NODE;
	p->info;
	p->LeftNode=NULL;
	p->RightNode=NULL;
	return p;
}
void NLR(Root root)
{	
	if(root!=NULL)
	{	printf("%d\t"root->info);
		NLR(root->LeftNode);
		NLR(root->RightNode);
	}
	
}
void LNR(Root root)
{
	if(root!=NULL)
	{
		LNR(root->LeftNode);
		printf("%d\t"root->info);
		LNR(root->RightNode)
	}
}
void LRN(Root root){
	if(root!=NULL)
	{
		LRN(root->LeftNode);
		LRN(root->RightNode);
		printf("%d\t"root->info);
	}
}
void InsertToBST(Root &root,int X)
{
	if(root=NULL)
		root = CreateNode(X);
	else
		if(X==root->info)
			return;
		if(X<root->info)
			InsertToBST(root->LeftNode,X);
		else
			InsertToBST(root->RightNode,X);
	
}

int main()
{NODEPTR root;
int X;
CreateNode(X);
Init(root);
InsertToBST(root,9);
InsertToBST(root,12);
InsertToBST(root,15);
InsertToBST(root,20);
InsertToBST(root,30);
InsertToBST(root,8);
InsertToBST(root,7);
InsertToBST(root,5);
InsertToBST(root,37);
CheckRightBST
printf("%d",DemNodeLa(root));

 return 0;
}

