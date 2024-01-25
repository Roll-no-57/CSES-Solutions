/*
this is an all pair shortest path problem from cses graph section
So sssp algorithm will not work here
*/
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

#define INFL 9223372036854775807

void solve()
{
    // Your solution goes here

    // take all the inputs
    int n, m, q;
    cin >> n >> m >> q;
    vector<pair<int, int>> adj[n + 1];
    vector<vector<int>> dist(n + 1, vector<int>(n + 1, 1e18));
    F0R(i, m)
    {
        int a, b, c;
        cin >> a >> b >> c;
        dist[a][b] = min(dist[a][b],c);
        dist[b][a] = min(dist[b][a],c);
    }

    // implement the floyed-warshall algorithm

    // first initialize the dist matrix

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                dist[i][j] = 0;
        }
    }

    // now implement the floyed warshall algorithm
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    // print the answer for each query
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (dist[a][b] == 1e18)
            cout << -1 << endl;
        else
            cout << dist[a][b] << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}