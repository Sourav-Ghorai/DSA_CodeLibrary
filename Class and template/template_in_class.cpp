#include <iostream>
using namespace std;
template <class t>
class Arithmatic
{
private:
    t a;
    t b;

public:
    Arithmatic(t a, t b);
    t summation();
    t substraction();
    t multiplication();
    t division();
};
template <class t>
Arithmatic<t>::Arithmatic(t a, t b)
{
    this->a = a;
    this->b = b;
}
template <class t>
t Arithmatic<t>::summation()
{
    return a + b;
}
template <class t>
t Arithmatic<t>::multiplication()
{
    return a * b;
}
template <class t>
t Arithmatic<t>::substraction()
{
    return a - b;
}
template <class t>
t Arithmatic<t>::division()
{
    return a / b;
}
int main()
{
    Arithmatic<int> ar(10, 4);
    cout << "The summation of two numbers is: " << ar.summation() << endl;
    cout << "The multiplication of two numbers is: " << ar.multiplication() << endl;
    cout << "The substraction of two numbers is: " << ar.substraction() << endl;
    cout << "The division of two numbers is: " << ar.division() << endl;
    Arithmatic<float> ar1(12.5, 5.25);
    cout << "The summation of two numbers is: " << ar1.summation() << endl;
    cout << "The multiplication of two numbers is: " << ar1.multiplication() << endl;
    cout << "The substraction of two numbers is: " << ar1.substraction() << endl;
    cout << "The division of two numbers is: " << ar1.division() << endl;
}