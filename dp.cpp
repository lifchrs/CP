#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using str = string;

using pl = pair<ll,ll>;
using pd = pair<ld,ld>;

using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<ld>;
using vs = vector<str>;
using vpl = vector<pl>;
using vpd = vector<pd>;

#define mp make_pair
#define f first
#define s second

#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define ins insert
#define ft front()
#define bk back()
#define pb push_back
#define eb emplace_back
#define pf push_front

#define lb lower_bound
#define ub upper_bound


#define F0R(i,a) for(ll i = 0; i < a; ++i)
#define FOR(i,a,b) for(ll i = a; i < b; ++i)

#define nn << "\n"

const ll mxN = int(1e6) + 5;
const ll MOD = 13371337;

ll dp[mxN];

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n,k;
  cin >> n >> k;
  vl coins;
  ll sum
  F0R(i,n){

  }
  dp[0] = 1;
  for(ll c : coins){
    F0R(i,v+1){
      if(i-c < 0) continue;
      dp[i] += dp[i-c];
      /* while(dp[i] >= MOD) dp[i] -= MOD; */
    }
  }
  cout << dp[v] nn;
}
