#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct BenhNhan
{
    int stt;
    char ten[256];
    int age;
};
typedef struct BenhNhan BN;
struct node{
    BN data;
    node *next;
};
typedef struct node NODE;
struct queue{
    NODE *front;
    NODE *rear;
};
typedef struct queue QUEUE;
void Init(QUEUE &q){
    q.front = NULL;
    q.rear = NULL;
}
NODE* CreateNode (MT x) {
    NODE *p;
    p = new NODE;
    if (p==NULL) {
        printf ("KHONG DU BO NHO!");
        return NULL;
    }
    p->data=x;
    p->next=NULL;
    return p;
}
int IsEmpty(QUEUE q){
    if (q.front == NULL){
        return 1;
    }
    return 0;
}
void Add (QUEUE &q, NODE *NewNode){
    if(q.front == NULL){
        q.front = NewNode;
        q.rear = NewNode;
    }
    else{
        q.rear->next = NewNode;
        q.rear = NewNode;
    }
}
BN Remove(QUEUE &q){
    BN x;
    NODE *p = NULL;
    if (!IsEmpty(q)){
        p = q.front;
        x = p->data;
        q.front = q.front->next;
        delete p;
        if (q.front==NULL){
            q.rear = NULL;
        }
    }
    return x;
}
void Input(QUEUE &q, int n){
    for(int i = 0; i< n; i++){
        BN x;
     
        printf("NHAP TEN: ");
        fflush(stdin);
        gets(x.ten);
        printf("NHAP NGAY XUAT:");
        printf("\nNGAY: ");
        scanf("%d",&x.ngay_xuat.ngay);
        printf("THANG: ");
        scanf("%d",&x.ngay_xuat.thang);
        printf("NAM: ");
        scanf("%d",&x.ngay_xuat.nam);
        printf("NHAP GIA: ");
        scanf("%f",&x.gia_xuat);
        printf("\n \n");
        NODE *p;
        p = CreateNode(x);
        Add(q,p);
    }
}
void Output(QUEUE q){
    for(NODE *p = q.front; p!= NULL; p=p->next){
        printf("%s\t %s\t %d/%d/%d %f\n", p->data.ID, p->data.ten,p->data.ngay_xuat.ngay,p->data.ngay_xuat.thang, p->data.ngay_xuat.nam, p->data.gia_xuat);
    }
}
void Ma001(QUEUE q){
    for(NODE *p = q.front; p!= NULL; p=p->next){
        if(strcmp(p->data.ID,"007") == 0){
            printf("%s\t %s\t %d/%d/%d %f\n", p->data.ID, p->data.ten,p->data.ngay_xuat.ngay,p->data.ngay_xuat.thang, p->data.ngay_xuat.nam, p->data.gia_xuat);
        }
    }
}
void MayTinhBocXep(QUEUE &q){
    for(NODE *p = q.front; p!= NULL; p=p->next){
        MT x = Remove(q);
        printf("%s\t %s\t %d/%d/%d %f\n", x.ID, x.ten,x.ngay_xuat.ngay,x.ngay_xuat.thang, x.ngay_xuat.nam, x.gia_xuat);
    }
}
int main(){
    QUEUE q;
    Init(q);
    int n;
    printf("NHAP SO LUONG MAY TINH: ");
    scanf("%d", &n);
    Input(q,n);
    printf("THONG TIN MAY TINH TRONG HANG DOI\n");
    Output(q); 
    printf("\nTHONG TIN MAY TINH CO MA 007\n");
    Ma001(q);
    printf("\nTHONG TIN MAY TINH DA BOC XEP\n");
    MayTinhBocXep(q);
    printf("\nTHONG TIN MAY TINH HANG DOI SAU KHI BOC XEP (BANG TRUYEN RONG)\n");
    Output(q);
}