// struct rectangle
// {
//     int length;
//     int breadth;
// };
// #include <iostream>
// using namespace std;
// main()
// {
//     // struct rectangle obj1;
//     // obj1.length = 10;
//     // obj.breadth = 50;
//     // dot operator is used to access the member
//     struct rectangle obj1 = {10, 50};
//     printf("\narea of the rectangle is  %d\n", obj1.breadth * obj1.length);
// }

// cards

struct cards
{
    char face_value;
    char shape;
    char number_value;
}

#include <iostream>
using namespace std;

int main()
{
    struct cards set[52] = {1, 0, 1}, {1, 1, 0}; //...... // array of structures;
}