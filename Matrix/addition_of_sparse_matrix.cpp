#include<iostream>
using namespace std;

 class Element{
    public:
        int i;
        int j;
        int x;
};

class Sparse {
    private:
        int m;
        int n;
        int num;
        Element *A;
    public:
        Sparse(){m=0,n=0;}
        void create(Sparse *s);
        void Display(Sparse s);
        void addition(Sparse s1,Sparse s2,Sparse *sum);
};

void Sparse::create(Sparse *s){
    cout<<"Enter the dimension of Matrix: ";
    cin>>s->m>>s->n;
    cout<<"Enter the number of non zero element: ";
    cin>>s->num;
    s->A=new Element[s->num];
    cout<<"Enter the row, column and the non-zero element:"<<endl;
    for(int i = 0;i<s->num;i++){
        cin >>s->A[i].i >>s->A[i].j >>s->A[i].x;
    }
}

void Sparse::Display(Sparse s){
    int k=0;
    for(int i = 0;i<s.m;i++){
        for(int j = 0;j<s.n;j++){
            if(i==s.A[k].i && j==s.A[k].j){
                cout<<s.A[k].x<<" ";
                k++;
            }
            else {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

void Sparse::addition(Sparse s1,Sparse s2,Sparse *sum){
    if(s1.m!=s2.m || s1.n!=s2.n){
        cout<<"Addition is not Possible....Plase enter valid dimension:"<<endl;
    }
    
    else{
        sum->m=s1.m; sum->n=s1.n; sum->A = new Element[s1.num+s2.num];
        int i=0,j=0,k=0;
        while(i<s1.num && j<s2.num){
            if(s1.A[i].i<s2.A[j].i){
                sum->A[k]=s1.A[i];
                i++;k++;
            }
            else if(s1.A[i].i > s2.A[j].i){
                sum->A[k]=s2.A[j];
                j++;k++;
            }
            else{
                if(s1.A[i].j<s2.A[j].j){
                    sum->A[k]=s1.A[i];
                    k++;i++;
                }
                else if(s1.A[i].j>s2.A[j].j){
                    sum->A[k]=s2.A[j];
                    k++;j++;
                }
                else {
                    sum->A[k]=s1.A[i];
                    sum->A[k].x=s1.A[i].x+s2.A[j].x;
                    i++;j++;k++;
                }
            }
        }
        while(i<s1.num){
            sum->A[k]=s1.A[i];
            k++;i++;
        }
        while(j<s2.num){
            sum->A[k]=s2.A[j];
            k++;j++;
        }
        sum->num=k;
    }
}
int main(){
    Sparse s1;
    Sparse s2;
    Sparse sum;

    cout<<endl<<"Enter the information of the 1st Matrix: "<<endl;
    s1.create(&s1);

    cout<<endl<<"Enter the information of the 2nd Matrix: "<<endl;
    s2.create(&s2);

    cout<<"The 1st Matrix is: "<<endl; s1.Display(s1);
    cout<<"The 2nd Matrix is: "<<endl; s2.Display(s2);

    sum.addition(s1,s2,&sum);
    cout<<"The addition matrix is: "<<endl; sum.Display(sum);
}