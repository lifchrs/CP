#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef double db; 
typedef string str; 
typedef pair<ll,ll> pl; 
typedef vector<ll> vl; 
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define nn <<"\n"
#define F0R(i,a) for(ll i=0;i<a;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
int INF=0x3f3f3f3f;
ll MOD=1000000007;

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
map<ll,ll> xFreq;
map<ll,ll> yFreq;
unordered_set<ll> xs;
unordered_set<ll> ys;
map<pair<ll,ll>,ll> zFreq;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	int n;
	cin>>n;
	ll ans=0;
	F0R(i,n){
		ll x;
		ll y;
		cin>>x>>y;
		ans+=xFreq[x];
		ans+=yFreq[y];
		ans-=zFreq[{x,y}];
		xFreq[x]++;
		yFreq[y]++;
		zFreq[{x,y}]++;
	}
	cout<<ans nn;

}
