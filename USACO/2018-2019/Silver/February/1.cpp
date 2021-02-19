#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double; // or double, if TL is tight
using str = string; // yay python!

using pl = pair<ll,ll>;
using pd = pair<ld,ld>;

using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<ld>;
using vs = vector<str>;
using vpl = vector<pl>;
using vpd = vector<pd>;

// pairs
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

#define F0R(i,a) for(ll i=0;i<a;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)

#define nn << "\n"

int main(){
  ll l,n,rf,rb;
  ifstream cin("reststops.in");
  ofstream cout("reststops.out");
  cin >> l >> n >> rf >> rb;
  vpl rest(n);
  F0R(i,n){
    cin >> rest[i].f >> rest[i].s;
  }
  vl bestInd(n);
  ll curr = n-1;
  sort(all(bestInd));
  bestInd[n-1] = -4;
  for(ll i = n-1; i >= 0; i--){
    if(rest[i].s > rest[curr].s) curr = i;
    bestInd[i] = curr;
    /* cout << i nn; */
  }
  ll bPos = 0, jPos = 0, bInd = 0;
  ll ans = 0;

  /* cout << bestInd[0] nn; */

  while(bInd < n){
    ll nextStopX = rest[bestInd[bInd]].f;
    ll btimeNeeded = rb*(nextStopX - bPos);
    ll jtimeNeeded = (nextStopX-jPos)*rf;
    ans += (jtimeNeeded-btimeNeeded) * rest[bestInd[bInd]].s;
    /* cout << jtimeNeeded - btimeNeeded nn; */
    bInd = bestInd[bInd]+1;
    bPos = nextStopX;
    jPos = nextStopX;
  }

  cout << ans nn;
}
