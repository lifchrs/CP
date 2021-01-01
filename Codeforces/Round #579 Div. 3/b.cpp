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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> bruh;
		F0R(i,4*n){
			int yuh;
			cin>>yuh;
			bruh.pb(yuh);
		}
		sort(bruh.begin(),bruh.end());
		bool can=1;
		for(ll i=0,left=0,right=n*4-1;i<n;i++,left+=2,right-=2){
			if ((bruh[left] - bruh[left + 1]) || (bruh[right] - bruh[right - 1]) || (bruh[left] * bruh[right] - bruh[0] * bruh[n * 4 - 1])) {
				can = false; break;
			}
		} 
		if(can){
			cout<<"YES" nn;
		}else{
			cout<<"NO" nn;
		}
	}
}
