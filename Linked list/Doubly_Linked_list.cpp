#include <iostream>
using namespace std;
class Node
{
public:
    Node *prev;
    int data;
    Node *next;
};

class linked_list
{
private:
    Node *first;

public:
    linked_list() { first = NULL; }
    void create(int A[], int n);
    int length();
    void Display();
    int insertion(int pos);
    void reverse();
    int deletion(int pos);
};

void linked_list::create(int A[], int n)
{
    Node *p = new Node;
    Node *last;
    p->data = A[0];
    p->prev = NULL;
    p->next = NULL;
    first = p;
    last = p;
    for (int i = 1; i < n; i++)
    {
        p = new Node;
        p->data = A[i];
        p->prev = last;
        p->next = NULL;
        last->next = p;
        last = p;
    }
}

void linked_list::Display()
{
    Node *p = first;
    cout<<"The elements in the linked list are: "<<endl;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl<<endl;
}
int linked_list::length()
{
    Node *p = first;
    int len = 0;
    while (p != NULL)
    {
        len++;
        p = p->next;
    }
    return len;
}

int linked_list::insertion(int pos){
    if(pos<0 || pos>length()) 
    {
        cout<<"//Enter valid position:"<<endl;
        return -1;
    }
    int x;
    cout<<"Enter the element: ";
    cin>>x;
    Node *p=new Node;
    p->data=x;
    Node *t = first;
    if(pos==0){
        p->next=first;
        first->prev=p;
        p->prev=NULL;
        first=p;
        }
    else{
        for(int i = 0;i<pos-1;i++){
            t=t->next;
        }
        p->next=t->next;
        p->prev=t;
        t->next=p;
        if(p->next) p->next->prev=p;
    }
}

int linked_list::deletion(int pos){
    if(pos<1 || pos>length()){
        cout<<"Enter valid position: "<<endl;
        return -1;
    }
    Node *p=first;
    if(pos==1){
        first = first->next;
        first->prev=NULL;
        delete p;
    }
    else{
        for(int i =0;i<pos-1;i++){
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next) p->next->prev=p->prev;
        delete p;
    }
}

void linked_list::reverse(){
    Node *p,*t;
    p=first;
    while(p->next!=NULL){
        t=p->next;
        p->next=p->prev;
        p->prev=t;
        p=p->prev;
    }
    p->next=t;
    p->next=p->prev;
    p->prev=t;
    first=p;

}
int main()
{
    linked_list l;
    int A[] = {5, 6, 7, 8, 9, 10, 11, 1, 2, 6};
    l.create(A, 10);
    l.Display();

    l.insertion(10);
    l.Display();

    l.reverse();
    l.Display();

    l.deletion(4);
    l.Display();
    cout << "And the length of the linked list is " << l.length() << endl<<endl;
}