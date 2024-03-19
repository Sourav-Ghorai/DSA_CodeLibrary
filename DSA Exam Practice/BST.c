#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    struct Node* lchild;
    int data;
    struct Node* rchild;
}Node;
Node* root = NULL;
void insert(int key){
    Node *p,*ptr,*last;
    p = (Node*)malloc(sizeof(Node));
    p->data = key;
    p->lchild = p->rchild = NULL;
    if(root==NULL){
        root = p;
        return;
    } 
    ptr = root;
    
    while(ptr){
        last = ptr;
        if(ptr->data<key){
            ptr = ptr->rchild;
        }
        else if(ptr->data>key){
            ptr = ptr->lchild;
        }
        else break;
    }
    if(last->data<key){
        last->rchild = p;
    }
    else last->lchild = p;
}
void inorder(Node *ptr){
    if(ptr){
        inorder(ptr->lchild);
        printf("%d ",ptr->data);
        inorder(ptr->rchild);
    }
    
}
int main(){
    insert(5);
    insert(4);
    insert(6);
    insert(5);
    insert(1);
    insert(2);
    insert(0);
    inorder(root);
}