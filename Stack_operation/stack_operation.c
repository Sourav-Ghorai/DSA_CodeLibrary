#include<stdio.h>
int top=-1;
void push(int* arr, int n,int element){
	if(top==n-1) {
		printf("Stack is full\n");
		return top;
	}
	top++;
	arr[top]=element;
}
void pop(int* arr){
	if(top==-1){
		printf("Stack is empty\n");
	}
	top--;
}

void print(int* arr){
	if(top==-1) printf("Stack is empty\n");
	int i;
	printf("Stack Elements: ");
	for(i=0;i<=top;i++) printf("%d ",arr[i]);
	printf("\n");
}
int main(){
	int n;
	printf("Enter size of stack: ");
	scanf("%d",&n);
	int arr[n];
	int f=1;
	
	while(f){
		printf("Press 1 to push, 2 to pop, 3 to get the top element, 4 to get the size, 5 to print the top element and 6 to exit.\n");
		int ch,k;
		printf("Enter choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter element: ");
				scanf("%d",&k);
				push(arr,n,k);
				break;
			case 2:
				if(top!=-1)
				printf("%d is deleted\n",arr[top]);
				pop(arr);
				break;
			case 3:
				printf("Top = %d\n", arr[top]);
				break;
			case 4:
				if(top!=-1)
				printf("Size = %d\n",top+1);
				break;
			case 5:
				print(arr);
				break;
			default:
				printf("Exit...\n");
				f=0;
				break;
		}
	}
}
