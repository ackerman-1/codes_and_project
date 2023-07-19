#include <bits/stdc++.h>
using namespace std;
int *func(int size)
{
    int *p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    return p;
}

int main()
{
    int *ptr;
    int sz = 5;
    ptr = func(sz);
    for (int i = 0; i < 5; i++)
        cout << ptr[i] << endl;
    return 0;
}
