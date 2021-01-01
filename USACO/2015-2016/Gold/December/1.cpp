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
bool used[50001*2];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin >> n;
  vl ellie1(n/2),ellie2(n/2);
  F0R(i,n/2){
    cin >> ellie[i];
    taken[ellie[i]] = 1;
  }
  sort(ellie1.begin(),ellie1.end());
  vl bessie1;
  F0R(i,n){
    if(!taken[i+1]) bessie1.pb(i+1);
  }
  sort(bessie.begin(),bessie.end());
  ll bCount = 0;
  for(ll x : ellie){
    if(bCount > n-1){

    }
  }
}
