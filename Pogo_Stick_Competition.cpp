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
#define RR return
#define YES cout<<"YES\n";
#define NO  cout<<"NO\n";
#define end cout<<"\n";
// clearly a DP problem
// int func(vector<int>&arr,vector<vector<int>>&dp,int k,bool picked,int i,int n){
//     if(i>=n)return 0;
//     if(dp[i][picked]!=-1)return dp[i][picked];
//     if(picked==0){
//         return dp[i][picked]=max(func(arr,dp,k,0,i+1,n),arr[i]+func(arr,dp,k,1,i+k,n)); 
        
//     }
//     else return dp[i][picked]=arr[i]+func(arr,dp,k,1,i+k,n);
// }
// void solve(){
//   int n,k;
//   cin>>n>>k;
//   vector<int>arr(n);
//   FOR(i,0,n)cin>>arr[i];
//   vector<vector<int>>dp(n+1,vector<int>(2,-1));
//   cout<<func(arr,dp,k,0,0,n);
//   end
// }
// but this isnt working
void solve(){
    int n,k;cin>>n>>k;
    int arr[n];
    FOR(i,0,n)cin>>arr[i];
    int res=INT_MIN;
    for(int i=n-1;i>=n-k;i--){
        int sum=0;
        for(int j=i;j>=0;j-=k){
            sum+=arr[j];
            res=max(res,sum);
        }
    }
    cout<<res;
    end
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