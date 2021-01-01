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
	while(t--){
		ll n;
		cin>>n;
		vl nums;
		ll apexInd=0;
		F0R(i,n){
			ll a;
			cin>>a;
			nums.pb(a);
		}
		ll delInd=0;
		vl apexes;
		ll startInd=0;
		apexes.pb(0);
		apexes.pb(0);
		bool down=nums[1]<nums[0];
		FOR(i,1,n-1){
			if(nums[i]<nums[i-1]){ down=1; startInd=i;}
			else if(nums[i]>nums[i-1]){ down=0;}
			if((nums[i]<nums[i+1]) && down) apexes.pb(startInd);
		}
		cout<<apexes[apexes.size()-1] nn;
		//cout nn nn;
		//for(ll i:apexes) cout<<i<<" ";
		//cout nn;
	}
}
