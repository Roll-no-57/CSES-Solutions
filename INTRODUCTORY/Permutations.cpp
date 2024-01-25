#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define trav(a, x) for (auto &a : x)
#define FOR(i, a, b) for (int i = (a); i <= (signed)(b); i++)
#define ROF(i, a, b) for (int i = (a); i >= (signed)(b); i--)
#define F0R(i, a) for (int i = 0; i < (signed)(a); i++)
#define vi vector<int>
#define f first
#define s second
#define all(v) (v).begin(), (v).end()
#define int long long

const int mod = 1e9 + 7, MOD = 998244353;

void solve()
{
    // Your solution goes here
    int n;
    cin >> n;

    int ev = n / 2 + 1;
    int od = 1;

    vi ans(n);

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            ans[i] = ev;
            ev++;
        }
        else
        {
            ans[i] = od;
            od++;
        }
    }

    // cout<<"ho;";
    if(n==1){
        cout<<1<<"\n";
        return;
    }

    if (n <= 3)
    {
        cout << "NO SOLUTION\n";
        return;
    }
    else
    {
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
        solve();
    // }
    return 0;
}