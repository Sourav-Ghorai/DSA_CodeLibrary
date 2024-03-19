#include<iostream>
using namespace std;

//class of rectangle

class rectangle
{
    private:
      int length;
      int breadth;
    public:
      rectangle (int l, int b);
      int area();
      int perimeter();
	  int getlength(){
		return length;
		}
	  int getbreadth(){
		return breadth;
	  }
	  int setlength(int l){
		length = l;
	  }
	  int setbreadth(int b){
		breadth = b;
	  }
};

//defination of funtion in rectangle class

rectangle :: rectangle (int l, int b){
	length = l;
	breadth = b;
}
int rectangle :: area (){
	return length * breadth;
}
int rectangle :: perimeter (){
	int p = 2*(length + breadth);
	return p;
}

//class of triangle 

class triangle {
	private:
		int height;
		int base;
		int side;
	public:
		triangle(int h,int b, int s);
		int area ();
		int perimeter();
		int getheight(){
		return height;
		}
	    int getbase(){
		return base;
		}
		int getside(){
		return side;
	  }
};
//defination of funtion in triangle class
triangle :: triangle (int h , int b, int s){
	height = h;
	base = b;
	side = s;
}
int triangle :: area(){
	int a = (height * base)/2;
	return a;
}
int triangle :: perimeter (){
	return (height + base + side);
}
int main (){
    rectangle r(10,5);
	cout <<"The length and breadth of the rectangle are respectably : "<<r.getlength()<<" and "<<r.getbreadth()<<endl;
    cout<<"The area of the rectangle is "<<r.area()<<endl;
    cout<<"The perimeter of the rectangle is "<<r.perimeter()<<endl;
    triangle t(20,10,15);
	cout<<"The height, base and the side of an right angle triangle are: "<<t.getheight()<<","<<t.getbase()<<" and "<<t.getside()<<endl;
    cout << "The area of the triangle is "<<t.area()<<endl;
    cout << "The perimeter of the triangle is "<<t.perimeter()<<endl;
}
