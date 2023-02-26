
//nhap cay nhi phan cac so nguyen
//xuat ra man hinh cac phan tu cua cay nhi phan 
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;//du lieu cua node ==> du lieu ma node se luu tru
	struct node *pLeft;//node lien ket ben trai cay
	struct node *pRight;//node lien ket ben phai cay
};

typedef struct node NODE;
typedef NODE* TREE;

//khoi tao cay 
void khoitaocay(TREE &t){
	t=NULL;//cay rong
} 

//ham them phan tu x vao cay nhi phan
void  themnodevaocay(TREE &t, int x){
	//neu cay rong
	if(t==NULL){
		NODE *p=new NODE;//khoi tao 1 cai node de them vao cay
		p->data= x;//them du lieu x vao data
		p->pLeft=NULL;
		p->pRight=NULL;
		t=p;//node p chinh la node goc <=> x chinh la node goc 
	}
	else{//cay co ton tai phan tu 
		//neu phan tu them vao nho hon node goc ==> them no vao ben trai		
		if(t->data>x){ //(t->data) la node goc
			themnodevaocay(t->pLeft,x);//duyet qua trai de them phan tu x
		}
		else{
			//neu phan tu them vao lon hon node goc ==> them no vao ben phai
			if(t->data<x){
				themnodevaocay(t->pRight,x);
			}
		}
	}
}
//xuat phan tu theo NLR
void NLR(TREE t){
	//neu cay con phan tu thi tiep tuc duyet
	if(t!=NULL){
		printf("%d\t", t->data);//xuat du lieu trong node
		NLR(t->pLeft);//duyet qua trai
		NLR(t->pRight);//duyet qua phai
	}
}

//xuat phan tu theo LNR
void LNR(TREE t){
	//neu cay con phan tu thi tiep tuc duyet
	if(t!=NULL){
		NLR(t->pLeft);//duyet qua trai
		printf("%d\t", t->data);//xuat du lieu trong node
		NLR(t->pRight);//duyet qua phai
	}
}

//xuat phan tu theo NLR
void LRN(TREE t){
	//neu cay con phan tu thi tiep tuc duyet
	if(t!=NULL){
		NLR(t->pLeft);//duyet qua trai
		NLR(t->pRight);//duyet qua phai
		printf("%d\t", t->data);//xuat du lieu trong node
	}
}

//tim kiem trong cay
NODE* timkiem(TREE t, int x){
	//neu cay rong
	if(t==NULL){
		return NULL;
	}
	else{
		//neu phan tu tim kiem nho hon node goc thi duyet(dequy)sang trai de tim
		if(x<t->data){
			timkiem(t->pLeft, x);
		}
		else if(x>t->data){//duyet sang ben phai
			timkiem(t->pRight, x);
		}
		else{//<=>data==y
			return t;//tra ve node can tim kiem
		}
	}
}

//phan tu lon nhat trong cay
int gtln(TREE t){
	//neu node cha ma ko ton tai cay con trai va cay con phai
	if(t->pRight==NULL){
		return t->data;
	}
	return gtln(t->pRight);//duyet den node cuoi cung nhat cay con ben phai ==> de tim gtln
} 	

//phan tu nho nhat trong cay
int gtnn(TREE t){
	//neu node cha ma ko ton tai cay con trai va cay con phai
	if(t->pLeft==NULL){
		return t->data;
	}
	return gtnn(t->pLeft);//duyet den node cuoi cung nhat cay con ben trai==> de tim gtnn
} 
//xoa node bat ki trong cay 
void xoa(TREE &t, int data){//data chinh la gia tri cua cac node can xoa
	if(t==NULL){
		return;//ket thuc ham luon neu cay rong
	}
	else {
		//neu nhu data nho hon node goc
		if(data<t->data){
			xoa(t->pLeft, data);//duyet sang nhanh trai cua cay
		}
		else if(data>t->data){
			xoa(t->pRight, data);//duyet sang nhanh phai cua cay
		}
		else{//data==t->data -da tim ra cai node can xoa
			NODE *x=t;//node x la node the mang - ti nx se xoa no
			//neu nhu nhanh trai =NULL <=> day chinh la cay co 1 con chinh la con phai
			//neu nhu nhanh trai = null day la cay con phai
			if(t->pLeft==NULL){
				t=t->pRight;//duyet sang phai cua cai nut can xoa de cap nhap moi lien ket giua node cha cua node can xoa voi node con cua node can xoa
			}
			else if(t->pRight==NULL){
				t->pLeft;//duyet sang trai cua cai nut can xoa de cap nhap moi lien ket giua node cha cua node can xoa voi node con cua node can xoa
			}
			delete x;//xoa node can xoa
		}
	}
}
TREE RotateLeft(TREE root)
{
	TREE p;
	p = root;
	if(root == NULL)//neu cay rong~!
	{
		printf("\n Khong the xoay trai vi cay rong!");
	}
	else {
		if(root->pRight==NULL)
			printf("\nKhong the xoay trai vi ko co cay con ben phai!");
	
	}
	
}
	themnodevaocay(t, 1);
	themnodevaocay(t, 10);
	themnodevaocay(t, 5);
	themnodevaocay(t, 3);
	themnodevaocay(t, 20);	
	printf("\nNLR\n");
	NLR(t);
	printf("\nLNR\n");
	LNR(t);
	printf("\nLRN\n");
	LRN(t);
	int x;
	printf("\nnhap phan tu can tim kiem: ");
	scanf("%d",&x);
	NODE *p=timkiem(t, x);
	if(p==NULL){
		printf("\nphan tu ko ton tai trong cay");
	}
	else{
		printf("\nphan tu co ton tai trong cay");
	}
	printf("\nMAX= %d",gtln(t));
	printf("\nMIN= %d",gtnn(t));
	printf("\nnhap phan tu can xoa: ");
	scanf("%d",&x);
	xoa(t, x);
	printf("\nNLR\n");
	NLR(t);
return 0;

