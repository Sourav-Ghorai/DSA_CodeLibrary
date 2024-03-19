#include<iostream>
using namespace std;
void insert(int arr[],int n);
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter "<<n<<" no. in the array."<<endl;
    for(int i = 0;i<n; i++){
        cin>>arr[i];
    }
    
    n = n+1;
    insert(arr,n);
}
void insert(int arr[],int n){
    int a,b;
    cout<<"in which position you want to insert a no. ";
    cin>>a;
    cout <<"which no. you want to insert: ";
    cin>>b;
    for (int i = n-2; i>=a-1; i--){
        arr[i+1] = arr[i];
    }
    arr[a-1] = b;
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}