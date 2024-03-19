#include<iostream>
using namespace std;
struct Node{
    Node *lchild;
    int data;
    Node *rchild;
};
Node *root = NULL;
class stack{
    public:
        int top;
        Node **st;
        stack(){
            top = -1;
            st = new Node*[100];
        }
        void push(Node *p){
            top++;
            st[top] = p;                                             //NOT COMPLETE PROGRAM (WATCH UDEMY 309)
        }
        void pop(){
            top--;
        }
        Node* topElement(){
            return st[top];
        }
        int isEmpty(){
            if(top==-1) return 1;
            return 0;
        }
};
void preGen(int arr[],int size){
    stack stk;
    Node *p = new Node;
    p->data = arr[0];
    p->lchild = p->rchild = NULL;
    root = p;
    int i = 1;
    while(i<size){
        if(arr[i] < p->data){
            Node *t = new Node;
            t->data = arr[i]; i++;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            stk.push(p);
            p = t;
        }
        else{
            if(!stk.isEmpty()){
                Node* ptr = stk.topElement();
                if(arr[i]< ptr->data){
                    Node *t = new Node;
                    t->data = arr[i]; i++;
                    t->lchild = t->rchild = NULL;
                    p->rchild = t;
                    p = t;
                }
                else{
                    stk.pop();
                    p = ptr;
                }
            }
            else{
                Node *t = new Node;
                t->data = arr[i]; i++;
                t->lchild = t->rchild = NULL;
                p->rchild = t;
                p = t;
            }
            
        }
    }
}

void inorder(Node *p){
    if(p){
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
    
}
int main(){
    int n;
    int arr[n];
    cout<<"Enter the no. of element in the tree ";
    cin>>n;
    cout<<"Enter the preorder form of the tree"<<endl;
    for (int i = 0;i<n; i++){
        cin>>arr[i];
    }
    preGen(arr,n);
    inorder(root);
}