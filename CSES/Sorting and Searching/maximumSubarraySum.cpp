#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define F0R(i,a) for(int i=0;i<a;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
ll binpow(ll a,ll b){
	ll res=1;
	while(b>0){
		if(b & 1)
			res*=a;
		a*=a;
		b>>=1;
	}
	return res;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	vector<ll> nums;
	F0R(i,n){
		ll a;
		cin>>a;
		nums.pb(a);
	}
	ll ma=-0x3f3f3f3f;
	ll ans=-0x3f3f3f3f;
	for(ll i:nums){
		ma=max(ma+i,i);
		ans=max(ans,ma);
	}
	cout<<ans<<endl;
}
