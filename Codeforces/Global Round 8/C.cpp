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
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin>>n;
	//ll numGray=4*(ll)(sqrt(n))+n;
	//cout<<numGray<<endl;
	vector<pair<int,int>> ans;
	int yIntercept=2;
	FOR(i,0,n+1){
		ans.pb({i,i+yIntercept});
	}
	yIntercept--;
	FOR(i,0,n+2){
		ans.pb({i,i+yIntercept});
	}
	yIntercept--;
	FOR(i,1,n+2){
		ans.pb({i,i+yIntercept});
	}
	cout<<ans.size()<<endl;
	for(pair<int,int> yuh:ans){
		cout<<yuh.first<<" "<<yuh.second<<endl;
	}
	cin>>n;
cout<<(1ll<<n)<<endl;

	
}
