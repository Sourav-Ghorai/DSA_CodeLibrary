#include<stdio.h>
int front,rear;
void display(int arr[],int n){
    if(front==-1){
        printf("Queue Underflow\n");
        return;
    }
    int i;
    printf("The queue is: ");
    for(i = front;i<=rear; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insertion(int arr[],int n){
    if(rear == n-1){
        printf("Queue overflow.\n");
        return;
    }
    int data;
    printf("Enter value: ");
    scanf("%d",&data);
    if(rear == -1){
        rear = front = 0;
    }
    else rear++;
    arr[rear] = data;
    
}
void deletion(int arr[],int n){
    if(front == -1){
        printf("Queue Underflow\n");
        return;
    }
    printf("The deleted item is: %d\n",arr[front]);
    if(front == rear){
        front = rear = -1;
    }
    else front++;
}
int main(){
    int n;
    printf("Enter the size of the queue: ");
    scanf("%d",&n);
    int arr[n];
    front = rear = -1;
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