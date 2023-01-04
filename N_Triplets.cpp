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
#define int long long 
//bool prime[1000000001];
/* void sieve(int n)
{

    
    memset(prime, true, n+1);
 
    for (int p = 2; p * p <n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <=n; i += p)
                prime[i] = false;
        }
    }
} */
/* vector<int>arr(1000000001,0);
void fact(int n){
    for(int i=2;i<n;i++){
       if(n%i==0)arr[i]=1; 
    }
} */
bool isPrime(int n)
{
    if (n<=1)
        return false;
    for (int i=2;i*i<n;i++)
        if (n%i==0)
            return false;
 
    return true;
}
void solve(){
  int n;cin>>n;
 // sieve(n);
  if(isPrime(n)==true){cout<<"-1\n";return;}
  //vector<int>res;
  //int cnt=0;
  for(int i=2;i<1000000001;i++){
    if(n%i==0){cout<<1<<" "<<i<<" "<<n/i<<endl;return;}
  }
} 

int32_t main(){
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