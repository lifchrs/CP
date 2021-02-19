#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pl = pair<ll,ll>;
using vl = vector<ll>;
using vpl = vector<pl>;
#define mp make_pair
#define f first
#define s second
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define pb push_back
#define F0R(i,a) for(ll i=0;i<a;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define nn << "\n"


const ll MXN = int(2e5)+5;
vector<set<ll>> visited(MXN);
vl adj[MXN];
bool visDfs[MXN];
set<ll> currSet;
vl currCycle;

void dfs(ll node){
  currCycle.pb(node);
  visDfs[node] = 1;
  for(ll i : visited[node]){
    currSet.insert(i);
  }
  for(ll i : adj[node]){
    if(visDfs[i]) continue;
    dfs(i);
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n,m;
  cin >> n >> m;
  vl v(n);
  F0R(i,n){
    v[i] = i+1;
  }
  vl copyv = v;
  for(set<ll>& i : visited) i = {};
  vpl swaps(m);
  F0R(i,m){
    cin >> swaps[i].f >> swaps[i].s;
  }
  F0R(i,n+1) visited[i].insert(i);
  F0R(i,m){
    swap(v[swaps[i].f-1],v[swaps[i].s-1]);
    visited[v[swaps[i].f-1]].insert(swaps[i].s);
    visited[v[swaps[i].s-1]].insert(swaps[i].f);
  }
  F0R(i,n) adj[i+1].pb(v[i]);
  vl ans(n+1);
  FOR(i,1,n+1){
    currSet = {};
    currCycle = {};
    if(visDfs[i]){
      cout << ans[i] nn;
      continue;
    }
    dfs(i);
    cout << sz(currSet) nn;
    F0R(j,sz(currCycle)) ans[currCycle[j]] = sz(currSet);
  }
}
