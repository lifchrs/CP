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
ll visited[1010001];
vl adjList[1010001];
void dfs(ll node){
	visited[node]=1;
	for(ll next:adjList[node]){
		if(!visited[next]){
			dfs(next);
		}
	}
}
bool arr[1002][1002];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	ll n,m;
	vl listSpace;
	cin>>n>>m;
	m+=2;
	n+=2;
	FOR(i,1,n-1){
		FOR(j,1,m-1){
			char a;
			cin>>a;
			if(a=='#'){
				arr[i][j]=0;
			}else{
				arr[i][j]=1;
				listSpace.pb(i*m+j);
			}
		}
	}
	/*FOR(i,0,n+2){
		FOR(j,0,m+2){
			cout<<arr[i][j]<<" ";
		}
		cout nn;
	}*/
	FOR(i,1,n-1){
		FOR(j,1,m-1){
			if(arr[i][j]){
				if(arr[i+1][j]){
					ll node2=(i+1)*m+j;
					//cout<<node2<<" ";
					adjList[node2-m].pb(node2);
				}
				if(arr[i][j+1]){
					ll node2=i*m+j+1;
					adjList[node2-1].pb(node2);
				}
				if(arr[i-1][j]){
					ll node2=(i-1)*m+j;
					adjList[node2+m].pb(node2);
				}
				if(arr[i][j-1]){
					ll node2=(i)*m+j-1;
					adjList[node2+1].pb(node2);
				}
			}	
		}
	}
	
	ll ans=0;
	//cout<<"start" nn;
	for(ll yuh:listSpace){
		if(!visited[yuh]){
			//cout<<yuh nn;
			ans++;
			dfs(yuh);
		}
	}
	cout<<ans nn;
}
