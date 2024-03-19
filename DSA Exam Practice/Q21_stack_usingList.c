#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;
Node *first = NULL;
Node *top = NULL;
void display(){
    Node *ptr = first;
    if(top==NULL){
        printf("Stack Underflow\n");
        return;
    }
    while(ptr){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
void insert(){
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    Node *ptr;
    ptr = (Node*)malloc(sizeof(Node));
    ptr->data = n;
    ptr->next = NULL;
    if(first==NULL){
        first = ptr;
        top = ptr;
    }
    else{
        top->next = ptr;
        top = ptr;
    } 
}
void delete(){
    Node *ptr = first;
    if(top==NULL){
        printf("stack Underflow\n");
        return;
    }
    printf("The deleted item is: %d\n",top->data);
    if(top==first){
        free(ptr);
        top = first = NULL;
        return;
    }
    while(ptr->next!=top){
        ptr = ptr->next;
    }
    top = ptr;
    ptr = ptr->next;
    free(ptr);
    top->next = NULL;
}
int main(){
    display();
    delete();
    insert();
    display();
    delete();
    display();
}