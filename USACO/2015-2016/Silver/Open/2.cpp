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
	ifstream cin("diamond.in");
	ofstream cout("diamond.out");
    ll n,k;
    cin>>n>>k;
    vl diamonds;
    F0R(i,n){
        ll diam;
        cin>>diam;
        diamonds.pb(diam);
    }
    sort(diamonds.begin(),diamonds.end());
    vl canStore; 
    F0R(i,n){
        ll yuh=upper_bound(diamonds.begin(),diamonds.end(),diamonds[i]+k)-diamonds.begin()-i;
       // if(diamonds[i]==diamonds[i-1]) canStore[i]=canStore[i-1];
        canStore.pb(yuh);
    }
    //for(ll i:canStore) cout<<i<<" ";
    //cout nn;
    
    vl maxStore;
    ll ma=0;
    F0R(i,n){
        ma=max(ma,canStore[n-i-1]);
        maxStore.pb(ma);
    }
    reverse(maxStore.begin(),maxStore.end());
    //for(ll i:maxStore) cout<<i<<" ";
    //cout nn;
    ll ans=0;
    F0R(i,n){
        ans=max(canStore[i]+maxStore[i+canStore[i]],ans);
    }
    cout<<ans nn;
}
/*idea:
First sort the diamonds.
Then go through each diamond being the lowest and find the number of diamonds that can be stored. Then iterate through the number of diamonds that can be stored as a max from reverse, and find the number. Then o(n) sol.
So overall first do O(nlogn) then do o(n) and then do O(n).
  */
