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
// holy fuck this problem actually freaked the shit out of me.. turns out it's much simpler than it looks 
//its more like a 4 pointer solution and its really cool. Just highly observational
// lets consider every element to be a center / intersection of the subrows and the columns
// from there we go up down left and right and in every addition we see if the added elements are equal or not(which sees to it that the given string is a palindrome)
// obviously the length will be in the form of 2*k+1 all the time, and count the subcolumns simultaneously
void solve(){
  int n,m;cin>>n>>m;
  int arr[n][m];
  FOR(i,0,n){
    FOR(j,0,m){
        cin>>arr[i][j];
    }
  }
  int res=0;
  FOR(i,0,n){
    FOR(j,0,m){
        int cs,ce,rs,re;
        cs=ce=j;
        rs=re=i;
        int cnt=0;
        while(cs>=0&&ce<m&&rs>=0&&re<n&&arr[rs][j]==arr[re][j]&&arr[i][cs]==arr[i][ce]){
            cs--;
            ce++;
            rs--;
            re++;
            cnt++;
        }
        res+=cnt;
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