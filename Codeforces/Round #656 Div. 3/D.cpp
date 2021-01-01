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
int solve(string a,char c){
	if(a.size()==1){
		return a[0]!=c;
	}
	ll mid=a.size()/2;
	ll cnt1=solve(a.substr(0,mid),c+1)+a.size()/2-count(a.begin()+mid,a.end(),c);
	ll cnt2=solve(a.substr(mid,mid),c+1)+a.size()/2-count(a.begin(),a.begin()+mid,c);
	return min(cnt1,cnt2);
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
		string x;
		ll y;cin>>y;
		cin>>x;
		cout<<solve(x,'a') nn;
	}
	
}
