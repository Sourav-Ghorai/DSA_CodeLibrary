#include<iostream>
using namespace std;
class Lower_tri{
    private:
        int n;
        int *A;
    public:
        Lower_tri(int n){
                this->n=n;
                A = new int[n*(n+1)/2];
        }
        void set(int i,int j,int item);
        void display();
};
void Lower_tri::set(int i,int j,int item){
    if(i>=j) A[(i*(i-1))/2+j-1]=item;
}
void Lower_tri::display(){
    cout<<"Your input lower triangular matrix is: "<<endl;
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i>=j) cout<<A[(i*(i-1))/2+j-1]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
int main(){
    int x,t;
    cout<<"Enter the size: ";
    cin>>x;
    Lower_tri T(x);
    cout<<"Enter all the elements in the matrix: "<<endl;
    for(int i = 1;i<=x;i++){
        for(int j = 1;j<=x;j++){
            cin>>t;
            T.set(i,j,t);
        }
       // T.display();
    }
    T.display();
}