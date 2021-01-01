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

const int MXN = 100000;

string name = "planting";

ll adjList[100002];
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
    ll n;
    cin >> n;
    F0R(i,n-1){
        ll a,b;
        cin >> a >> b;
        adjList[a]++;
        adjList[b]++;
    }
    ll ma = 0;
    F0R(i,100002){
        ma = max(ma, adjList[i]);
    }
    cout << ma + 1 nn;

    cerr nn nn nn << (double)(clock() - tStart) / CLOCKS_PER_SEC nn nn ;
}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


