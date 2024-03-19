#include<stdio.h>
int main(){
    int n,i,j;
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
    int t =1;
    for(i = 0;i<n && t ==1;i++){
        t = 0;
        for(j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
                t =1;
            }
        }
    }
    printf("\nElements after sorting is: ");
    for(i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}