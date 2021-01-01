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
        ll n,x;
        cin>>n>>x;
        vector<ll> nums(n);
        F0R(i,n){
            ll a;
            cin>>nums[i];
        }
        //for(ll i:nums) cout<<i<<" " ; 
        sort(nums.begin(),nums.end());
        ll ans=0;
        ll currNum=0;
        for(ll i=n-1;i>=0;i--){
            ll it=nums[i];
            currNum++;
            if(it*currNum>=x){
                ans++;
                currNum=0;
            }
        }
        cout<<ans nn;
    }
}
