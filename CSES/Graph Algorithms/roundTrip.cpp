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
ll last[100001];
vl adjList[100001];
bool visited[100001];
ll repeat=-1;
ll lastUn=-1;
bool done=0;
vl track;
void dfs(ll node){
	if(done) return;
	track.pb(node);

	visited[node]=1;
	for(ll next:adjList[node]){
		if(!visited[next]){
			last[next]=node;
			visited[next]=1;
			dfs(next);
		}else{
			if(next!=last[node]&&!done){
				repeat=next;
				lastUn=node;
				done=1;
				//cout<<"BRUH MOMENT" nn;
				//cout<<lastUn nn;
				//cout<< repeat nn;
				return;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	//cin.tie(0);
	ll n,m;
	cin>>n>>m;
	F0R(i,m){
		ll a,b;
		cin>>a>>b;
		adjList[a].pb(b);
		adjList[b].pb(a);
	}
	for(ll i=1; !done && i<=n;i++){
		if(!visited[i]){
			dfs(i);
			last[i]=-1;
		}
	}
	vl ans;
	//cout<<repeat nn;
	//cout<<lastUn nn;
	//cout<<visited[5] nn<<done nn;
	//for(ll i:track) cout<<i<<" "; cout nn;
	//for(ll i:adjList[5]) cout<<i<<" "; cout nn;
	if(!done){
		cout<<"IMPOSSIBLE" nn;
	}else{
		ans.pb(repeat);
		ll current=lastUn;
		ans.pb(lastUn);
		while(current!=repeat){
			current=last[current];
			ans.pb(current);
		}
	}
	cout<<ans.size() nn;
	reverse(ans.begin(),ans.end());
	for(ll i:ans){
		cout<<i<<" ";
	}
	cout nn;
}
