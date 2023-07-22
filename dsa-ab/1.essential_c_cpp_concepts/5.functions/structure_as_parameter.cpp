#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
long area(rectangle obj_gen)
{
    return obj_gen.breadth * obj_gen.length;
}
int main()
{
    struct rectangle obj1 = {10, 20};
    cout << "The area of the rectangle is: " << area(obj1) << endl;
}
