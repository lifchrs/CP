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
ll INF=0x3f3f3f3f;
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
//ll count=0;
/*void dfs(ll node){
	count++;
	visited[node]=1;
	for(ll next:adjList[node]){
		if(!visited[next]{
			dfs(next);
		}
	}
}*/
const ll mxn=300001;
bool visited[mxn];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
	//	count=0;
		ll a;
		cin>>a;
		ll mi=INF,minPos=-1,maxPos=-1,ma=-INF;
		vl pref;
		vl nums;
		F0R(i,a){
			ll x;
			cin>>x;
			nums.pb(x);
		}
		if(nums[0]<nums[a-1]){
			cout<<"YES" nn;
		}else{
			cout<<"NO" nn;
		}
	}
}
