#include <iostream>
#include <stdio.h>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b) // constructor
    {

        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
};

main()
{
    cout << "Demonstration of class and related concepts" << endl;
    Rectangle obj1(4, 10);
    cout << "The area of the rectangle is " << obj1.area() << endl;
}