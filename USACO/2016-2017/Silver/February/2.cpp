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
	ifstream cin("maxcross.in");
	ofstream cout("maxcross.out");
    ll n,k,b;
    cin>>n>>k>>b;
    vector<pair<ll,bool>> nums;
    F0R(i,n){
        nums.pb({i+1,1});
    }
    F0R(i,b){
        ll change;
        cin>>change;
        nums[change-1].second=0;
    }
    ll ans=INF;
    ll bad=0;
    F0R(i,k){
        bad+=(!nums[i].second);
//        cout<<bad<<" ";
    }
//    cout<<bad nn;
 //   cout<<k nn;
    ans=bad;
    FOR(i,1,n-k+1){
        bad-=!(nums[i-1].second);
 //       cout<<"removed: "<<nums[i-1].first nn;
        bad+=(!nums[i+k-1].second);
//        cout<<"added: "<<nums[i+k-1].first nn;
        ans=min(ans,bad);
 //       cout<<bad nn;
    }
    cout<<ans nn;
}
