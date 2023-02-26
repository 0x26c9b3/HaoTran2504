#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
	char maXe[11];
	char tenXe[40];
	char hieuXe[40];
	double giaBan;
	int namSX;
	struct node *next;
}node;
typedef struct node nodeptr

node*makeNode(char ma[], char ten[], char hieu[], double gia, int nam)
	{
	node *newNode;
	newNode = (node*)malloc(sizeof(node));
	strcpy(newNode->maXe,ma);
	strcpy(newNode->tenXe,ten);
	strcpy(newNode->hieuXe,hieu);
	newNode->giaBan = gia;
	newNode->namSX = nam;
	newNode->next = NULL;
	return newNode;
}

int size(node *head){
	int cnt = 0;
	while(head != NULL){
		++cnt;
		head = head->next;
	}
	return cnt;
}

void out(node *node){
	printf("Ma xe: %s\n", node->maXe);
	printf("Ten xe: %s\n", node->tenXe);
	printf("Hieu xe: %s\n", node->hieuXe);
	printf("Gia ban: %.2lf\n", node->giaBan);
	printf("Nam san xuat: %d\n", node->namSX);
}

void duyet(node *head){
	while(head != NULL){
		out(head);
		head = head->next;
	}
}

void pushFront(node **head, char ma[], char ten[], char hieu[], double gia, int nam){
	node* newNode = makeNode(ma, ten, hieu, gia, nam);
	newNode->next = (*head);
	(*head) = newNode;
}

void pushBack(node **head, char ma[], char ten[], char hieu[], double gia, int nam){
	node* newNode = makeNode(ma, ten, hieu, gia, nam);
	if(*head == NULL){
		*head = newNode; return;
	}
	node* tmp = *head;
	while(tmp->next != NULL){
		tmp = tmp->next;
	}
	tmp->next = newNode;
}

void insert(node **head, int k, char ma[], char ten[], char hieu[], double gia, int nam){
	int n = size(*head);
	if(k > n || k < 1){
		printf("Vi tri chen khong hop le !!! \n");
		return;
	}
	if(k == 1){
		pushFront(head, ma, ten, hieu, gia, nam);
	}
	node *tmp = *head;
	for(int i = 0; i < k - 1; i++){
		tmp = tmp->next;
	}
	node* newNode = makeNode(ma, ten, hieu, gia, nam);
	newNode->next = tmp->next;
	tmp->next = newNode;
}

void popFront(node **head){
	if(*head == NULL) return;
	node *tmp = *head;
	*head = tmp->next;
	delete tmp;
}

void popBack(node **head){
	if(*head == NULL) return;
	node *tmp = *head;
	if(tmp->next == NULL){
		*head = NULL; delete tmp;
		return;
	}
	while(tmp->next->next != NULL){
		tmp = tmp->next;
	}
	node *last = tmp->next;
	tmp->next = NULL;
	delete tmp;
}

void erase(node **head, int k){
	int n = size(*head);
	if(k < 1 || k > n) return;
	if(k == 1) popFront(head);
	else{
		node *truoc = *head;
		node *sau = *head;
		for(int i = 0; i <= k - 1; i++){
			sau = truoc;
			truoc = truoc->next;
		}
		sau->next = truoc->next;
		delete truoc;
	}
}

void findNode(node *head, int pos){
	int n = size(head);
	if(pos < 1 || pos > n){
		printf("Vi tri khong hop le !!!\n");
		return;
	}
	node *tmp = head;
	for(int i = 0; i < pos - 1; i++){
		tmp = tmp->next;
	}
	out(tmp);
}

int main(){
	int n, chon;
	node *head = NULL;
	printf("Nhap vao so xe: \n"); scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("Nhap data: \n");
		char ma[11]; char ten[40]; char hieu[40]; double gia; int namSX;
		scanf("%s", &ma);
		scanf("%s", &ten);
		scanf("%s", &hieu);
		scanf("%.2lf", &gia);
		scanf("%d", &namSX);
		pushBack(&head, ma, ten, hieu, gia, namSX);
	}
	do{
		do{
			printf("Nhap lua chon: \n");
			scanf("%d", &chon);
		}while(chon < 0);
		switch(chon){
			case 1:{
				printf("Kiem tra kich thuoc: \n");
				int tmp = size(head);
				if(tmp == 0){
					printf("EMPTY\n");
				}
				else if(tmp == n){
					printf("FULL\n");
				}
				else printf("Danh sach chua %d xe.\n", tmp);
				break;
			}
			case 2:{
				printf("Nhap data: \n");
				char ma[11]; char ten[40]; char hieu[40]; double gia; int nam;
				scanf("%s", &ma);
				scanf("%s", &ten);
				scanf("%s", &hieu);
				scanf("%.2lf", &gia);
				scanf("%d", &nam);
				printf("Nhap vi tri ban muon them: \n");
				int k; scanf("%d", &k);
				insert(&head, k, ma, ten, hieu, gia, nam);
				break;
			}
			case 3:{
				printf("Nhap vi tri can tim: \n");
				int pos; scanf("%d", &pos);
				findNode(head, pos);
				break;
			}
			case 4:{
				printf("Xoa phan tu cuoi cung cua mang: \n");
				popBack(&head);
				break;
			}
			case 5:{
				duyet(head);
				break;
			}
		}
	}while(chon != 0);
}
