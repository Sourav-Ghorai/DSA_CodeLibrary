#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node *prev;
    int val;
    struct Node *next;
};
struct Node *first = NULL;

void Create_first(){
    int n;
    printf("Enter the no. of nodes to create first linked list: ");
    scanf("%d",&n);
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value: ");
    scanf("%d",&p->val);
    p->prev=NULL;
    p->next = NULL;
    struct Node *last = p;
    first = p;
    n = n-1;
    while(n--){
        struct Node *p = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter the value: ");
        scanf("%d",&p->val);
        p->next = NULL;
        p->prev = last;
        last->next = p;
        last = p;
    }
}
void display(){
    if(first==NULL) return;
    struct Node *p=first;
    printf("The elements are: ");
    while(p){
        printf("%d ",p->val);
        p = p->next;
    }
    printf("\n");
}
void insert_beg(){
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value: ");
    scanf("%d",&p->val);
    p->next = first;
    p->prev=NULL;
    first->prev=p;
    first = p;
    display();
}
void insert_end(){
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value: ");
    scanf("%d",&p->val);
    p->next = NULL;
    struct Node *t=first;
    while(t->next !=NULL){
        t = t->next;
    }
    t->next=p;
    p->prev=t;
    display();
}
void insert_any(){
    int x;
    printf("After which value want to insert: ");
    scanf("%d",&x);
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value: ");
    scanf("%d",&p->val);
    struct Node *t = first;
    while(t->val!=x){
        t = t->next;
    }
    p->next = t->next;
    p->prev = t;
    t->next->prev = p;
    t->next = p;
    display();
}
void delete_beg(){
    struct Node *p = first;
    first = first->next;
    first->prev = NULL;
    printf("The deleted item is: %d\n",p->val);
    free(p);
    display();
}
void delete_end(){
    struct Node *ptr,*preptr;
    ptr=first;
    preptr = ptr;
    while(ptr->next!=NULL){
        preptr=ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    printf("The deleted item is: %d\n",ptr->val);
    free(ptr);
    display();
}
void delete_any(){
    int x;
    printf("which value of node want to delete: ");
    scanf("%d",&x);
    struct Node *ptr=first;
    while(ptr->val!=x){
        ptr=ptr->next;
    }
    ptr->prev->next = ptr->next;
    if(ptr->next) ptr->next->prev = ptr->prev;
    printf("The deleted item is: %d\n",ptr->val);
    free(ptr);
    display();
}
int main(){
    Create_first();
    int flag = 1;
    while(flag){
        int ch;
        printf("1.For insert begining 2.For insert end 3.For insert at any position\n4.For delete at begining 5.For delete at end 6.For delete at any position\n7For display\n8.Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                insert_beg();
                break;
            case 2:
                insert_end();
                break;
            case 3:
                insert_any();
                break;
            case 4:
                delete_beg();
                break;
            case 5:
                delete_end();
                break;
            case 6:
                delete_any();
                break;
            case 7:
                display();
                break;
            case 8:
                flag = 0;
                break;
        }
    }
}