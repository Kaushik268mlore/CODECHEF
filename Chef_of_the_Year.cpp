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
#define  FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
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
//unordered_map<string,string>ci;
     int n,v;
    cin>>n>>v;
    unordered_map<string,string> ci;
    unordered_map<string,int> vt;
    unordered_map<string,int> cv;
    for(int i=0; i < n; i++){
        string a,b;
        cin>>a>>b;
        ci[a]=b;
    }
    int maxc=0,maxv=0;
    for(int i=0; i < v; i++){
        string s;
        cin>>s;
        vt[s]++;
        cv[ci[s]]++;
        maxc = max(maxc,cv[ci[s]]);
        maxv = max(maxv,vt[s]);
    }
    string ans = "{"; 
    for(auto i:cv){
        if(i.second ==maxc){
            ans = min(ans,i.first);
        }
    }
    cout<<ans<<endl;
    ans = "{";
    for(auto i:vt){
        if(i.second == maxv){
            ans = min(ans,i.first);
        }
    }
    cout<<ans;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

  //TC(t){
    solve();  
  
  return 0;
}