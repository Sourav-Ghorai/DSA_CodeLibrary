#include<stdio.h>
int partion(int arr[],int lw,int up){
    int a = lw+1;
    int b = up;
    while(a<b){
        while(arr[a]<arr[lw]) a++;
        while(arr[b]>arr[lw]) b--;
        if(a<b){
            int t = arr[a];
            arr[a] = arr[b];
            arr[b] = t;
        }
    }
    int t = arr[lw];
    arr[lw] = arr[b];
    arr[b] = t;
    return b;

}
void Quick_sort(int arr[],int lw,int up){
    if(lw<=up){
    int pos = partion(arr,lw,up);
    Quick_sort(arr,lw,pos-1);
    Quick_sort(arr,pos+1,up);
    }
    return;
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
    Quick_sort(arr,lw,up);
    for(i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}