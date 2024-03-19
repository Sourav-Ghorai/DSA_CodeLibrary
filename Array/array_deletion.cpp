#include<iostream>
using namespace std;
void deleteprint(int arr[],int n);
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" no. in the array."<<endl;
    for(int i = 0;i<n; i++){
        cin>>arr[i];
    }
    
     deleteprint(arr,n);
}
void deleteprint(int arr[],int n){
    int a,b;
    cout<<"in which position no.  you want to delete: ";
    cin>>a;
    cout<<"The deleted no. is: "<<arr[a-1]<<endl;

    for (int i = a; i<n; i++){
        arr[i-1] = arr[i];
    }
    n = n-1;
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}