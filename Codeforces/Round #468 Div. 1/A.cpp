#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef double db; 
typedef string str; 
typedef pair<ll,ll> pl; 
typedef vector<ll> vl; 
typedef vector<vl> vvl; 
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define nn <<"\n"
#define F0R(i,a) for(ll i=0;i<a;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
ll INF=0x3f3f3f3f3f3f3f3f;
ll MOD=(ll)(1e9+7); //1e9+7

ll binpow(ll a,ll b, ll c=1e18){
	ll res=1;
	while(b>0){
		if(b & 1){
			res*=a;
			res%=c;
		}
		a*=a;
		a%=c;
		b>>=1;
	}
	return res;
}
const int MXN=100001;
ll dist[MXN], p[MXN],cnt[MXN], ans = 0;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    ll n;
    cin >> n;
    cnt[0]++;
    FOR(i,2,n+1){
        cin >> p[i];
        dist[i] = dist[p[i]] + 1;
        cnt[dist[i]]++;
    }
    F0R(i,MXN){
        ans += cnt[i] % 2;
    }
    cout << ans nn;
}

/* Find the distance of each node from the root and then add the total mod 2 */ 
