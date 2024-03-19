#include<iostream>
using namespace std;
struct Node{
    Node *lchild;
    int data;
    Node *rchild;
};
Node *root=NULL;

//Creation of tree in Iteration method... 
void Insert(Node *p,int key){
    Node *t = new Node;
    Node *x;
    t->data = key;
    t->lchild = t->rchild = NULL;
    if(p==NULL) root=t;
    else{
        while(p){
            x = p;
            if(p->data>key){
                 p = p->lchild;
            }
            else if(p->data<key){
                 p = p->rchild;
            }
            else return;
        }
        if(x->data>key) x->lchild = t;
        else x->rchild = t;
    }
}

//Creation of tree in Recursive Method....
Node* RInsert(Node* p,int key){
    if(p==NULL){
        Node *t = new Node;
        t->data = key;
        t->lchild = t->rchild = NULL;
        if(root == NULL) root = t;
        return t;
    }
    if(key<p->data){
        p->lchild = RInsert(p->lchild,key);
    }
    else if(key>p->data){
        p->rchild = RInsert(p->rchild,key);
    }
    else return p;
}
//Recursive Search.....
Node* Rsearch(Node *p,int key){
    if(p==NULL) return NULL;
    if(p->data == key) return p;
    else if(key<p->data) return Rsearch(p->lchild,key);
    else return Rsearch(p->rchild,key);
}

//Iterative search....
Node* Isearch(Node *p,int key){
    while(p){
        if(p->data == key) return p;
        else if(p->data < key) p = p->rchild;
        else p = p->lchild;
    }
    return p;
}

//Deletion in a tree....
int Height(Node *p){
    int x,y;
    if(p){
        x = Height(p->lchild);
        y = Height(p->rchild);
        if(x>y) return x+1;
        else return y+1;
    }
    return 0;
    
}
Node* InorderPrecessor(Node* p){
    while(p->rchild!=NULL){
        p = p->rchild;
    }
    return p;
}
Node* InorderSuccessor(Node *p){
    while(p->lchild!=NULL){
        p = p->lchild;
    }
    return p;
}
Node* Delete(Node* p,int key){
    if(p==NULL) return NULL;
    if((p->data==key)&&(p->lchild==NULL && p->rchild==NULL)){
        if(root == p) root = NULL;
        delete p;
        return NULL;
    }
    if(key < p->data){
        p->lchild = Delete(p->lchild,key);
    }
    else if(key > p->data){
        p->rchild = Delete(p->rchild,key);
    }
    else{
        if(Height(p->lchild) > Height(p->rchild)){
            Node *q = InorderPrecessor(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild,q->data);
        }
        else{
            Node *q = InorderSuccessor(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild,q->data);
        }
    }

}
void Inorder(Node *p){
    if(p){
        Inorder(p->lchild);
        cout<<p->data<<" ";
        Inorder(p->rchild);
    }
}
int main(){
    RInsert(root,20);
    RInsert(root,40);
    RInsert(root,15);
    RInsert(root,9);
    RInsert(root,10);
    RInsert(root,20);
    RInsert(root,12);

    

    cout<<"The Inorder display of Binary serach tree is: ";
    Inorder(root);
    cout<<endl;

    Delete(root,50);
    Inorder(root);
    cout<<endl;

    Node *p = Rsearch(root,12);
    if(p!=NULL) cout<<p->data<<" is found."<<endl;
    else cout<<"Element is not found"<<endl;

}