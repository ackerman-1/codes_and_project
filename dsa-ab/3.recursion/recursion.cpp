#include <bits/stdc++.h>
using namespace std;
int fun(int x)
{
    if (x > 0)
    { // if the recursion call is after the executable statements, it is called tail recurison. or else it is called head recursion
        cout << x << endl;
        fun(x - 1);
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x = 3;
    fun(x);
    return 0;
}
