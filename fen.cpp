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

ll n, m, fen[200002];

void add(ll nod,ll val)
{
    for(; nod <= n; nod += (nod & (-nod)))
        fen[nod] += val;
}

ll sum(ll nod)
{
    ll ans = 0;
    for(; nod; nod -= (nod & (-nod)))
        ans += fen[nod];
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    vl v(n);
    F0R(i,n) cin>>v[i];
    F0R(i,n){
      add(i+1,v[i]);
    }
    while(m--){
      ll b;
      cin >> b;
      if(b == 2){
        ll l,r;
        cin >> l >> r;
        cout << sum(r) - sum(l-1) nn;
      }else{
        ll ind, upd;
        cin >> ind >> upd;
        add(ind,upd-v[ind-1]);
        v[ind-1] = upd;
      }
    }
}
