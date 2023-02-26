#include<bits/stdc++.h>
using namespace std;

struct sinhVien {
	string maSV;
	string hoTen;
	float dtb;
	struct sinhVien* next;
};

int size(sinhVien *head){
	int cnt = 0;
	while (head != NULL)
	{
		++cnt;
		head = head->next;
	}
	return cnt;
}

sinhVien* makesinhVien(string ma, string ten, float diem){
	sinhVien *newsinhVien = new sinhVien;
	newsinhVien->maSV = ma;
	newsinhVien->hoTen = ten;
	newsinhVien->dtb = diem;
	newsinhVien->next = NULL; 
	return newsinhVien;
}
//cau b
void duyet(sinhVien *head){
	while(head != NULL){
		cout << head->maSV << ' ' << head->hoTen << ' ' << head->dtb << endl;
		head = head->next;
	}
}

void pushBack(sinhVien **head, string ma, string ten, float diem){
	sinhVien* newsinhVien = makesinhVien(ma, ten, diem);
	while(*head == NULL){
		*head = newsinhVien;
		return;
	}
	sinhVien* tmp = *head;
	while(tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newsinhVien;
}

void pushFront(sinhVien **head, string ma, string ten, float diem){
	sinhVien* newsinhVien = makesinhVien(ma, ten, diem);
	newsinhVien->next = *head;
	*head = newsinhVien;
}


//cau g
void popFront(sinhVien **head){
	if(*head == NULL) return;
	sinhVien* tmp = *head;
	*head = tmp->next;
	delete tmp;
}
//cau h
void popBack(sinhVien **head){
	if(*head == NULL) return;
	sinhVien *tmp = *head;
	if(tmp->next == NULL){
		*head = NULL;
		delete tmp;
		return;
	}
	while(tmp->next->next != NULL){
		tmp = tmp->next;
	}
	sinhVien *last = tmp->next;
	tmp->next = NULL;
	delete tmp;
}

void findsinhVien(sinhVien *head, int k){
	int n = size(head);
	if(k < 1 || k > n){
		cout << "khong tim thay sinhVien can tim" << endl;
		return;
	}
	sinhVien *tmp = head;
	for(int i = 0; i < k; i++){
		tmp = tmp->next;
	}
	cout << tmp->maSV << ' ' << tmp->hoTen << ' ' << tmp->dtb << endl;
}

//cau a
void nhap(sinhVien **head, string ma, string ten, float diem){
	cout << "Nhap vao so sinh vien: !" << endl;
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		cin.ignore();
		string ma, ten;
		float diem;
		getline(cin, ma);
		getline(cin, ten);
		cin >> diem;
		pushBack(head, ma, ten, diem);
	}
}
//cau e
void sort(sinhVien **head){
	for(sinhVien *i = *head; i != NULL; i = i->next){
		sinhVien *min = i;
		for(sinhVien *j = i->next; j != NULL; j = j->next){
			if(j->dtb < min->dtb){
				min = j;
			}
		}
		int tmp = min->dtb;
		string tmp1 = min->maSV;
		string tmp2 = min->hoTen;
		min->dtb = i->dtb;
		min->maSV = i->maSV;
		min->hoTen = i->hoTen;
		i->dtb = tmp;
		i->hoTen = tmp2;
		i->maSV = tmp1;
	}
}
//cau c
void findsinhVien(sinhVien *head, float dtb){
	sinhVien *tmp = head;
	while(tmp != NULL){
		tmp = tmp->next;
		if(tmp->dtb > 5){
			cout << tmp->maSV << ' ' << tmp->hoTen << ' ' << tmp->dtb << endl;
		}
	}
	
}

//cau d
void findsinhVien(sinhVien *head, string ma){
	sinhVien *tmp = head;
	while(tmp->maSV != ma){
		tmp = tmp->next;
	}
	cout << tmp->maSV << ' ' << tmp->hoTen << ' ' << tmp->dtb << endl;
}

//cau i
void empty(sinhVien *head){
	while(head != NULL){
		sinhVien *tmp = head;
		head = head->next;
		delete tmp;
	}
}

//cau f
int findX(sinhVien *head, string x){
	sinhVien *tmp = head;
	int cnt = 0;
	while(tmp->maSV != x){
		tmp = tmp->next;
		cnt++;
	}
	return cnt;
}

void insert(sinhVien **head, int cnt, string ma, string ten, float diem){
	int n = size(*head);
	if(cnt < 1 || cnt > n){
		cout << "Vi tri chen k hop le \n";
		return;
	}
	if(cnt == 1){
		pushFront(head, ma, ten, diem); return;
	}
	sinhVien *tmp = *head;
	for(int i = 0; i <= cnt; i++){
		tmp = tmp->next;
	}
	sinhVien *newsinhVien = makesinhVien(ma, ten, diem);
	newsinhVien->next = tmp->next;
	tmp->next = newsinhVien;
}

//cau j
void erase(sinhVien **head, int cnt){
	int n = size(*head);
	if(cnt < 1 || cnt > n) return;
	if(cnt == 1) popFront(head);
	else{
		sinhVien *truoc = *head;
		sinhVien *sau = *head;
		for(int i = 1; i <= cnt - 1; i++){
			sau = truoc;
			truoc = truoc->next;
		}
		sau->next = truoc->next;
		delete truoc;
	}
}

