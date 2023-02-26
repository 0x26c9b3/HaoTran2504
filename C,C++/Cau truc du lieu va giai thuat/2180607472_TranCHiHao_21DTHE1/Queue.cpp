#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

using namespace std;
typedef struct benhnhan
{
	int stt;
	char hoten[50];
	int tuoi;
}BenhNhan;
typedef struct node
{
	BenhNhan info;
	struct node * next;
}Node;
typedef struct queue
{
	Node* pHead;
	Node* pTail;
}Queue;
typedef Node* NODEPTR;
typedef NODEPTR queue;
void init(queue &q)
{
	q=NULL;
}
int IsEmpty(queue q)
{
	return (q==NULL);
}

void InsertFirst(NODEPTR &pHead, BenhNhan X){
	NODEPTR newNode = CreateNode(X);
	newNode->next = pHead;
	pHead = newNode;
}

void DeleteFirst(NODEPTR &pHead){
	NODEPTR first = pHead;
	pHead = pHead->next;
	delete first;
}
int main()
{
 return 0;
}

