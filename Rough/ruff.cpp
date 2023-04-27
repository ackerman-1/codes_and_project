#include <bits/stdc++.h>
using namespace std;
int addnum(int);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a;
    cin >> a;
    cout << addnum(a);
    return 0;
}
int addnum(int num1)
{
    return num1 == 0
               ? 0
               : (num1 % 9 == 0 ? 9 : num1 % 9);
}
