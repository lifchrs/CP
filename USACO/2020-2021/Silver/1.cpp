#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pl;
typedef vector<ll> vl;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define nn << "\n"
#define F0R(i,a) for(ll i=0;i<a;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)

vl adjList[int(1e5)+2];
ll cows[int(1e5)+2];
ll visited[int(1e5)+2];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin >> n;
  F0R(i,n-1){
    ll a,b;
    cin >> a >> b;
    adjList[a].push_back(b);
    adjList[b].push_back(a);
  }
  cows[1] = 1;
  ll ans = 0;
  queue<ll> q;
  q.push(1);

  while(!q.empty()){
    ll node = q.front();
    q.pop();
    visited[node] = 1;
    ll needed = 0;
    for(ll next : adjList[node]){
      if(!visited[next]){
        /* if(node == 2) cout << "bruh" nn; */
        cows[next] = 1;
        q.push(next);
        needed++;
      }
    }
    ll add = 32-__builtin_clz(needed);
    if(needed == 0) add = 0;
    /* cout << add nn; */
    ans += add + needed;
  }
  cout << ans nn;

  /* FOR(i,5,20){ */
  /*   cout << i << " " << 64-__builtin_clzl(i-1) nn; */
  /* } */

}

/* if there are daughter nodes, double and move into them */
