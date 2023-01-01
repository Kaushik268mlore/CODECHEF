#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define TC(t) while (t--)
    int longestCommonSubsequence(string text1, string text2) {
        int n = text2.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        
        for(int i=0;i<=n;i++) {
            for(int j=0;j<=n;j++) {
                if(i==0||j==0) dp[i][j] = 0; 
                else if(text1[i-1]==text2[j-1]) dp[i][j]=1+dp[i-1][j-1]; 
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]); 
            }
        }
        return dp[n][n];
    }
void solve(){
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1;
    s2=s1;
    reverse(s1.begin(),s1.end());
    
    cout<<longestCommonSubsequence(s2,s1)/2<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
  int t;
  cin>>t;
  TC(t){
    solve();  
  }
  return 0;
}