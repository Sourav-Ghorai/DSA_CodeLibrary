#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row no. "<<endl;
    cin>>n;
    int i,j,k,l;
    for(i = 0;i<n; i++){
        for(j = 0; j<n-i;j++)
            cout<<j+1<<" ";
        for(k = 0;k<2*i; k++){
            cout<<"*"<<" ";
        }
        for(l = 0; l<n-i;l++){
            cout<< 2*n-(j+k)-l<<" ";

        }
        cout<<endl;
    }
}