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

    for(i = 0;i<n;i++){
        int min = arr[i];
        int t = i;
        for(j = i+1;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                t = j;
            }
        }
        int temp = arr[i];
        arr[i] = min;
        arr[t] = temp;
    }
    for(i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}