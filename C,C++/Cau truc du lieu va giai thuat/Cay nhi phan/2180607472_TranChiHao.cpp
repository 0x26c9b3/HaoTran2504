#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct node
{
	int info;
	struct node* left;
	struct node* right;
}Node;

typedef Node* NODE;

NODE taonode(int x)
{
	NODE p = new Node;
	p->info=x;
	p->left=NULL;
	p->right=NULL;
	return p;
}

void khoitao(NODE &a)
{
	a=NULL;
}

int ktrong(NODE a)
{
	return a==NULL;
}

void insert(NODE &a,int x)
{
	if(a==NULL)
	{
		a=taonode(x);
	}
	else
	{
		if(a->info==x)
		{
			return;
		}
		else
		{
			if(a->info>x)
			{
				insert(a->left,x);
			}
			else
			{
				insert(a->right,x);	
			}
		}
	}
}

int remove(NODE &a,int x)
{
	if(a==NULL)
	return 0;
	if(a->info>x)
		return remove(a->left,x);
	if(a->info<x)
		return remove(a->right,x);
	NODE p,f,rp;
	p=a;
	if(a->left==NULL)
		a=a->right;
	else if(a->right==NULL)
		a=a->left;
	else{
		f=p;
		rp=p->right;
		while(rp->left!=NULL)
		{
			f=rp;
			rp=rp->left;
		}
		p->info=rp->info;
		if(f==p)
			f->right=rp->right;
		else if(rp->right!=NULL)
			f->left=rp->right;
		else
			f->right=rp->left;
		p=rp;
	}
	delete p;
	return 1;
}

void clear(NODE &a)
{
	if(a!=NULL)
	{
		clear(a->left);
		clear(a->right);
		delete a;
	}
}

void tangdanLNR(NODE a)
{
	if(a!=NULL)
	{
		tangdanLNR(a->left);
		printf("%d\t",a->info);
		tangdanLNR(a->right);
	}
}

void giamdanRNL(NODE a)
{
	if(a!=NULL)
	{
		giamdanRNL(a->right);
		printf("%d\t",a->info);
		giamdanRNL(a->left);
	}
}

int checkBST(NODE a)
{
	if(a==NULL)
	return 1;
	if(a->left!=NULL && a->left->info>a->info)
	return 0;
	if(a->right!=NULL && a->right->info<a->info)
	return 0;
	return checkBST(a->left) && checkBST(a->right);
}

int checkParents(NODE a,int x)
{
	if(a->info==x)
		return 0;
	if(a->info<x)
	{
		if(a->right!=NULL)
	{
			if(a->right->info==x)
		{
			return a->info;	
		}
		else
		{
			return checkParents(a->right,x);
		}
	}
	else 
	return -1;
	}
	else
	if(a->info>x)
	{
		if(a->left!=NULL)
		{
			if(a->left->info==x)
			{
				return a->info;
			}
			else
			{
				return checkParents(a->left,x);
			}
		}
		else
		return -1;
	}
}

int timkiem(NODE &a,int x)
{
	if(a->left==NULL && a->right==NULL)
	return 0;
	if(a->info==x)
	return a->info;
	if(a->info>x)
	{
		if(a->left->info==x)
		{
		return a->left->info;
		}
		else
		{
			timkiem(a->left,x);
		}
	}
	else
	if(a->info<x)
	{
		if(a->right->info==x)
		{
			return a->right->info;
		}
		else
		{
			timkiem(a->right,x);
		}
	}
}

int demnodela(NODE a)
{
	if(a==NULL)
	return 0;
	if(a->left==NULL && a->right==NULL)
	return 1;
	return demnodela(a->right) + demnodela(a->left);
}

int demtongnode(NODE a)
{
	if(a==NULL)
	return 0;
	return 1+demtongnode(a->left)+demtongnode(a->right);
}

int demnodetrong(NODE a)
{
	return demtongnode(a)-demnodela(a);
}

int chieucao(NODE a)
{
	if(a==NULL)
	return 0;
	int trai=chieucao(a->left);
	int phai=chieucao(a->right);
	if(trai>phai)
	{
		return 1 + chieucao(a->left);
	}
	return 1 + chieucao(a->right);
}

int checkBSTdaydu(NODE a)
{
	if(pow(2,chieucao(a))-1==demtongnode(a))
	return 1;
}

int min(NODE a)
{
	if(a==NULL)
	return 0;
//	NODE b=a;
	while(a->left!=NULL)
	{
		a=a->left;
	}
	return a->info;
}

int max(NODE a)
{
	if(a==NULL)
	return 0;
	while(a->right!=NULL)
	{
		a=a->right;
	}
	return a->info;
}
//NODE MinNODE(NODE root){
//	if(root == NULL){
//		return NULL;
//	}
////	NODE current = root;
//	while(current->left!= NULL)
//	{
//		current = current->left;
//	}
//	return current;
//}

int tonggiatri(NODE a)
{
	if(a==NULL)
	return 0;
	return a->info+tonggiatri(a->left)+tonggiatri(a->right);
}
int main()
{
	NODE a;
	khoitao(a);
	insert(a,8);
	insert(a,3);
	insert(a,5);
	insert(a,2);
	insert(a,20);
	insert(a,11);
	insert(a,30);
	insert(a,9);
	insert(a,18);
	insert(a,4);
	printf("\nSap xep tang dan : ");
	tangdanLNR(a);
	printf("\nSap xep giam dan : ");
	giamdanRNL(a);
	printf("\nXoa so 20:\nSap xep tang dan : ",remove(a,20));
	tangdanLNR(a);
	if(checkBST(a)==1){
	printf("\nCay nhi phan dung");
	}
	else
	{
		printf("\nCay nhi phan sai");
	}
	int b;
	printf("\nNhap nut muon tim nut cha : ");
	scanf("%d",&b);
	if(checkParents(a,b)==-1)
		printf("\nKhong tim thay gia tri");
	else
		printf("Nut cha cua nut %d la %d",b,checkParents(a,b));
	int c;
	printf("\nNhap gia tri can tim : ");
	scanf("%d",&c);
	if(timkiem(a,c)==0)
	{
		printf("Khong tim thay gia tri");
	}
	else
	{
		printf("Tim thay gia tri la %d",timkiem(a,c));
	}
	printf("\nTong node la cua cay nhi phan la %d",demnodela(a));
	printf("\nTong node cua cay nhi phan la %d",demtongnode(a));
	printf("\nTong node trong cua cay nhi phan la %d",demnodetrong(a));
	printf("\nChieu cao cua cay nhi phan la %d",chieucao(a));
	if(checkBSTdaydu(a)==1)
	printf("\nDay la cay nhi phan day du");
	printf("\nKhong phai la cay nhi phan dau du");
	if(min(a)==0)
	{
		printf("\nKhong tim thay");
	}
	else
	{
		printf("\nGia tri nho nhat la %d",min(a));
	}
	if(max(a)==0)
	{
		printf("\nKhong tim thay");
	}
	else
	{
		printf("\nGia tri lon nhat la %d",max(a));
	}
	printf("\nTong gia tri cua cay nhi phan la %d",tonggiatri(a));
//	NODE Min = MinNODE(a);
//
//	if(Min==NULL){
//		printf("cay rong");
//	}else{
//		printf("\n%d",Min->info);
//	}
	
	/*while(1)
	{
		printf("\n1.Them phan tu");
		printf("\n2.Sap xep tang dan");
		printf("\n0.Thoat");
		printf("\n------------------------------------");
		printf("\nNhap lua chon : ");
		int n;
		scanf("%d",&n);
		if(n==1)
		{
			int x;
			printf("\nNhap so can them : ");
			scanf("%d",&x);
			insert(a,x);
		}
		if(n==2)
		{
			tangdanLNR(a);
		}
		if(n==0)
		{
			break;
		}
	}*/
	return 0;
}
