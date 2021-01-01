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

string name = "rental";


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
    ll n,m,r;
    cin >> n >> m >> r;
    vector<pl> buy;
    vl cows(n);
    F0R(i,n) cin >> cows[i];
    sort(cows.begin(),cows.end());
    reverse(cows.begin(),cows.end());
    F0R(i,m){
        ll q,p;
        cin >> q >> p;
        buy.pb(mp(p,q));
    }
    sort(buy.begin(),buy.end());
    reverse(buy.begin(),buy.end());

    /* for(ll i : cows) cout << i << " "; */
    /* cout nn; */

    /* for(pl x : buy) cout << x.first << " " << x.second nn; */
    /* cout nn; */

    vl renters(r);
    F0R(i,r) cin >> renters[i];
    sort(renters.begin(),renters.end());
    reverse(renters.begin(),renters.end());
    vl prefRent;
    ll sum = 0;
    prefRent.pb(0);
    for(ll i : renters){
        sum += i;
        prefRent.pb(sum);
    }
    bool renting = 0;
    ll currCow = 0, milker = 0;
    ll ans = 0, totalMoney = 0;

    while(currCow < n && milker < m && n-currCow - 1 >= 0){
        if(cows[currCow] >= buy[milker].second){
            totalMoney += buy[milker].first*buy[milker].second;
            cows[currCow] -= buy[milker].second;
            milker++;
            ans = max(ans,prefRent[min(r,max(0*n,n-currCow-1))]+totalMoney);
        }else{
            totalMoney += buy[milker].first*cows[currCow];
            buy[milker].second -= cows[currCow];
            ans = max(ans,prefRent[min(max(0*ans,n-currCow-1),r)]+totalMoney);
            currCow++;
        }
    }

    /* cout nn; */
    cout << ans nn;
    /* cout << totalMoney nn; */
    /* cout << prefRent[0] nn; */

    cerr nn nn nn << (double)(clock() - tStart) / CLOCKS_PER_SEC nn nn ;
}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


