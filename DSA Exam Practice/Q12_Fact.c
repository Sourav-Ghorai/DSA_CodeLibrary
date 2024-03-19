#include<stdio.h>
int fact(int n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter the no.: ");
    scanf("%d",&n);
    int f = fact(n);
    printf("The factorial is: %d\n",f);
}