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

#define sz(x) (ll)((x).size())
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

ll dist[int(1e5)+3];

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n,m,k;
  cin >> n >> m >> k;
  vpl adjList[n+2];
  F0R(i,m){
    ll a,b,c;
    cin >> a >> b >> c;
    a--,b--;
    adjList[a].pb(mp(b,c));
    adjList[b].pb(mp(a,c));
  }
  priority_queue<pair<pl,ll>> pq;
  vl special(k);
  F0R(i,k){
    cin >> special[i];
    dist[special[i]] = 0;
    pq.push({{0,special[i]},special[i]});
  }
  while(!pq.empty()){
    pair<pl,ll> curr = pq.top();
    pq.pop();
    if(curr.f.f != -dist[curr.f.s]) continue;
    for(pl next : adjList[curr.f.s]){
      if(next.f == curr.s) continue;
      if(dist[next.f.f] > dist[curr.f.s] + next.f.s){
        dist[next.f] = dist[curr.f.s] + next.s;
        pq.push({{-dist[next.f],next.f},curr.s});
      }
    }
  }
}
