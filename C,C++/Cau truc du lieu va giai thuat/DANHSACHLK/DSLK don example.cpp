#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct SinhVien{
	char MSSV[11];
	char HoTen[41];
	float DiemTB
}SV;

typedef struct Node{			
	SV info;
	struct Node* next;
}Node;

typedef Node* NODEPTR;

void InputSV(SV &X){
	scanf("%s",&X.MSSV);
	gets(X.HoTen);
	scanf("%f",&X.DiemTB);

}

void Output(SV X){
	printf("%s-%s-%f",X.MSSV,X.HoTen,X.DiemTB);
}

void Init(NODEPTR &pHead){
	pHead = NULL;
}

NODEPTR CreateNode(SV X){
	NODEPTR newNode = new NODEPTR;
	newNode->info = X;
	newNode->next = NULL;
	return newNode;
}

void InsertFirst(NODEPTR &pHead, SV X){
	NODEPTR newNode = CreateNode(X);
	newNode->next = pHead;
	pHead = newNode;
}

void InsertEnd(NODEPTR &pHead, SV X){
	NODEPTR current = pHead;
	if (current==NULL) {
		InsertFirst(pHead,X);
		return;
	}
	while(current->next!=NULL){
		current = current->next;
	}
	NODEPTR newNode = CreateNode(X);
	current->next = newNode;

}

void ShowList(NODEPTR pHead){
	NODEPTR current = pHead;
	while(current!=NULL){
		Output(current->info);
		current = current->next;
	}
}
void ShowListGT5(NODEPTR pHead){
	NODEPTR current = pHead;
	while(current!=NULL){
		if (current->info.DiemTB>=5) {
			Output(current->info);
		}
		current = current->next;

	}
}
void ShowListMSSVX(NODEPTR pHead, char X[]){
	NODEPTR current = pHead;
	while(current!=NULL){
		if (strcmp(current->info.MSSV,X)==0) {
			Output(current->info);
		}
		current = current->next;

	}
}

void Sort(NODEPTR &pHead ){
	for(NODEPTR i = pHead;i->next != NULL;i=i->next){
		for(NODEPTR j = i->next;j!= NULL;j=j->next){
			if (i->info.DiemTB>j->info.DiemTB) {
				SV temp = i->info;
				i->info = j->info;
				j->info = temp;
			}

		}
	}
}

void InsertAfter(NODEPTR &pHead,char X[], SV Y){
	NODEPTR current = pHead;
	while(current!=NULL){
		if (strcmp(current->info.MSSV,X)==0) {
			//Them
			NODEPTR newNode = CreateNode(Y);
			newNode->next = current->next;
			current->next = newNode;
			return;
		}
		current = current->next;
	}
	printf("Khong co sv co ma X");
}

void DeleteFirst(NODEPTR &pHead){
	NODEPTR first = pHead;
	pHead = pHead->next;
	delete first;
}
void DeleteEnd(NODEPTR &pHead){
	if (pHead->next ==NULL) {
		DeleteFirst(pHead);
		return;
	}
	NODEPTR current = pHead;
	while(current->next->next!=NULL){
			current = current->next;
	}
	NODEPTR last = current ->next;
	current ->next = NULL;
	delete last;
}

void DeleteAll(NODEPTR &pHead){
	NODEPTR first = pHead;
	while(first !=NULL){
		first = pHead;
		pHead = pHead->next;
		delete first;
	}
}

void DeleteSVX(NODEPTR &pHead, char X[]){
	if (strcmp(X, pHead->info.MSSV)==0) {
		DeleteFirst(pHead);
	}
	NODEPTR current= pHead;
	while(current!=NULL){
		if(strcmp(current->next->info.MSSV, X)==0){
			NODEPTR	next = current->next;
			current->next = next->next;
			delete next;
		}
		current = current->next;
	}

}





int main(){
	NODEPTR pHead;
	Init(pHead);
	int n;
	for (int i = 0; i < n; ++i) {
		SV X;
		InputSV(X);
		InsertFirst(pHead, X);
	}
	return 0;
}



