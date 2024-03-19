#include<stdio.h>
void delete(int arr[],int n);
int main()
{
    int n,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d element in the array: ",n);
    for(i = 0;i<n; i++){
        scanf("%d",&arr[i]);
    }
    delete(arr,n);
}
void delete(int arr[],int n){
    int a,b,i,j;
    printf("in which position you want to delete a no. ");
    scanf("%d",&a);
    for (i = a; i<n; i++){
        arr[i-1] = arr[i];
    }
    n = n-1;
    for (j=0; j<n; j++){
        printf("%d ",arr[j]);
    }
}