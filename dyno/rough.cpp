// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, char> m1;
    m1[0] = 'a';
    m1[1] = 'b';
    m1[2] = 'c';
    m1[3] = 'd';
    m1[4] = 'e';

    // if (it != m1.end())
    //     cout << it->second << endl;
    for (auto it = m1.begin(); it != m1.end(); ++it)
        cout << it->second << endl;
    return 0;
}