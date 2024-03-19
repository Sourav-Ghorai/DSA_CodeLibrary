#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *first=NULL;
void create(int n){
    int item,i;
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the %d elements: ",n);
    scanf("%d",&item);
    ptr->next=NULL;
    ptr->data=item;
    first=ptr;
    struct Node *preptr= (struct Node*)malloc(sizeof(struct Node));
    preptr=ptr;
    for(i=2;i<=n;i++){
        struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=NULL;
        preptr->next=ptr;
        preptr=ptr;
    }
}
void Display(struct Node *ptr){
    if(ptr==NULL)
        printf("// Linked list is Empty.\n");
    else{
        printf("\n// The elements in the linked list are: ");
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
void insert(struct Node *ptr,int pos,int item){
    if(pos<0) printf("// Enter valid position: ");
    else if(pos==0){
        struct Node *t=(struct Node*)malloc(sizeof(struct Node));
        t->data=item;
        t->next=first;
        first=t;
    }
    else{
        int i;
        struct Node *t=(struct Node*)malloc(sizeof(struct Node));
        for(i=1;i<=pos-1 && ptr!=NULL;i++){
            ptr=ptr->next;
        }
        if(ptr){
            t->data=item;
            t->next=ptr->next;
            ptr->next=t;
        }
        else printf("// Enter valid position: ");
    }
}
void deletion(struct Node *ptr,int pos){
    int item;
    if(ptr==NULL) printf("// Linked list is Empty: \n");
    else if(pos==1){
        item = ptr->data;
        printf("// The deleted item is: %d",item);
        first=ptr->next;
        free(ptr);
    }
    else{
        int i;
        struct Node *preptr;
        preptr=NULL;
        for(i=1;i<=pos-1;i++){
            preptr = ptr;
            ptr=ptr->next;
        }
        item = ptr->data;
        printf("//The deleted item is: %d",item);
        preptr->next=ptr->next;
        free(ptr);
    }
}

int main(){
    int flag=1,n;
    printf("Create a linked list: \n");
    printf("Enter the no. of element to create the first linked list: ");
    scanf("%d",&n);
    create(n);
    while(flag){
        int ch,pos,item;
        printf("\nEnter your choice\n1.For Insertion  2.For Deletion  3.For Display  4.For EXIT \n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter position after which to insert\nAnd press 0 to insert at start: ");
                scanf("%d",&pos);
                printf("Enter the element: ");
                scanf("%d",&item);
                insert(first,pos,item);
                Display(first);
                break;
            case 2:
                printf("Enter the position to delete: ");
                scanf("%d",&pos);
                deletion(first,pos);
                Display(first);
                break;
            case 3:
                Display(first);break;
            case 4:
                printf("...............EXIT..............");
                flag=0;break;
        }
    }
}