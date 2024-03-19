#include<stdio.h>

int ans[100];
int temp[100][100];
int count = 0;
void display(int n){

    int i;
    for(i = 0; i<n; i++){
        temp[count][i] = ans[i];
    }
    count++;

    // int i;
    // for(i = 0; i<n; i++){
    //     printf("%d ",ans[i]+1);
    // }
    // printf("\n");
}

int isSafe(int i, int k){
    int j;
    for(j = 0; j<k; j++){
        int col = ans[j] - i; int row = j - k;
        if(col<0) col *= -1;
        if(row<0) row *= -1;
        if(ans[j] == i || col == row) return 0;
    }
    return 1;
}

void nqueen(int k, int n){
    int i;
    for(i = 0; i<n; i++){
        if(isSafe(i,k)){
            ans[k] = i;
            if(k == n-1) display(n);
            else nqueen(k+1,n);
        }
    }
}
int main(){
    int n;
    printf("Enter the no. of queen: ");
    scanf("%d",&n);
    nqueen(0,n);
    printf("%d ",count);
}