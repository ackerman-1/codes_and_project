#include <bits/stdc++.h>
#include <ctype.h>

#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle obj1 = {10, 5};
    struct rectangle *p1 = &obj1;
    struct rectangle *x;
    x = (struct rectangle *)malloc(sizeof(struct rectangle));
    x->breadth = 5;
    cout << obj1.breadth << endl;
    cout << p1->breadth << endl;
    cout << x->breadth << endl;
    return 0;
}