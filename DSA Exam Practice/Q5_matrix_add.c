#include<stdio.h>
void display(int m , int n, int arr[m][n]){
    int i , j;
    for(i = 0;i<m; i++){
        for(j = 0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void addition(){
    int m,n;
    int i,j;
    printf("Enter the row: ");
    scanf("%d",&m);
    printf("Enter the column: ");
    scanf("%d",&n);
    int arr1[m][n];
    int arr2[m][n];
    int arr[m][n];
    printf("Enter the value of the first matrix: \n");
    for(i = 0;i<m;i++){
        for(j = 0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the value of the second matrix: \n");
    for(i = 0;i<m;i++){
        for(j = 0;j<n;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for (i = 0;i<m;i++){
        for(j = 0;j<n; j++){
            arr[i][j] = arr1[i][j]+arr2[i][j];
        }
    }

    printf("The first matrix is : \n");
    display(m,n,arr1);
    printf("The second matrix is : \n");
    display(m,n,arr2);
    printf("The addition matrix is: \n");
    display(m,n,arr);
}
void transpose(){
    int m,n;
    int i,j;
    printf("Enter the row: ");
    scanf("%d",&m);
    printf("Enter the column: ");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the value of the matrix: \n");
    for(i = 0;i<m;i++){
        for(j = 0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The original matrix is: \n");
    display(m,n,arr);
    for(i = 0;i<m;i++){
        for(j = i;j<n;j++){
            int t = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = t;
        }
    }
    printf("The transpose is: \n");
    display(m,n,arr);
}
int main(){
    int flag = 1;
    while(flag){
        int ch;
        printf("1.Addition 2.Transpose 3.Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                addition();
                break;
            case 2:
                transpose();
                break;
            case 3:
                printf("-------EXIT-------\n");
                flag = 0;
                break;
            default:
                printf("Invalid input\n");
                break;
        }
    }
}