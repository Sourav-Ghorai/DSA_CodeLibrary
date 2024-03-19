#include<iostream>
using namespace std;
class Diagonal{
    private:
        int n;
        int *A;
    public:
        Diagonal(int n){
            this->n=n;
            A = new int[n];
        }
        void set(int i,int j,int item);
        int get(int i,int j);
        void display();
        ~Diagonal(){
            delete[]A;
        }
};
void Diagonal::set(int i,int j,int item){
    if(i==j) A[i-1]=item;
}
int Diagonal::get(int i,int j){
    if(i==j) return A[i-1];
    else return 0;
}
void Diagonal::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) cout<<A[i]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
int main(){
    Diagonal d(3);
    d.set(1,1,4);d.set(2,2,5);d.set(3,3,6);
    cout<<d.get(2,2)<<endl;
    d.display();
}