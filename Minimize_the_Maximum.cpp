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
// void solve(){
//   int n;cin>>n;
//   int sum=0;
//   FOR(i,0,n){
//     int x;cin>>x;
//     sum+=x;
//   }
//     cout<<ceil(sum/n)<<"\n";
// }
void solve(){
    int n;cin>>n;
    vi arr(n);
    FOR(i,0,n){
        cin>>arr[i];
    }
    vi pre(n);
    pre[0]=arr[0];
    FOR(i,1,n){
        pre[i]=pre[i-1]+arr[i];
    }
    int ans=pre[0];
    FOR(i,1,n){
        if (pre[i] % (i + 1))
      {
        ans = max(pre[i] / (i + 1) + 1, ans);
      }
      else
        ans = max(pre[i] / (i + 1), ans);
    }
    cout<<ans ;
    end
}
//Okay so apparently  when we take prefix sum and apply the operation on Ai and Ai+1 , we 
// see that the value at only Pi will be incremented by x
// for example lets consider
// 1 5 6 9
// i choose index 1
// so prefix array would look something like 1 6 12 20
//when i perform +4 for 5 and -4 for 6
//the array becomes 1 11 12 20 
//which inadvertantly means we can binary search in an increasing array
//but instead we'll see if an integer x can be the  minimum maximum element 
// if and only if for all i Pi <=i*x 
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