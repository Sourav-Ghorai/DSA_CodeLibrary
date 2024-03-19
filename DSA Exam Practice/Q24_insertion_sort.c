#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in the array: ");
    for(i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i = 1;i<n;i++){
        int t = arr[i];
        for(j = i-1;j>=0 && arr[j]>t; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = t;
    }
    for(i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}