#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll power(ll k)++
{
    if (k == 0)
        return 1;
    if (k % 2 == 0)
    {
        ll ans = power(k / 2);
        return (ans % MOD) * (ans % MOD);
    }
    else
    {
        ll ans = power(k / 2);
        return ((2 * ans) % MOD * (ans % MOD));
    }
}
int main()
{
    int a;
    cin >> a;
    cout << a * 10;
    return 0;
}