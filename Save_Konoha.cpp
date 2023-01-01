#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
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
#define END cout<<"\n";

void solve(){
    ll n,z;cin>>n>>z;
    vector<ll>arr(n);
    FOR(i,0,n)cin>>arr[i];
    priority_queue<ll>pq(arr.begin(),arr.end());
    ll strikes=0,tot=0;
    bool alive=false;
    while(!pq.empty()){
        ll strongest=pq.top();
        tot+=strongest;
        strikes++;
        pq.pop();
        if(strongest)pq.push(strongest/2);
        if(tot>=z){
            alive=true;
            break;
        }

    }
    if(alive)cout<<strikes<<"\n";
    else cout<<"Evacuate\n";
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