#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve(){

   int n;cin>>n; 
   vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    vector<vector<char>> grid(n+1,vector<char>(n+1));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>grid[i][j];
        }
    }

    dp[0][1]=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(grid[i][j]=='.'){
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
            else{
                dp[i][j]=0;
            }
            dp[i][j]%=MOD;
        }
    }
    
    cout<<dp[n][n]<<endl;

}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("/Competitive Programming/input.txt","r",stdin);
    // freopen("/Competitive Programming/output.txt","w",stdout);
    // int t;
    // cin>>t;
    // while (t--)
    // {
         solve ();
    // }
return 0;
}