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
    string a,b;cin>>a>>b;
    unordered_map<char,int>map;
    //string s=a;
    a+=b;
    FOR(i,0,a.length()+b.length()){
        map[a[i]]++;
    }
    int n;cin>>n;
    bool ex=1;
    string child;
    FOR(i,0,n){
        string t;cin>>t;
        child+=t;
    }
    unordered_map<char,int>ch;
    FOR(i,0,child.length()){
        ch[child[i]]++;
    }
    FOREACH(i,ch){
        if(map[i.first]<i.second)ex=0;
    }
    if(ex){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
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