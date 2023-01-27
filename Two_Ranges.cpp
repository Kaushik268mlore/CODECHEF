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
void solve(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  /* int noa=b-a+1;
  int nob=d-c+1;this is a very bad way to go about cardinality of sets and union
  int x=0;
  int xx=0;
  if(b-c>0){
    x=b-c;
  }
  if(b-d>0){
    xx=b-d;
  }
  cout<<noa+nob-x-xx<<endl;
 */
set<int>s;
FORN(i,a,b)s.insert(i);
FORN(i,c,d)s.insert(i);
cout<<s.size()<<endl;
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