#include<stdio.h>
int main(){
    int A[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    printf("%u,%u,%u,%u",A,A+3,*(A+3),*(*(A+2)+3));
}