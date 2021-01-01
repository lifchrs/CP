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
 ll h,w,k;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	cin>>h>>w>>k;
	bool arr[h][w];
	ll numBlack=0;
	F0R(i,h){
		F0R(j,w){
			char a;
			cin>>a;
			if(a=='#') {
				arr[i][j]=1;
				numBlack++;
			}
			else{
				arr[i][j]=0;
			}
		}
	}
	F0R(i,h){
		F0R(j,w){
			cout<<arr[i][j]<< " ";
		}
		cout nn;
	}
	cout nn;
	ll ans=0;
	F0R(i,h-1){
		cout<<"yuh ";
		cout nn<<i nn;
		ll count=0;
		for(ll next=i+1;next<h;next++){
			cout<<i<<" "<<next nn;
			bool yuh[h][w];
			F0R(y,h){
				F0R(j,w){
					yuh[y][j]=arr[y][j];
				}
			}
			F0R(j,w){
				if(yuh[i][j]==0){
					yuh[i][j]=1;
					count++;
				}
				if(yuh[next][j]==0){
					yuh[next][j]=1;
					count++;
				}
			}
			if(numBlack+count==k) ans++;
			//cout<<count<<" ";
			count=0;
		}

	}
	cout nn;
	F0R(j,w-1){
		ll count=0;
		for(ll next=j+1;next<w;next++){
			bool yuh[h][w];
			F0R(i,h){
				F0R(x,w){
					yuh[i][x]=arr[i][x];
				}
			}
			F0R(i,h){
				if(yuh[i][j]==0){
					yuh[i][j]=1;
					count++;
				}
				if(yuh[i][next]==0){
					yuh[i][next]=1;
					count++;
				}
			}
			if(numBlack+count==k) ans++;
			cout<<count<<" ";
			count=0;
		}

	}
	cout nn;
	F0R(i,h){
		F0R(j,w){
			ll count=0;
			bool yuh[h][w];
			F0R(i,h){
				F0R(j,w){
					yuh[i][j]=arr[i][j];
				}
			}
			F0R(x,w){
				if(arr[i][x]==0){
					arr[i][x]=1;
					count++;
				}
			}
			F0R(y,h){
				if(arr[y][j]){
					arr[y][j]=1;
					count++;
				}
			}
			if(count+numBlack==k) ans++;
			cout<<count<<" ";
			count=0;
		}
	}
	cout<<ans nn;
}
