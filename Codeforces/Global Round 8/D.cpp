#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
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
ll bitfreq[20];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	ll n;
	cin>>n;
	vector<ll> nums;
	ll totalbits=0;
	ll orr=0;
	FOR(i,0,20) bitfreq[i]=0;
	F0R(i,n){
		ll a;
		cin>>a;
		bitset<20> x(a);
		for(ll a=0;a<20;a++){
			if(x[a]){
				bitfreq[a]++;
			}
		}
	}
	bool done=0;
	vector<bitset<20>> yuh; 
	while(!done){
		done=1;
		bitset<20> ans;
		FOR(i,0,20){
			if(bitfreq[i]>0){
				done=0;
				ans[i]=1;
				bitfreq[i]--;
			}else{
			         ans[i]=0;
			}
		}
		yuh.pb(ans);
	}
	ll realAns=0;
	for(bitset<20> bruh:yuh){
		realAns+=(ll)bruh.to_ulong()*(ll)bruh.to_ulong();
	}
	cout<<realAns<<endl;
}
