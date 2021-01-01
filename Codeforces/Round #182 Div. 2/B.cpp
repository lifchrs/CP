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
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	ll n,m;
	cin>>n>>m;
	vl cs;
	vl ts;
	vl pref;
	for(ll i=0;i<n;i++){
		int a;
		cin>>a;
		int b;
		cin>>b;
		cs.pb(a);
		ts.pb(b);
	}
	/*for(ll i: cs) cout<<i<<" ";
	cout nn;
	for(ll i:ts) cout<<i<<" ";
	cout nn;
	*/
	ll current=0;
	ll total=0;
	F0R(i,m){
		//break;
		int a;
		cin>>a;
		a-=total;
		while(a>0){
			a-=cs[current]*ts[current];
			total+=cs[current]*ts[current];
			current++;
		}
		cout<<current nn;
	}
	//for(ll a: nums) cout<<" "<<a;
}

