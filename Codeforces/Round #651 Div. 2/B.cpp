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
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vl nums;
		vl odds; //(i,#)
		vl evens;
		ll numOdd=0,numEven=0;
		F0R(i,2*n){
			ll a;
			cin>>a;
			if(a%2==1){
				numOdd++;
				odds.pb(i+1);
			}else{
				numEven++;
				evens.pb(i+1);
			}
			nums.pb(a);
		}
		if(odds.size()==0){
			for(ll i=2;i<evens.size();i++){
				cout<<evens[i]<<" "<<evens[i+1] nn;
				i++;
			}
			continue;
		}
		if(odds.size()%2==1){
			for(ll i=1;i<odds.size();i++){
				cout<<odds[i]<<" "<<odds[i+1] nn;
				i++;
			}
			for(ll i=1;i<evens.size();i++){
				cout<<evens[i]<<" "<<evens[i+1] nn;
				i++;
			}
		}else{
			for(ll i=2;i<odds.size();i++){
				cout<<odds[i]<<" "<<odds[i+1] nn;
				i++;
			}
			for(ll i=0;i<evens.size();i++){
				cout<<evens[i]<<" "<<evens[i+1] nn;
				i++;
			}
		}
	}
}
