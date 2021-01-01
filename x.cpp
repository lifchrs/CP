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

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    ll ans = 0;
    FOR(i,1,sz(s)){
      if(s[i-1] == s[i] || (i > 1 && s[i] == s[i-2])){
        ans++;
        for(char x = 'a'; x <= 'z'; x = x+1){
          bool cont = 0;
          for(ll j = max(0*i,i-2); j < min(i+10,sz(s)); j++){
            if(s[j] == x){
              cont = 1;
              break;
            }
          }
          if(cont) continue;
          s[i] = x;
          break;
        }
      }
    }
    cout << ans nn;
    /* cout << s nn; */
  }
}
