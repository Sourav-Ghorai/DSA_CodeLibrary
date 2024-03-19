#include<iostream>
using namespace std;

struct Element{
    int i;
    int j;
    int x;
};

struct Sparse {
    private:
        int m;
        int n;
        int num;
        Element *A;
    public:
        Sparse(){m=0,n=0;}
        void create();
        void Display();
};

void Sparse::create(){
    cout<<"Enter the dimension: ";
    cin>>m>>n;
    cout<<"Enter the number of non zero element: ";
    cin>>num;
    A=new Element[num];
    cout<<"Enter the row, column and the non-zero element:"<<endl;
    for(int i = 0;i<num;i++){
        cin >>A[i].i >>A[i].j >>A[i].x;
    }
}
void Sparse::Display(){
    cout<<"The Matrix is: "<<endl;
    int k=0;
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            if(i==A[k].i && j==A[k].j){
                cout<<A[k].x<<" ";
                k++;
            }
            else {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
int main(){
    Sparse s;
    s.create();
    s.Display();
}