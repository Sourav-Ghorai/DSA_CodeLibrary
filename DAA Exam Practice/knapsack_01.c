#include<stdio.h>

int max(int a, int b){
    if(a>b) return a;
    return b;
}
int main(){
    int n = 4;
    int w[]= {3, 4, 6, 5};
    int p[] = {2, 3, 1, 4};
    int cap = 8;
    int mat[n+1][cap+1];

    int i, j;
    for(i = 0; i<=n; i++){
        for(j = 0; j<=cap; j++){
            if(i == 0 || j == 0) mat[i][j] = 0;
            else if(j>=w[i-1]){
                mat[i][j] = max(mat[i-1][j], p[i-1] + mat[i-1][j-w[i-1]]);
            }
            else mat[i][j] = mat[i-1][j];
        }
    }
    printf("%d",mat[n][cap]);
}