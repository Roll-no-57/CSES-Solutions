#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define trav(a, x) for(auto& a : x)
#define FOR(i, a, b) for (int i=(a); i<=(signed)(b); i++)
#define ROF(i, a, b) for (int i=(a); i>=(signed)(b); i--)
#define F0R(i, a) for (int i=0; i<(signed)(a); i++)
#define vi vector<int>
#define f first
#define s second
#define all(v) (v).begin(), (v).end()
#define int long long

const int mod = 1e9 + 7, MOD = 998244353;

void solve() {
    // Your solution goes here
    int n;cin>>n;
    set<int> s;    
    for(int i=0;i<n;i++) {int x;cin>>x;s.insert(x);}

    cout<<s.size()<<endl;


}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int t; cin >> t;
    // while(t--) {
        solve();
    // }
    return 0;
}