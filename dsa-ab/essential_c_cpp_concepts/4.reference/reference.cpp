// it is a nickname/alias given to a variable
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x = 10;
    int &r = x; //& before a variable makes it a reference, basically, the address of r becomes equal to x
    return 0;
}
