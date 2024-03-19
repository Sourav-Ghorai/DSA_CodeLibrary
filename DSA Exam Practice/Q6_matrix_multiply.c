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
void multiplication(){
    int m,n,s,t;
    int i,j,k;
    printf("Enter the row and column of the first matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the row and column of the second matrix: ");
    scanf("%d%d",&s,&t);
    if(n!=s){
        printf("Multiplication is not possible.");
        return;
    }
    int arr1[m][n];
    int arr2[s][t];
    int arr[m][t];
    printf("Enter the value of the first matrix: \n");
    for(i = 0;i<m;i++){
        for(j = 0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the value of the second matrix: \n");
    for(i = 0;i<s;i++){
        for(j = 0;j<t;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i = 0;i<m;i++){
        for(j = 0;j<t;j++){
            int s = 0;
            for(k = 0;k<n;k++){
                s = s + arr1[i][k]*arr2[k][j];
            }
            arr[i][j] = s;
        }
    }

    printf("The first matrix is : \n");
    display(m,n,arr1);
    printf("The second matrix is : \n");
    display(s,t,arr2);
    printf("The multiply matrix is: \n");
    display(m,n,arr);
}
int main(){

    multiplication();
    
}