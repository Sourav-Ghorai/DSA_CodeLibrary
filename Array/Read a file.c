#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("file_test.c","r");
    char ch;
    fscanf (ptr,"%c",&ch);
    while (ch != EOF){
        printf("%c",ch);
        ch = fgetc (ptr);
        //fscanf (ptr,"%c",&ch);
    }
    fclose(ptr);
    return 0;
}