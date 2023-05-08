#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll power(ll k)
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
    int t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;
        ll ans = power(k) % MOD;
        cout << (5 * ans) % MOD << "\n";
    }
    // your code goes here
    return 0;
}