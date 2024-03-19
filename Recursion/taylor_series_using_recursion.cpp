#include <iostream>
using namespace std;
float e(int x, int n);
int main() {
   int x,n;
   float m;
   cout<<"The value of x: ";
   cin>>x;
   n = x*10;
   m = e(x,n);
   cout<<m;
   return 0;
}
float e(int x, int n){
    static float p=1,f=1;
    float r;
    if(n==0){
       return 1;
    }
    r = e(x,n-1);
    p = p*x;
    f = f*n;
    return (r+p/f);
}