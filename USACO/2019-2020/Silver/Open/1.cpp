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

string name = "socdist";

vector<pl> intervals;

ll n,m;

bool can(ll size){
    ll pos = 0;
    ll currInterval = 0;
    ll cowsPlaced = 0;
    while(cowsPlaced < n && currInterval < intervals.size()){
        pl in = intervals[currInterval];
        if(pos < in.first){
            pos = in.first + size;
            cowsPlaced++;
        }
        if(pos >= in.first && pos <= in.second){
            cowsPlaced++;
            pos += size;
        }
        if(pos > in.second){
            currInterval++;
        }
    }
    return (cowsPlaced >= n);
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
    cin >> n >> m;
    F0R(i,m){
        ll l,r;
        cin >> l >> r;
        intervals.pb(mp(l,r));
    }

    sort(intervals.begin(),intervals.end());

    ll low = 1, high = INF;
    /* cout << low << high nn; */

    while(low < high) {
        ll mid = (low + high)/2;
        if(can(mid)) low = mid;
        else high = mid;
        if(high == low + 1){
            low = can(high) ? high : low;
            break;
        }
        /* cout << mid << high << low nn; */
    }

    cout << low nn;
    cerr nn nn nn << (double)(clock() - tStart) / CLOCKS_PER_SEC nn nn ;
}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


