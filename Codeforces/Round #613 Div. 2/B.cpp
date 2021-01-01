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
ll INF = 0x3f3f3f3f3f3f3f3f;
ll MOD = (ll)(1e9+7); //1e9+7

ll binpow(ll a,ll b, ll c = 1e18){
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

const int MXN = 100000;

ll gcd(ll a, ll b){
    if(a > b){
        if(a%b == 0){
            return b;
        }else{
            return gcd(a%b,b);
        }
    }else{
        if(b%a == 0){
            return a;
        }else{
            return gcd(b%a,a);
        }
    }
}

ll nCr(ll n, ll r){
    if(r > n) return 0;
    if(r == 1) return n;
    return nCr(n-1, r-1) + nCr(n-1, r);
}

int main(){
    // string name = "";
    //ifstream cin(name+".in");
    //ofstream cout(name+".out");
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        bool can = 1;
        ll n;
        cin >> n;
        vl a(n+1);
        F0R(i,n) cin >> a[i];
        vl pref(n);
        ll sum = 0;
        F0R(i,n){
            sum += a[i];
            if(sum < 1) can = 0;
        }
        sum = 0;
        for(ll i = n-1; i > -1; i--){
            sum += a[i];
            if(sum < 1) can = 0;
        }
        if(can) cout << "YES" nn;
        else cout << "NO" nn;
    }
}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


