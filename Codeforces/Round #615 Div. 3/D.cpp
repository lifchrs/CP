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
ll INF=0x3f3f3f3f3f3f3f3f;
ll MOD=(ll)(1e9+7); //1e9+7

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
const int MXN=100000;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
    ll q,x;
    cin >> q >> x;
    set<pair<ll,ll>> bruh;
    map<ll,ll> yuh;
    F0R(i,x){
        bruh.insert({yuh[i],i});
    }
    F0R(i,q){
        ll n;
        cin >> n;
        bruh.erase({yuh[((n%x)+x)%x],((n%x)+x)%x});
        yuh[((n%x)+x)%x]++;
        bruh.insert({yuh[((n%x)+x)%x],((n%x+x)%x)});
        pair<ll,ll> first = *bruh.begin();
        cout << first.first * x + first.second nn;
    }
}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


