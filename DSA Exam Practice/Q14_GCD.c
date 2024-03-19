#include<stdio.h>
int GCD(int m,int n){
    if(n%m==0) return m;
    else GCD(m-1,n);
}
int main(){
    int m,n,ans;
    printf("Enter the two no.: ");
    scanf("%d%d",&m,&n);
    if(m<n) ans = GCD(m,n);
    else ans = GCD(n,m);
    printf("The GCD is: %d",ans);
}