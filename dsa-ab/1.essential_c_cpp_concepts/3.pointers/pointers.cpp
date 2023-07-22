// it is an address variable that is used for storing the address of the variable, not the data or the variable itself
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // int a = 10;
    // int *p;
    // p = &a;
    // cout << p;
    // cout << endl
    //      << &a;
    int *a = new int[5];
    a[0] = 5;
    cout << *a << endl;
    cout << a[0];
    delete[] a;
    return 0;
}
