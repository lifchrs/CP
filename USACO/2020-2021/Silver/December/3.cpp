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

bool sortSec(const pair<pl,ll> &a, const pair<pl,ll> &b){
  return (b.fi.se > a.fi.se);
}
ll killer[1001], cnt[1001];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin >> n;
  vector<pair<pl,ll>> east, north;
  F0R(i,n){
    char dir;
    ll x,y;
    cin >> dir >> x >> y;
    if(dir == 'E'){
      east.pb(mp(mp(x,y),i+1));
    }else{
      north.pb(mp(mp(x,y),i+1));
    }
  }
  sort(north.begin(),north.end());
  sort(east.begin(),east.end(),sortSec);
  for(pair<pl,ll> no : north){
    bool done = 0;
    if(done) continue;
    for(pair<pl,ll> ea : east){
      if(killer[ea.second] != 0) continue;
      pl intersection = mp(no.fi.fi,ea.fi.se);
      ll noDist = intersection.se - no.fi.se;
      ll eaDist = intersection.fi - ea.fi.fi;
      if(noDist < 0 || eaDist < 0) continue;
      if(noDist == eaDist) continue;
      if(noDist > eaDist){
        killer[no.se] = ea.se;
        done = 1;
        break;
      }
      else killer[ea.se] = no.se;
    }
  }
  FOR(i,1,n+1){
    ll temp = i;
    while(killer[temp] != 0){
      cnt[killer[temp]]++;
      temp = killer[temp];
    }
  }
  F0R(i,n){
    cout << cnt[i+1] nn;
  }
}


/* split the cows into north-facing and east-facing. for each cow that is north facing, find the east facing cow that will stop it starting from the left-most cow. if it ends up stopping another cow, set stopper[another cow] = cow. once the cow is stopped, move on to the next cow. */
