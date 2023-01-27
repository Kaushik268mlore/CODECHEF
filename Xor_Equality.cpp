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
#define M 1000000007
LL fastexpo(LL a, LL b){
    if(b==0){
        return 1;
    }
    LL res=fastexpo(a,b/2);
    if(b%2!=0){
        return ((a*res*res)%M);
    }
    else{
        return ((res*res)%M);
    }
}
void solve(){
  int n;cin>>n;/* 
  The XOR of any even number and their next number are always 1 ,eg:- 4^5=1 , 8^9=1, so we find the no of even elements in range, */
  int po=fastexpo(2,n-1);
  po%=M;
  cout<<po<<endl;

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