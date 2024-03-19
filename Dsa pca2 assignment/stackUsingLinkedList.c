#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node *head = NULL;
struct Node *top = NULL;

//Displaying stack Elements.....
void display(){
    if(head==NULL){
        printf("Stack Underflow\n");
        return;
    }
    printf("The stack elements are ");
    struct Node *ptr = head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

//Length calculation.....
void length(){
    int len = 0;
    struct Node *ptr = head;
    while(ptr!=NULL){
        len++;
        ptr = ptr->next;
    }
    printf("The length of the stack is %d\n",len);
}

//Top element....
void topElement(){
    if(top == NULL){
        printf("Stack Underflow\n");
        return;
    }
    printf("The top most element in the stack is %d\n",top->data);
}

//Insertion...
void insertion(){
    int n;
    printf("Enter the item: ");
    scanf("%d",&n);
    struct Node* ptr;
    ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = n;
    ptr->next = NULL;
    if(head == NULL){
        head = ptr;
    }
    else{
        top->next = ptr;
    }
    top = ptr;
}

//Deletion....
void deletion(){
    if(head == NULL){
        printf("Stack Underflow\n");
        return;
    }
    printf("The deleted item is %d\n",top->data);
    struct Node *ptr = head;
    if(ptr->next == NULL){
        head = NULL;
        free(ptr);
        top = NULL;
    }
    else{
        while(ptr->next !=top){
            ptr = ptr->next;
        }
        free(top);
        top = ptr;
        top->next = NULL;
    }
}
int main(){
    int flag = 1;
    while(flag){
        int ch;
        printf("\n1. For Insertion 2. For Deletion 3. For Top element\n4. For length of the Stack 5. For Display 6. For Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                insertion();
                break;
            case 2:
                deletion();
                break;
            case 3:
                topElement();
                break;
            case 4:
                length();
                break;
            case 5:
                display();
                break;
            case 6:
                printf("..........Exit..........");
                flag = 0;
            default:
                printf("Please Enter valid digit....\n");
        }
    }
}