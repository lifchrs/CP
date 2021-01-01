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
#define oi
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

string name = "cowdance";
ll n,t;
vl d;

bool can(ll k){
    ll a = n;
    if(k > n) return 1;
    multiset<pair<ll,ll>> dancers;
    ll currDancer = 0,currTime = 0;
    while(currDancer < k){
        dancers.insert({currTime + d[currDancer],currTime});
        a--;
        currDancer++;
    }
    while(currDancer < n){
        pl beg = *dancers.begin();
        currTime = beg.first;
        if(currTime > t) return 0;
        dancers.erase(dancers.begin());
        dancers.insert({currTime + d[currDancer],currTime});
        currDancer++;
    }
    auto it = dancers.end();
    it--;
    pl end = *it;
    if(end.first > t) return 0;
    else return 1;
}


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
    cin >> n >> t;
    F0R(i,n){
        ll a;
        cin >> a;
        d.pb(a);
    }
    ll ans = -4;
    ll low = 1, high = t, mid;
    while(1){
        mid = (high + low)/2;
        if(!can(mid)){
            low = mid+1;
        }else{
            high = mid;
        }
        if(high == low){
            ans = high;
            break;
        }
        
    }
    cout << ans nn;



    cerr nn nn nn << (double)(clock() - tStart) / CLOCKS_PER_SEC nn nn;
}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


