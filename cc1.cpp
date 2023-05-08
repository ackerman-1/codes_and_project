#include <bits/stdc++.h>
#define ll int
#define MAXM 250010
using namespace std;
char ch[MAXM];
ll n, s, u[MAXM], v[MAXM], U[MAXM], V[MAXM], a[MAXM], b[MAXM], N;
vector<ll> num, cmp;
struct seg_tree
{
    vector<ll> st;
    void Init()
    {
        s = 1;
        while (s < N)
            s <<= 1;
        st.resize(2 * s + 2);
    }
    void Add(ll pos, ll val, ll x, ll lx, ll rx)
    {
        if (lx == rx)
        {
            st[x] += val;
            return;
        }
        ll mid = (lx + rx) / 2;
        if (pos <= mid)
            Add(pos, val, 2 * x, lx, mid);
        else
            Add(pos, val, 2 * x + 1, mid + 1, rx);
        st[x] = st[2 * x] + st[2 * x + 1];
    }
    ll Calc(ll l, ll r, ll x, ll lx, ll rx)
    {
        if (lx > r || rx < l)
            return 0;
        if (lx >= l && rx <= r)
            return st[x];
        ll mid = (lx + rx) / 2;
        return Calc(l, r, 2 * x, lx, mid) + Calc(l, r, 2 * x + 1, mid + 1, rx);
    }
};
seg_tree S;
ll M(ll x)
{
    auto it = lower_bound(cmp.begin(), cmp.end(), x);
    return (it - cmp.begin()) + 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll m, cnt = 1;
    cin >> n >> m;
    n++;
    for (ll i = 1; i <= m; i++)
    {
        cin >> ch[i];
        if (ch[i] == 'P')
        {
            cin >> a[i] >> b[i];
            a[i]++;
            b[i]++;
            u[cnt] = a[i];
            v[cnt] = b[i];
            U[cnt] = a[i];
            V[cnt] = b[i];
            num.push_back(a[i]);
            num.push_back(b[i]);
            cnt++;
            continue;
        }
        if (ch[i] == 'M')
        {
            cin >> a[i] >> b[i];
            U[a[i]] += b[i];
            V[a[i]] += b[i];
            num.push_back(U[a[i]]);
            num.push_back(V[a[i]]);
            continue;
        }
        cin >> a[i];
        a[i]++;
        num.push_back(a[i]);
    }
    ll cur = 1;
    sort(num.begin(), num.end());
    for (ll i = 0; i < num.size(); i++)
    {
        if (!i || num[i] != num[i - 1])
            cmp.push_back(num[i]);
    }
    N = cmp.size() + 1;
    S.Init();
    for (ll i = 1; i <= m; i++)
    {
        if (ch[i] == 'P')
        {
            S.Add(M(a[i]), 1, 1, 1, N);
            S.Add(M(b[i]) + 1, -1, 1, 1, N);
            continue;
        }
        if (ch[i] == 'M')
        {
            S.Add(M(u[a[i]]), -1, 1, 1, N);
            S.Add(M(v[a[i]]) + 1, 1, 1, 1, N);
            u[a[i]] += b[i];
            v[a[i]] += b[i];
            S.Add(M(u[a[i]]), 1, 1, 1, N);
            S.Add(M(v[a[i]]) + 1, -1, 1, 1, N);
            continue;
        }
        cout << S.Calc(1, M(a[i]), 1, 1, N) << "\n";
    }
    return 0;
}