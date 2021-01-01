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
/* #define oi */
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

pl highestPowerof2(ll n) 
{ 
    ll ans = 1;
    ll cnt = 0;
    while(ans <= n){
        ans *= 2;
        cnt++;
    }
    return mp(ans/2,cnt);
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

string name = "";


int main(){
    #ifdef oi
        ifstream cin(name + ".in");
        ofstream cout(name + ".out");
    #endif
    #ifndef oi
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    #endif
    clock_t tStart = clock();
    ll n,q;
    cin >> n >> q;
    ll binLifts[50][n*2];
    F0R(i,n){
        cin >> binLifts[1][i+1];
    }
    FOR(i,2,48){
        FOR(j,1,n+1){
            //rn it has j --> b. we need j --> b --> c
            binLifts[i][j] = binLifts[i-1][binLifts[i-1][j]];
        }
    }
    vl ans;
    F0R(i,q){
        ll x,k;
        cin >> x >> k;
        while(k > 0){
            pl yuh = highestPowerof2(k);
            x = binLifts[yuh.second][x];
            k -= yuh.first;
        }
        ans.pb(x);
    }
    for(ll i : ans) cout << i nn;
    cerr nn nn nn << (double)(clock() - tStart) / CLOCKS_PER_SEC nn nn ;
}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


