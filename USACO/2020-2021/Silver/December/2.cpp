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


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  vector<pair<pl,ll>> xs, ys;
  cin >> n;
  F0R(i,n){
    ll a,b;
    cin >> a >> b;
    xs.pb(mp(mp(a,b),i));
    ys.pb(mp(mp(b,a),i));
  }
  set<set<ll>> subsets;
  sort(xs.begin(),xs.end());
  sort(ys.begin(),ys.end());
  set<ll> pushIntoX,pushIntoY;
  F0R(i,n){
    pushIntoY = {};
    pushIntoX = {};
    for(ll sz = 0; sz < n-i; sz++){
      pushIntoX.insert(xs[i+sz].se);
      pushIntoY.insert(ys[i+sz].se);
      subsets.insert(pushIntoX);
      subsets.insert(pushIntoY);
    }
  }
  cout << subsets.size()+1 nn;

  /* for(set<ll> s : subsets){ */
  /*   for(ll a : s){ */
  /*     cout << a << " "; */
  /*   } */
  /*   cout nn; */
  /* } */

}


/* sort by the x and y values in separate vectors. then create a map that also reverses arr[i]. check if the max-min is continuous */
