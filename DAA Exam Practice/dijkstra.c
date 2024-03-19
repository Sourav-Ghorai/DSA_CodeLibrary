#include<stdio.h>

int minimum(int d[], int mark[], int n){
    int index, i, min = 9999;
    for(i = 0; i<n; i++){
        if(mark[i] == 0 && d[i]<min){
            min = d[i];
            index = i;
        }
    }
    return index;
}

void dijkstra(int n, int arr[][n]){
    int d[n], mark[n],source;
    int i,j;
    for(i = 0; i<n; i++){
        d[i] = 9999; mark[i] = 0;
    }
    printf("Enter the source node: ");
    scanf("%d",&source);
    d[source] = 0; mark[source] = 1;
    for(i = 0; i<n; i++){
        int node = minimum(d, mark,n);
        mark[node] = 1;
        for(j = 0; j<n; j++){
            if(arr[node][j] != -1){
                int t = d[node] + arr[node][j];
                if(t<d[j]) d[j] = t;
            }
        }
    }
    for(i = 0; i<n; i++){
        printf("%d ",d[i]);
    }
}

int main(){
    int n = 5;
    int arr[][5] = {{0,10,5,-1,-1},{-1,0,-1,2,-1},{-1,3,0,9,2},{-1,-1,-1,0,-1},{2,-1,-1,6,0}};
    dijkstra(n,arr);
}