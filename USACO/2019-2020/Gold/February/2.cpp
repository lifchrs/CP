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
ll MOD=1e9+7;

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
	ifstream cin("help.in");
	//ofstream cout("help.out");
    ll n;
    cin>>n;
    vector<tuple<ll,bool,ll>> nums;
    F0R(i,n){
        ll a,b;
        cin>>a>>b;
        nums.pb({a,1,i+1});
        nums.pb({b,0,i+1});
    }
    ll ans=0,numIn=0;
    sort(nums.begin(),nums.end());
    set<ll> currentlyIn;
    F0R(i,2*n){
        if(get<1>(nums[i])){
            currentlyIn.insert(get<2>(nums[i]));
            numIn++;
        }else{
           currentlyIn.erase(get<2>(nums[i]));
            numIn--;
        }
        ans+=numIn;
    }
    cout << ans nn;
}

