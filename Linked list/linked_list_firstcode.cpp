#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
}*first=NULL;
int create(int A[],int n){
    struct Node *ptr;
    struct Node *preptr;
    ptr = new Node;
    ptr->data = 5;
    ptr->next = NULL;
    first = ptr;preptr=ptr;
    for(int i = 0;i<n;i++){
        ptr=new Node;
        ptr->data=A[i];
        ptr->next=NULL;
        preptr->next=ptr;
        preptr=ptr;
    }
    return 0;
}
void display(struct Node *t){
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}
int main(){
    int A[]={10,15,20,25};
    create(A,4);
    display(first);
}