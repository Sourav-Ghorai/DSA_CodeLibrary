#include <stdio.h>
void insertion();
void deletion();
void print(int arr[],int n){
    int k;
    printf("The final array after the insertion process is: ");
            for (k = 0; k < n; k++)
            {
                printf("%d ", arr[k]);
            }
            printf("\n\n");
}
int main()
{
    int choice, n;

    while (1)
    {
        printf("Enter your choice:\n1. For insertion\n2. For deletion.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: 
            insertion();
            break;
        case 2:

        default:
            exit();
        }
    }
}
void insertion()
{
    printf("Enter the array size: ");
    int n;
    scanf("%d", &n);
    n = n + 1;
    int arr[n];

    int m, input, i, j,k;
    printf("Enter the array value: ");
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Please enter position where you want to insert an element: ");
    scanf("%d", &m);
    printf("Please enter the insert value: ");
    scanf("%d", &input);
    for (j = n - 2; j >= m - 1; j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[m - 1] = input;
    print(arr,n);
}