#include<iostream>
using namespace std;
void permutation(char s[],int k){
    static int A[5]={0};
    static char result[5];
    if(s[k]=='\0'){
        result[k]='\0';
        cout<<result<<endl;
    }
    else{
        for(int i = 0;s[i]!='\0';i++){
            if(A[i]==0){
                result[k]=s[i];
                A[i]=1;
                permutation(s,k+1);
                A[i]=0;
            }
        }
    }
}
int main(){
    char s[] = "ABCD";
    permutation(s,0);
}