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


ll num_groups, p[1002];
ll par(ll x){
    return (p[x] == x) ? x : p[x] = par(p[x]);
}

bool isSameGroup(ll a, ll b){return par(a) == par(b);}
void merge(ll a, ll b){
    num_groups -= !isSameGroup(a,b);
    a = par(a);
    b = par(b);
    p[b] = a;
}

int main(){
  ifstream cin("moocast.in");
  ofstream cout("moocast.out");
  ll n;
  cin >> n;
  F0R(i,n) p[i] = i;
  vector<pair<ll,pl>> edges;
  vector<pl> points;
  points.pb({0,0});
  F0R(i,n){
    pl a;
    cin >> a.first >> a.second;
    points.pb(a);
  }
  FOR(i,1,n+1){
    pl p1 = points[i];
    FOR(j,i+1,n+1){
      pl p2 = points[j];
      ll dist = (p1.fi-p2.fi)*(p1.fi-p2.fi)+(p1.se-p2.se)*(p1.se-p2.se);
      edges.pb(mp(dist,mp(i,j)));
    }
  }
  sort(edges.begin(),edges.end());
  for(pair<ll,pl> bruh : edges){
    if(isSameGroup(bruh.se.se,bruh.se.fi)) continue;
    merge(bruh.se.se,bruh.se.fi);
    n--;
    if(n == 1){ cout << bruh.fi nn; break;}
  }
}
