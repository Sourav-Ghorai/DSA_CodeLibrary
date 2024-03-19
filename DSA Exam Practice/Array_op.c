#include<stdio.h>
void display(int arr[],int n){
    int i;
    printf("The elements in the array are: ");
    for(i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insertion(int arr[],int *n){
    int index,data,i;
    printf("Enter the position: ");
    scanf("%d",&index);
    if(index<1 || index>*n+1){
        printf("Enter valid index: \n");
        return;
    }
    printf("Enter the value: ");
    scanf("%d",&data);
    for(i=*n-1;i>=index;i--){
        arr[i+1] = arr[i];
    }
    arr[i+1] = arr[i];
    arr[index-1] = data;
    *n = *n+1;
}

void deletion(int arr[],int *n){
    int index,data,i;
    printf("Enter the position: ");
    scanf("%d",&index);
    if(index<1 || index>*n){
        printf("Enter valid index: \n");
        return;
    }
    data = arr[index-1];
    printf("The deleted item is: %d",data);
    printf("\n");
    for(i=index-1;i<*n;i++){
        arr[i] = arr[i+1];
    }
    *n = *n-1;
}
int main(){
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[100];
    printf("Enter the elements in the array: ");
    for (i = 0;i<n; i++){
        scanf("%d",&arr[i]);
    }
    int flag = 1;
    while(flag){
        int ch;
        printf("1.Insertion 2.Deletion 3.Display 4.Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                insertion(arr,&n);
                display(arr,n);
                break;
            case 2:
                deletion(arr,&n);
                display(arr,n);
                break;
            case 3:
                display(arr,n);
                break;
            case 4:
                printf("--------------EXIT--------------\n");
                flag = 0;
                break;
            default:
                printf("Invalid Input\n");
                break;
        }
    }
}