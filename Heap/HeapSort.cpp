#include<iostream>
using namespace std;

void display(int n, int arr[]){
    
    for(int i = 1; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void create(int i, int n, int arr[]){
    if(2*i>n) return;
    else{
        int a = -1, b = -1;
        if(2*i <= n) a = arr[2*i];
        if(2*i + 1 <= n) b = arr[2*i+1];

        if(a != -1 || b != -1){
            int index;
            if(a>b) {
                index = 2*i;
            }
            else index = 2*i + 1;
            if(arr[index]>arr[i]){
                swap(arr[index], arr[i]);
                create(index, n, arr);
            } 
        }
    }
}

void createHeap(int n, int arr[]){
    for(int i = n; i>0; i--){
        create(i, n, arr);
    }
}

void HeapSort(int n, int arr[]) {
    
    int m = n;
    
    for(int i = 1; i<=n; i++){
        swap(arr[1], arr[m]); m--;
        int j = 1;
        while(2*j <= m){
            
            int a = -1, b = -1,index;
            if(2 * j <= m) a = arr[2 * j];
            if(2 * j + 1 <= m) b = arr[2 * j + 1];
            
            if(a != -1 || b != -1){
                if(a>b) index = 2*j;
                else index = 2*j+1;
                
                if(arr[index]>arr[j]){
                    swap(arr[index], arr[j]);
                    j = index;
                }
                else break;
            }
            else break;
        }
    }
}


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n+1]; arr[0] = 0;
    cout<<"Enter elements in the array: ";
    for(int i = 1; i<=n; i++){
        cin>>arr[i];
    }
    createHeap(n,arr);
    cout<<"The Max Heap is: ";
    display(n, arr);
    HeapSort(n, arr);
    cout<<"The Sorted array is: ";
    display(n, arr);
}