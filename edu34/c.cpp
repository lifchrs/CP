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
  cin >> n;
  multiset<ll> nums;
  map<ll,ll> cnt;
  ll ans = 0;
  F0R(i,n){
    ll a;
    cin >> a;
    nums.insert(a);
    cnt[a]++;
    ans = max(ans,cnt[a]);
  }
  cout << ans nn;
}
