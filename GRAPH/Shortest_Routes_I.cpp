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

vector<int> vis(100001, 0);

void shortestPath(vector<int> &parent, vector<int> &dist, vector<vector<int>> adj[], int start)
{
    dist[start] = 0;
    parent[start] = -1;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({dist[start], start});

    while (!pq.empty())
    {

        pair<int, int> topElement = pq.top();

        pq.pop();

        int dis = topElement.first;
        int node = topElement.second;

        if(vis[node])continue;
        vis[node]=1;
        for (auto i : adj[node])
        {
            int edgeWeight = i[1];
            int adjNode = i[0];

            if ((dist[adjNode] > (dis + edgeWeight)))
            {
                dist[adjNode] = dis + edgeWeight;
                pq.push({dist[adjNode], adjNode});
                parent[adjNode] = node;
            }
        }
    }
}

void solve()
{
    // Your solution goes here
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj[n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<int> parent(n + 1, -1);
    vector<int> dist(n + 1, INFL);

    shortestPath(parent, dist, adj, 1);

    for (int i = 1; i <= n; i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
    return 0;
}