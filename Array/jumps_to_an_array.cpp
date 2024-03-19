#include<iostream>
using namespace std;
int main(){
    int n,count = 0;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array: ";
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    // int i = 0;
    // while(i<n-1){
    //     i = arr[i]+i;
    //     count++;
    // }
    int current,maxind,jump=0;
    for(int i=0;i<n;i++){
        current=arr[i];
        int max=0;
        if(i+current>=n-1) break;
        for(int j=i+1;j<=i+current;j++){
            if(arr[j]>max) {
                max=arr[j];
                maxind=j;
            }
        }
        i=maxind;
        jump++;
    }
    cout<<"The no. of total jumps required is: "<<jump<<endl;
}