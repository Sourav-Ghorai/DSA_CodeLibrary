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
    for(i = 0;i<n;i++){
        min = arr[i];
        t = i;
        for(j = i;j<n;j++){
            if(arr[j]<min){
                 min = arr[j];
                 t = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[t];
        arr[t] = temp;
    }
    
    printf("\nElements after sorting is: ");
    for(i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}