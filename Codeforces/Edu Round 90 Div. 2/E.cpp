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
		F0R(i,n){
			int a;
			cin>>a;
			nums.pb(a);
		}
		vl dif1,dif2;
		FOR(i,0,n-1){
			dif1.pb(nums[i+1]-nums[i]);
			i++;
		}
		FOR(i,1,n-1){
			dif2.pb(0-nums[i+1]+nums[i]);
			i++;
		}
		ll best1=0, sum1=0;
		for(int i=0;i<dif1.size();i++){
			sum1=max(dif1[i],sum1+dif1[i]);
			best1=max(best1,sum1);
		}
		ll best2=0, sum2=0;
		for(int i=0;i<dif2.size();i++){
			sum2=max(dif2[i],sum2+dif2[i]);
			best2=max(best2,sum2);
		}
		ll rn=0;
		for(int i=0;i<n;i+=2){
			rn+=nums[i];
		}
		cout<<rn+max(best1,best2) nn;
		/*for(ll i:dif2){
			cout<<i<<" ";
		}*/
	//	cout nn;
	}
}
