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
#define MOD 998244353
LL mod(LL x)
{
    return ( ( x % MOD) + MOD ) % MOD;
}
LL mul(LL x,LL y)
{
    return mod(mod(x)*mod(y));
}
LL add(LL x,LL y)
{
    return mod(mod(x)+mod(y));
}
LL bexp(LL a,LL b)
{ 
    if(a==0) return 0;
    if(b==0) return 1LL;
    if(b==1) return mod(a);
    LL res=1;
    
    while(b)
    {
        if(b%2==1) res = mul(res,a);
 
        a = mul(a,a);
        b/=2;    
    }
    return res;
}
//----------------------------------------------
//----------------------------------------------
 
 
LL fun1(LL n)
{
    LL ans = mul(n,n+1);
    ans = mul(ans,bexp(2,MOD-2));
    return ans;
}
void solve(){
    LL one,zero;cin>>one>>zero;
    LL P=one,Q=one+zero;
    cout<<(P%MOD*fun1(Q)%MOD)%MOD;
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