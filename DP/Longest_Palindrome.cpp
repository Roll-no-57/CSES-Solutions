#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

void solve()
{
    string s;
    cin >> s;
    string rs = s;
    reverse(rs.begin(), rs.end());

    vector<vector<int>> dp(s.size() + 1, vector<int>(rs.size() + 1, 0));
    int mxi = 0, mxj = 0;
    int mx = 0;

    for (int i = 1; i <= static_cast<int>(s.size()); i++)
    { // Convert s.size() to int
        for (int j = 1; j <= static_cast<int>(rs.size()); j++)
        { // Convert rs.size() to int
            if (s[i - 1] == rs[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                if (dp[i][j] > mx)
                {
                    mx = dp[i][j];
                    mxi = i;
                    mxj = j;
                }
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    string ans = "";
    while (dp[mxi][mxj] != 0)
    {
        ans += s[mxi - 1];
        mxi--;
        mxj--;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}

int main()
{ // Changed from int32_t to int
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("/Competitive Programming/input.txt","r",stdin);
    // freopen("/Competitive Programming/output.txt","w",stdout);
    // int t;
    // cin>>t;
    // while (t--)
    // {
    solve();
    // }
    return 0;
}
