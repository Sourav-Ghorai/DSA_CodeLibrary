
#include <iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
int fact(int n){
return (n==0||n==1)?1: n*fact(n-1);
}
int main() {
    
 cout <<fact(5);
    return 0;
}