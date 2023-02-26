#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100
typedef struct Sinh_Vien
{
	char MSSV[11];
	float dtb;
}sv;
typedef struct node{
	sv info;
	struct node* next;
}Node;
typedef Node* NODEPTR;
sv Nhap1SVien(sv &x)
{
	printf("\nNhan vao ma so sinh vien:");
	fflush(stdin);
	gets(x.MSSV);
	printf("\nNhap vao dtb:");
	scanf("%f",&x.dtb);
	}
void Init(NODEPTR phead)
{
	phead = NULL;
}
int IsEmpty(NODEPTR phead)
{
	return (phead==NULL);	
}
NODEPTR CreateNode(sv x)
{
	NODEPTR p = new Node;
	p->info = x;
	p->next = NULL;
	return p;
}
void InsertFirst(NODEPTR &phead, sv x)
{
	NODEPTR p = CreateNode(x);
	p->next=phead;
	phead=p;
}
void InsertAfter(NODEPTR p, sv x)
{
	NODEPTR q;
	if(p!=NULL)
	{
		q = CreateNode(x);
		q->next = p->next;
		p->next=q;
	}
}
void NhapNhieuSVien(sv x[MAX],int &n)
{
	printf("\nNhap vao so sinh vien: ");
	scanf("%d",&n);
	for (int i = 0 ; i < n ;i++)
	{
		printf("\nNhap vao thong tin sinh vien thu: %d",i+1);
		Nhap1SVien(x[i]);
	}
}
sv Xuat1SVien(sv x)
{
	printf("\nMa s vien: %s",x.MSSV);
	printf("\n %f",x.dtb);
}
void XuatNhieuSVien (sv x[MAX],int n)
{
	for (int i = 0 ;i<n;i++)
	{
		printf("\nThong tin sinh vien thu: %d",i+1 );
		Xuat1SVien(x[i]);
	}
}
void Showlistequal(NODEPTR phead,char x[])
{
	NODEPTR current = phead;
	
	while(current!=NULL)
	{
		if(strcmp(current))
		}	
}
int main()
{ int n; sv x[MAX];NODEPTR phead;
	Init(p);
	CreateNode(x);
	NhapNhieuSVien(x,n);
	XuatNhieuSVien(x,n);	
 return 0;
} 
