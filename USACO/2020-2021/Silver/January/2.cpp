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

bool done[30];

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n,q; cin >> n >> q;
  string s; cin >> s;
  vl fence;
  F0R(i,n){
    fence.pb(s[i] - 'A' + 1);
  }

  vl minFrom(27);
  for(ll& i : minFrom) i = int(1e9);
  vl pref;
  pref.pb(0);
  ll curr = 0;
  F0R(i,n){
    F0R(j,27) minFrom[j] = min(minFrom[j],fence[i]);
    if(!done[fence[i]] || (i > 0 && fence[i] > fence[i-1]) || (done[fence[i]] && minFrom[fence[i]] < fence[i])){
      done[fence[i]] = 1;
      curr++;
      minFrom[fence[i]] = int(1e9);
    }
    pref.pb(curr);
  }

  vl suff;
  curr = 0;;
  suff.pb(curr);
  for(bool& i : done) i = 0;
  for(ll& i : minFrom) i = int(1e9);
  reverse(all(fence));
  F0R(i,n){
    F0R(j,27) minFrom[j] = min(minFrom[j],fence[i]);
    if(!done[fence[i]] || (i > 0 && fence[i] > fence[i-1]) || (done[fence[i]] && minFrom[fence[i]] < fence[i])){
      done[fence[i]] = 1;
      curr++;
      minFrom[fence[i]] = int(1e9);
    }
    suff.pb(curr);
  }

  F0R(i,n){
    if(!done[fence[i]] || (i > 0 && fence[i] > fence[i-1])){ done[fence[i]] = 1;curr++;}
    suff.pb(curr);
  }

  if(pref[n] != suff[n]) while(1){}


  /* F0R(i,n+1){ */
  /*   cout << pref[i] << " "; */
  /* } */
  /* cout nn nn nn; */

  /* F0R(i,n+1){ */
  /*   cout << suff[i] << " "; */
  /* } */
  /* cout nn; */


  F0R(i,q){
    ll a,b;
    cin >> a >> b;
    a--;
    b = n-b;
    /* cout << suff[b] << " " << pref[a] << " "; */
    cout << suff[b] + pref[a] nn;
  }

  //for a segment, the number of strokes you need is equal to the number of distinct colors in the segment. so all that needs to be kept
}
