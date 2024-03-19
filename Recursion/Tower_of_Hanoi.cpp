#include<iostream>
using namespace std;
int toh(int n, int ,int ,int);
int main (){
    int n,m;
    cout <<"Enter the no. of rings: "<<endl;
    cin>>n;
    int a = 1,b = 2,c = 3;
    cout <<"Follow the following steps to move the rings: "<<endl;
    m = toh(n,a,b,c);
    cout<<"And the total no. of steps required is: "<<m<<endl;
   
}
int toh(int n, int a,int b,int c){
    static int steps=0;
   
    if (n>0){
        steps++;
        toh(n-1,a,c,b);
        cout<<a<<" to "<<c<<endl;
        toh(n-1,b,a,c);
        return steps;
    }
}