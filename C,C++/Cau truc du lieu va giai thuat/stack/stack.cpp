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
//}#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct BenhNhan
//{
//    int stt;
//    char ten[256];
//    int age;
//};
//typedef struct BenhNhan BN;
//struct node{
//    BN data;
//    node *next;
//};
//typedef struct node NODE;
//struct queue{
//    NODE *front;
//    NODE *rear;
//};
//typedef struct queue QUEUE;
//void Init(QUEUE &q){
//    q.front = NULL;
//    q.rear = NULL;
//}
//NODE* CreateNode (MT x) {
//    NODE *p;
//    p = new NODE;
//    if (p==NULL) {
//        printf ("KHONG DU BO NHO!");
//        return NULL;
//    }
//    p->data=x;
//    p->next=NULL;
//    return p;
//}
//int IsEmpty(QUEUE q){
//    if (q.front == NULL){
//        return 1;
//    }
//    return 0;
//}
//void Insert (QUEUE &q, NODE *NewNode){
//    if(q.front == NULL){
//        q.front = NewNode;
//        q.rear = NewNode;
//    }
//    else{
//        q.rear->next = NewNode;
//        q.rear = NewNode;
//    }
//}
//BN Remove(QUEUE &q,BN pv){
//    BN x;
//    NODE *p = NULL;
//    if (!IsEmpty(q)){
//        p = q.front;
//        x = p->data;
//        q.front = q.front->next;
//        delete p;
//        if (q.front==NULL){
//            q.rear = NULL;
//        }
//    }
//    return x;
//}
//void Input(QUEUE &q, int n, BN x){
//    while({
//     
//        printf("NHAP TEN: ");
//        fflush(stdin);
//        gets(x.ten);
//        printf("NHAP TUOI:");
//        scanf("%d",&x.age);
//    }
//}
//void Output(QUEUE q){
//    for(NODE *p = q.front; p!= NULL; p=p->next){
//        printf("%s\t %s\t %d/%d/%d %f\n", p->data.ID, p->data.ten,p->data.ngay_xuat.ngay,p->data.ngay_xuat.thang, p->data.ngay_xuat.nam, p->data.gia_xuat);
//    }
//}
//int main(){
//    QUEUE q;
//    Init(q);
//    int n;
//    printf("NHAP SO LUONG MAY TINH: ");
//    scanf("%d", &n);
//    Input(q,n);
//    printf("THONG TIN MAY TINH TRONG HANG DOI\n");
//    Output(q); 
//    printf("\nTHONG TIN MAY TINH CO MA 007\n");
//    Ma001(q);
//    printf("\nTHONG TIN MAY TINH DA BOC XEP\n");
//    MayTinhBocXep(q);
//    printf("\nTHONG TIN MAY TINH HANG DOI SAU KHI BOC XEP (BANG TRUYEN RONG)\n");
//    Output(q);
//}
