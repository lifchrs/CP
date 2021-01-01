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
  ll t;
  cin >> t;
  while(t--){
    ll x;
    cin >> x;
    if(x % 3 == 0 || x % 7 == 0){
      cout <<"YES" nn;
      continue;
    }
    bool bruh = 0;
    while(x > 0){
      if(x % 3 == 0){
        cout << "YES" nn; bruh = 1;
        break;
      }
      x -= 7;
    }
    if(!bruh)
    cout << "NO" nn;
  }
}
