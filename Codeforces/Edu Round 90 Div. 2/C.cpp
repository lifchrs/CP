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
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	ll t;
	cin>>t;
	//count # of - in the beginning. n*(n+1)/2 from that
	while(t--){
		string a;
		cin>>a;
		/*vl pref;
		curr=0;
		for(char yuh:a){
			if(yuh=='1') curr++;
			if(yuh==='0') curr--;
			pref.pb(curr);
		}
		ll ans=0;
		FOR(i,0,pref.size()){
			if(pref[i]<0){
				sum+=i+1;
			}
		}*/
		ll curr=0;
		ll ans=0;
		for(ll i=0;i<a.length();i++){
			if(a[i]=='+'){
				curr++;
			}else{
				curr--;
				if(curr<0){
					curr++;
					ans+=i+1;
				//	cout<<ans<<" ";
				}
			}
		}
		ans+=a.size();
		cout<<ans nn;
	}
}
