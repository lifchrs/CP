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
	ll v1,v2,v3,vm;
	cin>>v1>>v2>>v3>>vm;
	for(int i=200;i>0;i--){
		if(i<max(vm,v1)) continue;
		if(i>2*v1) continue;
		if(i<=2*vm) continue;
		for(int j=i-1;j>0;j--){
			if(j<max(vm,v2)) continue;
			if(j>2*v2) continue;
			if(j<=2*vm) continue;
			for(int k=j-1;k>0;k--){
				if(k<max(vm,v3)) continue;
				if(k>2*v3) continue;
				if(k>2*vm) continue;
				cout<<i<<" "<<j<<" "<<k nn;
				return 0;
			}
		}
	}
	cout<<-1 nn;
}
