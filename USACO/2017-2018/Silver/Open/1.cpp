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
/*
   Idea: count the number of elements that are greater than an element at a certain index. 
   Have the sorted array.
   Count the difference in abs(dist-numGreater).

   */
map<ll,ll> numSeen;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ifstream cin("sort.in");
    ofstream cout("sort.out");
    ll n;
    cin>>n;
    vector<pair<ll,ll>> arr;
    F0R(i,n){
        ll a;
        cin>>a;
        arr.pb({a,i});
    }
    ll ans=0;
    sort(arr.begin(),arr.end());
    F0R(i,n){
        ll dist=arr[i].second-i;
        if(dist>0) ans=max(ans,dist);
    }
    //cout<<1;
    cout<<ans+1 nn;
}
