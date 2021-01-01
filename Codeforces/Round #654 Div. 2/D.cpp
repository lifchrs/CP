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
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		bool arr[n+1][n+1];
		F0R(i,n+1){
			F0R(j,n+1){
				arr[i][j]=0;
			}
		}
		ll yint1=n;
		ll yint2=n-1;
		F0R(i,n){
			if(k=0){
				break;
			}
			if(arr[n][-n+yint1]==0){
				if(k>0){
					arr[n][-n+yint1]=1;
					k--;
				}
			}
			
		}
		F0R(i,n){
			if(k==0) break;
			
		}
	}
}
