#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int n = 0; // bien toan cuc chua sl phan tu mang
struct node
{
	int info;
	struct node *next;
};
typedef struct node NODE;
struct list
{
	NODE *pHEAD;
	NODE *pTAIL;
};
typedef struct list LIST;
void KhoiTaoList(LIST &l)
{
	l.pHEAD=NULL;
	l.pTAIL=NULL;
}
NODE *KhoiTaoNode(int X)
{
	NODE *p = new NODE;
	if(p==NULL)
	{
		printf("\nKo du bo nho cap phat!");
		return NULL;
	}
	p->info=X;
	p->next=NULL;
	return p;
}
void ThemVaoDau(LIST &l,NODE *p)
{
	if(l.pHEAD==NULL)
	{
		l.pHEAD=l.pTAIL=p;
	}
	else
	{
		p->next=l.pHEAD;
		l.pHEAD=p;
	}
}
void ThemVaoCuoi(LIST &l,NODE *p)
{
	if(l.pHEAD==NULL)
	{
		l.pHEAD=l.pTAIL=p;
	}
	else
	{

		l.pTAIL->next = p;
		l.pTAIL=p;
	}
}
void XuatDanhSach(LIST l)
{
	printf("\n\t\t*** DANH SACH LIEN KET DON ***\n");
	for(NODE *k = l.pHEAD;k!=NULL;k = k->next)
	{
		printf("\t%d",k->info);
	}
}
void  ThemNode_p_VaoSauNode_q(LIST &l,NODE *p)
{
	int x;
	printf("\nNhap gia tri node q:");
	scanf("%d",&x);
	NODE *q =KhoiTaoNode(x);
	if(q->info==l.pHEAD->info && l.pHEAD->next == NULL)
	{
		ThemVaoCuoi(l,p);
	}
	else
	{
		for (NODE *k =l.pHEAD;k!= NULL;k= k->next)
		{
			if(q->info == k->info)
				{
					NODE *h=KhoiTaoNode(p->info);
					NODE *g=k->next;
					h->next=g;
					k->next=h;
				}
		}
	}
}
void  ThemNode_p_VaoTruocNode_q(LIST &l,NODE *p)
{
	int x;
	printf("\nNhap gia tri node q:");
	scanf("%d",x);
	NODE *q =KhoiTaoNode(x);
	if(q->info==l.pHEAD->info && l.pHEAD->next == NULL)
	{
		ThemVaoDau(l,p);
	}
	else
	{
		NODE *g = new NODE;
		for (NODE *k=l.pHEAD;k!=NULL;k=k->next)
		{
			if(q->info=k->info)
			{
				NODE *h = KhoiTaoNode(p->info);
				h->next= k;
				g->next=h;
			}g=k;
		}
	}
}
void ThemNode_p_VaoViTri(LIST &l,NODE *p,int vt)
{

	if(l.pHEAD==NULL || vt == 1)
	{
		ThemVaoDau(l,p);
	}
	else if (vt == n+1)
	{
		ThemVaoCuoi(l,p);
	}
	else
	{
		int dem=0;
		NODE *g = new NODE;
		for (NODE *k=l.pHEAD;k!=NULL;k= k->next)
		{
			dem++;
			if(dem == vt)
			{
				NODE *h = KhoiTaoNode(p->info);
				h->next= k;
				g->next=h;
				break;
			}g=k;
		}
	}
}
void XoaDau(LIST &l)
{
	if(l.pHEAD==NULL)
	{
		return;
	}
	NODE *p = l.pHEAD;
	l.pHEAD= l.pHEAD->next;
	delete p;
}
void XoaCuoi(LIST &l)
{
	if(l.pHEAD==NULL)
	{
		return;
	}
	for (NODE *k = l.pHEAD; k!=NULL;k=k->next)
	{
		if(k->next==l.pTAIL)
		{	delete l.pTAIL;
			k->next = NULL;
			l.pTAIL=k;
			return;
		}
	}
}
void XoaSau(LIST &l,NODE *q)
{
	if(l.pHEAD==NULL)
	{
		printf("\n Ko co phan tu ma ban can xoa!");
		return;
	}
	for(NODE *k = l.pHEAD; k!=NULL;k=k->next)
	{
		if(k->info== q->info)
		{
			NODE *g = k->next;
			k->next = g->next;
			delete g;
			return;
		}
	}
}
void XoaBatKy(LIST &l,int x)
{
	if(l.pHEAD==NULL)
	{
		printf("\n Ko co phan tu ma ban can xoa!");
		return;
	}
		if(l.pHEAD->info==x)
		{
			XoaDau(l);
			return;
		}
		if(l.pTAIL->info==x)
		{
			XoaCuoi(l);
			return;
		}
		NODE *g = new NODE;
	for(NODE *k= l.pHEAD;k!=NULL;k=k->next)
	{
		if(k->info == x);
		{
			g->next = k->next;
			delete k;
			return;
		}g=k;
	}
}
void GiaiPhong(LIST &l)
{
	NODE *k = NULL;
	while(l.pHEAD!=NULL)
	{
		k=l.pHEAD;
		l.pHEAD = l.pHEAD->next;
		delete k;
	}
}

//
//void Menu(LIST &l)
//{		system("cls");
//		printf("\n\n\t\t==================MENU===================");
//		printf("\n\t1. Them node vao danh sach");
//		printf("\n\t2. Xuat danh sach lien ket don");
//		printf("\n\t3. Them node p vao sau node q trong danh sach:");
//		printf("\n\t4. Them node p vao truoc node q trong danh sach");
//		printf("\n\t5. Them node p vao vi tri bat ki trong danh sach");
//		printf("\n\t6. Xoa node dau ");
//		printf("\n\t7. Xoa node cuoi ");
//		printf("\n\t0. Thoat");
//		printf("\n\n\t\t===================END===================");
//		int luachon;
//		printf("\n LUA CHON CUA BAN:");
//		scanf("%d",&luachon);
//			if (luachon<0||luachon>7)
//		{
//			printf("\n Lua chon ko hop le!");
//			system("pause");
//		}
//do	{
//	switch(luachon)
//	{
//	case 1:
//		{
//			n++;
//			int x;
//			printf("\n Nhap gia tri so nguyen:");
//			scanf("%d",&x);
//			NODE *p = KhoiTaoNode(x);
//			ThemVaoCuoi(l,p);
//			break;
//		}
//	case 2:
//		{
//			XuatDanhSach(l);
//			system("pause");
//			break;
//		}
//	case 3:
//		{
//		int x;
//		printf("\n Nhap vai gia tri p can them vao truoc: ");
//		scanf("%d",&x);
//		NODE *p = KhoiTaoNode(x);
//		ThemNode_p_VaoSauNode_q(l,p);
//		break;
//		}
//	case 4:
//		{
//		int x;
//		printf("\n Nhap vao gia tri p can them vao sau");
//		scanf("%d",&x);
//		NODE *p = KhoiTaoNode(x);
//		ThemNode_p_VaoTruocNode_q(l,p);
//		break;
//		}
//	case 5:
//		{
//
//		int x;
//		printf("\nNhap gia tri node p");
//		scanf("%d",&x);
//
//		NODE *p = KhoiTaoNode(x);
//		int vt;
//		do
//			{
//				printf("\nNhap vi tri can tim");
//				scanf("%d",&vt);
//				if(vt<1||vt >n+1)
//				{
//					printf("Vi tri can them phai nam trong doan [1..%d]",n+1);
//					system("pause");
//				}
//			}while(vt<1||vt>n+1);
//			ThemNode_p_VaoViTri(l,p,vt);
//			n++;
//			break;
//		}
//		case 6:
//		{
//			XoaDau(l);
//			break;
//		}
//		case 7:
//		{
//			XoaCuoi(l);
//			break;
//		}
//		default:
//		{
//			break;
//		}
//	}
//	}while(luachon!=0);
//}
void Menu(LIST &l)
{			int luachon;

	while(true)
	{
		system("cls");
		printf("\n\n\t\t==================MENU===================");
		printf("\n\t1. Them node vao danh sach");
		printf("\n\t2. Xuat danh sach lien ket don");
		printf("\n\t3. Them node p vao sau node q trong danh sach:");
		printf("\n\t4. Them node p vao truoc node q trong danh sach");
		printf("\n\t5. Them node p vao vi tri bat ki trong danh sach");
		printf("\n\t6. Xoa node dau ");
		printf("\n\t7. Xoa node cuoi ");
		printf("\n\t8. Xoa sau:");
		printf("\n\t9. Xoa bat ky:");
		printf("\n\t0. Thoat");
		printf("\n\n\t\t===================END===================");
		printf("\n LUA CHON CUA BAN:");
		scanf("%d",&luachon);
		if (luachon<0||luachon>8)
		{
			printf("\n Lua chon ko hop le!");
			system("pause");
		}
		else if(luachon ==1)
		{
			n++;
			int x;
			printf("\n Nhap gia tri so nguyen:");
			scanf("%d",&x);
			NODE *p = KhoiTaoNode(x);
			ThemVaoCuoi(l,p);
		}
		else if(luachon==2)
		{
			XuatDanhSach(l);
			system("pause");
		}
		else if(luachon==3)
		{
		int x;
		printf("\n Nhap vai gia tri p can them vao truoc: ");
		scanf("%d",&x);
		NODE *p = KhoiTaoNode(x);
		ThemNode_p_VaoSauNode_q(l,p);
		}
		else if(luachon==4)
		{
		int x;
		printf("\n Nhap vao gia tri p can them vao sau");
		scanf("%d",&x);
		NODE *p = KhoiTaoNode(x);
		ThemNode_p_VaoTruocNode_q(l,p);
		}
		else if(luachon==5)
		{

		int x;
		printf("\nNhap gia tri node p");
		scanf("%d",&x);

		NODE *p = KhoiTaoNode(x);
		int vt;
		do
			{
				printf("\nNhap vi tri can tim");
				scanf("%d",&vt);
				if(vt<1||vt >n+1)
				{
					printf("Vi tri can them phai nam trong doan [1..%d]",n+1);
					system("pause");
				}
			}while(vt<1||vt>n+1);
			ThemNode_p_VaoViTri(l,p,vt);
			n++;
		}
		else if(luachon==6)
		{
			XoaDau(l);
		}
		else if(luachon==7)
		{
			XoaCuoi(l);
		}
		else if(luachon==8)
		{
			int x;
			printf("\nNhap vao node q:");
			scanf("%d",&x);
			NODE *q= KhoiTaoNode(x);
			XoaSau(l,q);
		}
		else if(luachon==9)
		{
			int x;
			printf("\nNhap vao node can xoa");
			scanf("%d",&x);
			XoaBatKy(l,x);
		}
		else if(luachon==0)
		{
			break;
		}
	}
}

int main()
{
	LIST l;
	KhoiTaoList(l);
	Menu(l);
	GiaiPhong(l);
	XuatDanhSach(l);
 return 0;
}

