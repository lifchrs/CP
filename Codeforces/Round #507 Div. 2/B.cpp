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
	ll n,k;
	cin>>n>>k;
	cout<<(n-1)/(2*k+1)+1 nn;
	ll rem=n%(1+2*k); ll second=0;
	//cout<<rem<<" "<<k<<" " nn;
	ll first=min(max(rem,1ll),max(k,1ll));
	rem-=first;
	//first+=k;
	second=max(rem,(ll)(0));
	second=n-(second);
	if(n%(1+2*k)==0&&k!=0){
		first=k+1;
		second=n-(k+1);
	}
	ll count=0;
	cout<<first<<" "; 
	count++;
	bool can=0;
	for(ll i=first+2*k+1;i<=n;i+=2*k+1){
		cout<<i<<" ";
		can=1;
		count++;
	}
	if(first!=second &&!can&&count<(n-1)/(2*k+1)+1)
	cout<<second nn;
	cout nn;
}
