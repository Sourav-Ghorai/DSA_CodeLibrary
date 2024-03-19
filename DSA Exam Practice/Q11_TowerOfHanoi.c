#include<stdio.h>
int toh(int a,int b,int c,int n){
    static int steps = 0;
    if(n>0){
        steps ++;
        toh(a,c,b,n-1);
        printf("Move %d to %d.\n",a,c);
        toh(b,a,c,n-1);
        return steps;
    }
}
int main(){
    int n;
    printf("Enter the no. of rings: ");
    scanf("%d",&n);
    int a,b,c;
    a = 1,b = 2, c= 3;
    int m = toh(a,b,c,n);
    printf("Total no. of steps required is: %d\n",m);
}