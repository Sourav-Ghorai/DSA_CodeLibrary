#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node *first = NULL;
void display(){
    Node *ptr = first;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void Create(int arr[],int n){
    Node *ptr,*last;
    ptr = (Node*)malloc(sizeof(Node));
    ptr->data = arr[0];
    ptr->next = NULL;
    first = ptr;
    last = ptr;
    n--;
    int i = 1;
    while(n--){
        ptr = (Node*)malloc(sizeof(Node));
        ptr->data = arr[i];
        ptr->next = NULL;
        last->next = ptr;
        last = ptr;
        i++;
    }
}

void listSort(){
    Node *ptr,*temp;
    ptr = first;
    while(ptr!=NULL){
        temp = first;
        while(temp->next!=NULL){
            if(temp->next){
                if(temp->data>temp->next->data){
                    int t = temp->data;
                    temp->data = temp->next->data;
                    temp->next->data = t;
                }
            }
            temp = temp->next;
        }
        ptr = ptr->next;
    }
}
void reverse(){
    Node *pre,*ptr,*post;
    post = pre = NULL;
    ptr = first;
    while(ptr!=NULL){
        post = ptr->next;
        ptr->next = pre;
        pre = ptr;
        ptr = post;
    }
    first = pre;
}
int main(){
    int n;
    int i;
    printf("Enter how many elements you want to create at first: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    int arr[n];
    for(i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    Create(arr,n);
    display();
    listSort();
    display();
    reverse();
    display();
    
}