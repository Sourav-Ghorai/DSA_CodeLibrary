#include<iostream>
using namespace std;
class square
{
    private:
       int length;
    public:

    square(int n);
    int area();
    int perimeter();
};
square :: square(int n){
     length = n;
}
int square :: area(){
    return length*length;
}
int square :: perimeter(){
    return 4*length;
}
int main(){
    int n;
    cout<<"Enter the length of the square: ";
    cin>>n;
    square s(n);
    cout<<"The area of the square is "<<s.area()<<endl;
    cout<<"The perimeter of the square is : "<<s.perimeter()<<endl;
}