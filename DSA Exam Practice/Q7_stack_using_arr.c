#include<stdio.h>
int top = -1;
void display(int arr[],int n){
    if(top==-1){
        printf("Stack Underflow\n");
        return;
    }
    int i;
    printf("The stack is: ");
    for(i = 0;i<=top;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insertion(int arr[],int n){
    if(top==n-1){
        printf("Stack overflow.\n");
        return;
    }
    top = top+1;
    int data;
    printf("Enter the value: ");
    scanf("%d",&data);
    arr[top] = data;
}
void deletion(int arr[],int n){
    if(top==-1){
        printf("Stack Underflow.\n");
        return;
    }
    printf("The deleted item is: %d\n",arr[top]);
    top--;
}
int main(){
    int n;
    printf("Enter the size of the stack: ");
    scanf("%d",&n);
    int arr[n];
    int flag = 1;
    while(flag){
        int ch;
        printf("1.Insetion 2.Deletion 3.Display 4.Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                insertion(arr,n);
                break;
            case 2:
                deletion(arr,n);
                break;
            case 3:
                display(arr,n);
                break;
            case 4:
                printf("-------Exit-------");
                flag = 0;
                break;
            default:
                printf("Invalid Input\n");
        }
    }
}