#include<stdio.h>
int temp[10];
void merge(int arr[],int lw,int up,int mid){
    int i=lw,j=mid+1,k=lw;
    while(i<=mid && j<=up){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            i++;k++;
        }
        else if(arr[j]<arr[i]){
            temp[k] = arr[j];
            j++;k++;
        }
        else{
            temp[k] = arr[i];
            k++;
            temp[k] = arr[i];
            i++;j++;k++;
        }
    }
    while(i<=mid){
        temp[k] = arr[i];
        k++;i++;
    }
    while(j<=up){
        temp[k] = arr[j];
        k++;j++;
    }
    for(i = lw;i<k;i++){
        arr[i] = temp[i];
    }
}
void merge_sort(int arr[],int lw,int up){
    if(lw<up){
    int mid = (lw+up)/2;
    merge_sort(arr,lw,mid);
    merge_sort(arr,mid+1,up);
    merge(arr,lw,up,mid);
    }
}
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
    int lw = 0,up = n-1;
    merge_sort(arr,lw,up);
    for(i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}