#include<stdio.h>
int main(){
    int n,i,j,min,t;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements before sorting is: ");
    for(i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(i = 1;i<n;i++){
        t = arr[i];
        for(j = i-1;j>=0 && arr[j]>t;j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = t;
    }
    printf("\nElements after sorting is: ");
    for(i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}