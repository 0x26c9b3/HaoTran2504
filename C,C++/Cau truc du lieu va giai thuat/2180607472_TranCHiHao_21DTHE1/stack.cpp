#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
typedef struct node
{
	int info;
	struct node * next;
}Node;
typedef Node* NODEPTR;
typedef NODEPTR stack;
stack s;
void init(stack &s)
{
	s=NULL;
}
int IsEmpty(stack s)
{
	return (s==NULL);
}
int Push(stack &s,int x)
{
	NODEPTR p= new Node;
	if (p==NULL) return 0;
	p->info=x;
	p->next=s;
	s=p;
	return 1;
}
int Pop(stack &s,int &x)
{
	if (IsEmpty(s)) return 0;
	NODEPTR p = s;
	x=p->info;
	s=s->next;
	delete p;
	return 1;
}
void Convert(int n, stack &s)
{
	int sodu;
	while (n !=0)
	{
		sodu=n%2;
		Push(s,sodu);
		n=n/2;
	}
}
void Output(stack s)
{	int a;
	while (!IsEmpty(s))
	{
		Pop(s,a);
		printf("%d",a);
	}
}
int main()
{
	 stack s;int x;
	 init(s);
	 
	 printf("Nhap vao so o he thap phan: ");
	 scanf("%d",&x);
	 Convert(x,s);
	 Output(s);
 return 0;
}

