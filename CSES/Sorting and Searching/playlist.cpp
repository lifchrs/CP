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
ll visited[200005];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	memset(visited,-1,sizeof(visited));
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	ll n;
	cin>>n;
	vl nums;
	F0R(i,n){
		ll a;
		cin>>a;
		nums.pb(a);
	}
	queue<ll> uniq;
	set<ll> uns;
	ll index=0;
	ll ans=0;
	while(index<n){
		if(uns.count(nums[index])==0){
			uniq.push(nums[index]);
			uns.insert(nums[index]);
			ll x=uniq.size();
			ans=max(ans,x);
			index++;
		}else{
			bool done=0;
			while (!done){
				ll next=uniq.front();
				if(next==nums[index]){
					done=1;
				}
				uns.erase(uns.lower_bound(next));
				uniq.pop();
			}
			uns.insert(nums[index]);
			uniq.push(nums[index]);
			ll x=uniq.size();
			ans=max(ans,x);
			index++;
		}
	}
	cout<<ans nn;
}
