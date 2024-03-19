#include<stdio.h>
void insert(int arr[],int n);
int main()
{
    int n,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter %d element in the array: ",n);
    for(i = 0;i<n; i++){
        scanf("%d",&arr[i]);    
    }
    n = n+1;
    insert(arr,n);
}
void insert(int arr[],int n){
    int a,b,i,j;
    printf("in which position you want to insert a no. ");
    scanf("%d",&a);
    printf("which no. you want to insert: ");
    scanf("%d",&b);
    for (i = n-2; i>=a-1; i--){
        arr[i+1] = arr[i];
    }
    arr[a-1] = b;
    for (j=0; j<n; j++){
        printf("%d ",arr[j]);
    }
}