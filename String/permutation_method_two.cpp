#include<iostream>
using namespace std;
void permutation(char s[],int lw, int hi){
    if(lw == hi){
        cout<<s<<endl;
    }
    else{
        for(int i = lw;i<=hi;i++){
            swap(s[i],s[lw]);
            permutation(s,lw+1,hi);
            swap(s[i],s[lw]);
        }
    }
}
int main(){
    char s[] = "ABCD";
    permutation(s,0,3);
}