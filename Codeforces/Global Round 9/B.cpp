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
		ll n,m;
		cin>>n>>m;
		ll arr[n][m];
		vector<pair<ll,ll>> pos;
		F0R(i,n){
			F0R(j,m){
				cin>>arr[i][j];
			}
		}
		bool can=1;
		F0R(i,n){
			F0R(j,m){
				if(i==n-1&&j==m-1){
					if(arr[i][j]<=2){
						arr[i][j]=2;
					}else can=0;
					continue;
				}
				if(i==0&&j==0){
					if(arr[i][j]<=2){
						arr[i][j]=2;
					}else can=0;
					continue;
				}
				if(i==n-1&&j==0){
					if(arr[i][j]<=2){
						arr[i][j]=2;
					}else can=0;
					continue;
				}
				if(i==0&&j==m-1){
					if(arr[i][j]<=2){
						arr[i][j]=2;
					}else can=0;
					continue;
				}
				if(i==0){
					if(arr[i][j]<=3){
						arr[i][j]=3;
					}else can=0;
					continue;
				}
				if(i==n-1){
					if(arr[i][j]<=3){
						arr[i][j]=3;
					}else can=0;
					continue;
				}
				if(j==0){
					if(arr[i][j]<=3){
						arr[i][j]=3;
					}else can=0;
					continue;
				}
				if(j==m-1){
					if(arr[i][j]<=3){
						arr[i][j]=3;
					}else can=0;
					continue;
				}
				if(arr[i][j]>4){
					can=0;
				}else{
					arr[i][j]=4;
				}
			}
		}
		if(can){
			cout<<"YES" nn;
		}else{ 
			cout<<"NO" nn;
			continue;
		}
		F0R(i,n){
			F0R(j,m){
				cout<<arr[i][j]<<" ";
			}
			cout nn;
		}
	}
}
