#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of element: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in sorted way: ");
    int i;
    for(i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    int lw = 0,up = n-1,mid,key,flag=0;
    printf("Enter the element to find: ");
    scanf("%d",&key);
    while(lw<=up){
        mid = (lw+up)/2;
        if(arr[mid]<key){
            lw = mid+1;
        }
        else if(arr[mid]>key){
            up = mid-1;
        }
        else{
            printf("Element is found.");
            flag = 1;
            break;
        }
    }
    if(flag ==0) printf("Element is not found.");   
}