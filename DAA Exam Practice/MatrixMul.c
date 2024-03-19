#include<stdio.h>

void matrixMul(int arr[], int n){
    int i, j, k, d;
    int mat[n+1][n+1];
    for(i = 0; i<=n; i++){
        for(j = 0; j<=n; j++){
            mat[i][j] = 0;
        }
    }

    for(d = 1; d<n; d++){
        for(i = 1; i<= n-d; i++){
            j = i+d;
            mat[i][j] = 99999;
            for(k = i; k<j; k++){
                int temp = mat[i][k] + mat[k+1][j] + arr[i-1] * arr[k] * arr[j];
                if(temp<mat[i][j]) mat[i][j] = temp;
            }
        }
    }
    printf("%d ", mat[1][n]);
}

int main(){
    printf("Enter the no. of Matrices: ");
    int n, i;
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter the dimensions of the Matrices: ");
    for(i = 0; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    matrixMul(arr, n);
}