#include<stdio.h>

void display(int n, int arr[][n]){
    int i,j;
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void floyd_warshall(int n, int arr[][n]){
    int i, j, k;
    for(k = 0; k<n; k++){
        for(i = 0; i<n; i++){
            for(j = 0; j<n; j++){
                int temp = arr[i][k] + arr[k][j];
                if(temp<arr[i][j]) arr[i][j] = temp;
            }
        }
    }
}

int main(){
    int n,i,j;
    printf("Enter the no. of vertices: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the adjacency matrix: \n");
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    floyd_warshall(n,arr);
    display(n, arr);
}