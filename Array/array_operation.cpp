#include<bits/stdc++.h>
using namespace std;
struct Array{
    int A[20];
    int size ;
    int length;
};
void Display(struct Array arr){
    cout<<"\nThe elements in the array are: ";
    for(int i = 0;i<arr.length;i++){
        cout <<arr.A[i]<<" ";
    }
}
void leftReverse(struct Array *arr){
    int t = arr->A[0];
    for(int i = 0;i<arr->length;i++){
        arr->A[i] = arr->A[i+1];
    }
    arr->A[arr->length-1] = t;
}
void negativeToleft(struct Array *arr){
    int i = 0,j = arr->length-1;
    while(i<j){
        while(arr->A[i]<0) i++;
        while(arr->A[j]>=0) j--;
        if(i<j){
            int t = arr->A[i];
            arr->A[i] = arr->A[j];
            arr->A[j] = t;
        }
    }
}
int main(){
    struct Array arr = {{5,2,-4,8,6,7,-10,21,45,-12},20,10};
    leftReverse(&arr);
    Display(arr);
    sort(arr.A,arr.A+arr.length);
    negativeToleft(&arr);
    Display(arr);
}