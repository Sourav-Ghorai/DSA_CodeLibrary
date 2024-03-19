#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};
struct Node *root = NULL;
struct Queue{
    int size;
    int front;
    int rear;
    struct Node **Q;
};
void createQueue(struct Queue *q,int size){
    q->size = size;
    q->front = q->rear = 0;
    q->Q = (struct Node**)malloc(sizeof(struct Node*)*q->size);
}
void enqueue(struct Queue *q,struct Node* p){
    q->rear = q->rear+1;
    q->Q[q->rear] = p;
}
struct Node* dequeue(struct Queue*q){
    q->front++;
    return q->Q[q->front];
}
int isEmpty(struct Queue q){
    if(q.front == q.rear) return 1;
    return 0;
}

void createTree(){
    struct Node *p,*t;
    struct Queue q;
    createQueue(&q,100);
    printf("Enter value of root ");
    root = (struct Node*)malloc(sizeof(struct Node));
    scanf("%d",root->data);
    root->lchild = root->rchild = NULL;
    enqueue(&q,root);
    while(!isEmpty(q)){
        p = dequeue(&q);
        int x;
        printf("Enter the left child of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1){
            t = (struct Node*) malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q,t);
        }
        printf("Enter the right child of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1){
            t = (struct Node*) malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q,t);
        }
    }
}
void preOrderDisplay(struct Node *p){
    if(p){
        printf("%d ",p->data);
        preOrderDisplay(p->lchild);
        preOrderDisplay(p->rchild);
    }
}
int main(){
    createTree();
    preOrderDisplay(root);
}