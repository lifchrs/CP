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

string name = "swap";

pl smalPow(ll n){
    ll curr = 1, cnt = 0;
    while(curr <= n){
        curr *= 2;
        cnt++;
    }
    return mp(curr/2,cnt);
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

    /* /1* writing out the bruteforce solution first *1/ */
    /* ll n, m, k; */
    /* cin >> n >> m >> k; */
    /* vl ans; */
    /* vector<pl> ms; */
    /* FOR(i,1,n+1){ */
    /*     ans.pb(i); */
    /* } */
    /* F0R(i,m){ */
    /*     ll l,r; */
    /*     cin >> l >> r; */
    /*     ms.pb(mp(l,r)); */
    /* } */
    /* F0R(i,k){ */
    /*     F0R(j,m){ */
    /*         ll left = ms[j].first-1, right = ms[j].second; */
    /*         reverse(ans.begin()+left,ans.begin()+right); */
    /*         /1* for(ll a : ans) cout << a nn; *1/ */
    /*         /1* cout nn nn; *1/ */
    /*     } */
    /* } */
    /* for(ll a : ans){ */
    /*     cout << a nn; */
    /* } */

    ll n, m, k;
    cin >> n >> m >> k;
    //idea is to create a map, mapping start position and end position
    //if there is a repeat then just mod
    vl ans(n+1);
    vector<pl> ms;
    FOR(i,1,n+1) ans[i] = i;

    F0R(i,m){
        ll l,r;
        cin >> l >> r;
        ms.pb(mp(l,r));
    }

    ll endPoints[100][n*2];
    F0R(i,m){
        ll l = ms[i].first, r = ms[i].second;
        reverse(ans.begin()+l,ans.begin()+r+1);
    }

    FOR(i,1,n+1){
        /* mapping the original position to the next position */
        endPoints[1][i] = i;
    }

    FOR(i,2,90){
        FOR(j,1,n+1){
            endPoints[i][j] = endPoints[i-1][endPoints[i-1][j]];
        }
    }
    vl finaleans(n);

    F0R(i,n){
        ll x = i+1;
        ll tempk = k;
        while(tempk > 0){
            pl yuh = smalPow(tempk);
            x = endPoints[yuh.second][x];
            tempk -= yuh.first;
        }
        finaleans[i]=x;
    }

    for(ll i : finaleans) cout << i nn;
    

    cerr nn nn nn << (double)(clock() - tStart) / CLOCKS_PER_SEC nn nn ;
}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


