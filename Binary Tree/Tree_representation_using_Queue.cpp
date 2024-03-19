#include<iostream>
using namespace std;
//creating a linke list to represent tree:
class Node{
    public:
        Node *lchild; 
        int val;
        Node *rchild;
};

//creating a Queue to store the address of each node of tree:

class Queue{
    public:
        int front;
        int rear;
        Node **Q;
    public:
        Queue(){
            front = rear = -1;
            Q = new Node*[1000];
        }
        void enqueue(Node* data);
        Node* dequeue();
        int isempty();
};
void Queue::enqueue(Node* data){
    rear++;
    Q[rear] = data;
}
Node* Queue::dequeue(){
    front++;
    Node* x = Q[front];
    return x;
}
int Queue::isempty(){
    if(rear==front) return 1;
    else return 0;
}

//creating class of the Tree:

class Tree{
    public:
        Node *root;
        Tree(){root=NULL;}
        void create();
        void pre_order_display(Node *p);
        void in_order_display(Node *);
        void post_order_display(Node *p);
        void level_order_display(Node *p);
        int Height(Node *p);
        int TotalNodes(Node *p);
        int Count_Internel_Child(Node *p);
        int Count_Externel_Child(Node *p);
};

//creating the tree:

void Tree::create(){
    Queue q; int x;
    Node *p,*t;
    root = new Node;
    cout<<"Enter the root value: ";
    cin>>x;
    root->val=x;
    root->lchild=NULL;
    root->rchild=NULL;
    q.enqueue(root);
    while(!q.isempty()){
        p=q.dequeue();
        cout<<"Enter left child of "<<p->val<<": ";
        cin>>x;
        if(x!=-1){
            t = new Node;
            t->val = x;
            p->lchild = t;
            t->lchild=t->rchild = NULL;
            q.enqueue(t);
        }
        cout<<"Enter right child of "<<p->val<<": ";
        cin>>x;
        if(x!=-1){
            t = new Node;
            t->val = x;
            p->rchild = t;
            t->lchild=t->rchild = NULL;
            q.enqueue(t);
        }
    }
}

//displaying the tree in various form:

void Tree:: pre_order_display(Node *p){
    if(p){
        cout<<p->val<<" ";
        pre_order_display(p->lchild);
        pre_order_display(p->rchild);
    }
}
void Tree:: in_order_display(Node *p){
    if(p){
        in_order_display(p->lchild);
        cout<<p->val<<" ";
        in_order_display(p->rchild);
    }
}
void Tree:: post_order_display(Node *p){
    if(p){
        post_order_display(p->lchild);
        post_order_display(p->rchild);
        cout<<p->val<<" ";
    }
}
void Tree:: level_order_display(Node *p){
    Queue q;
    cout<<p->val<<" ";
    q.enqueue(p);
    while(!q.isempty()){
        p=q.dequeue();
        if(p->lchild){
            cout<<p->lchild->val<<" ";
            q.enqueue(p->lchild);
        }
        if(p->rchild){
            cout<<p->rchild->val<<" ";
            q.enqueue(p->rchild);
        }
    }
}

int Tree::Height(Node *p){
    int x,y;
    if(p){
        x=Height(p->lchild);
        y=Height(p->rchild);
        if(x>y) return x+1;
        else return y+1;
    }
    return 0;
}
int Tree::TotalNodes(Node *p){
    int x,y;
    if(p){
        x=TotalNodes(p->lchild);
        y=TotalNodes(p->rchild);
        return x+y+1;
    }
    return 0;
}

int Tree::Count_Internel_Child(Node *p){
    int x,y;
    if(p){
        x = Count_Internel_Child(p->lchild);
        y = Count_Internel_Child(p->rchild);
        
        if(p->lchild !=NULL || p->rchild!=NULL){
            return x+y+1;
        }
        else return x+y;
    }
    return 0;
}

int Tree::Count_Externel_Child(Node *p){
    int x,y;
    if(p){
        x = Count_Externel_Child(p->lchild);
        y = Count_Externel_Child(p->rchild);
        
        if(p->lchild ==NULL && p->rchild==NULL){
            return x+y+1;
        }
        else return x+y;
    }
    return 0;
}

//Main function: 

int main(){
    Tree tr;
    tr.create();
    
    cout<<"The preorder representation is: ";
    tr.pre_order_display(tr.root);
    cout<<endl;

    cout<<"The inorder representation is: ";
    tr.in_order_display(tr.root);
    cout<<endl;

    cout<<"The postorder representation is: ";
    tr.post_order_display(tr.root);
    cout<<endl;

    cout<<"The level order representation is: ";
    tr.level_order_display(tr.root);
    cout<<endl;

    int x=tr.TotalNodes(tr.root);
    cout<<"Total nodes of the tree is: "<<x<<endl;

    x = tr.Height(tr.root);
    cout<<"The height of the tree is: "<<x<<endl;

    x = tr.Count_Internel_Child(tr.root);
    cout<<"The no. of Internel node in the tree is: "<<x<<endl;

    x = tr.Count_Externel_Child(tr.root);
    cout<<"The no. of Externel node in the tree is: "<<x<<endl;
}
