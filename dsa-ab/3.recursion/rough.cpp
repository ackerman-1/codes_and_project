#include <bits/stdc++.h>
using namespace std;
int fun(int x)
{
    if (x > 0)
    {
        fun(x - 1);
        cout << x << endl;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x = 3;
    cout << fun(x) << endl;
    return 0;
}
