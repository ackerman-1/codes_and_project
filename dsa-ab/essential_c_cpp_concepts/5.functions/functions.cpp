// a piece of code that performs a specific task, a group of related instruction (when it is realted data it is a structure)
#include <bits/stdc++.h>
using namespace std;
int add(int a, int b); // this is called the prototype of the function; a and b are called the formal paramets of the function
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x = 5;
    int y = 10;
    int ans;
    ans = add(x, y); // x and y are called actual parameters here
    return 0;
}
int add(int a, int b)
{
    return a + b;
}
