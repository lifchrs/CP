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
ll people[MXN],counts[MXN],happiness[MXN];
bool visited[MXN];
vl adjList[MXN];
void dfs(ll node){
    visited[node] = 1;
    for(ll next : adjList[node]){
        counts[next] = counts[node] + people[next];
        visited[node] = 1;
        dfs(next);
    }
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
    ll t;
    cin >> t;
    while(t--) {
        ll n, m;
        cin >> n >> m;
        F0R(i,MXN){
            people[i] = 0;
            counts[i] = 0;
            adjList[i].clear();
            visited[i] = 0;
            happiness[i] = 0;
        }
        
        /* F0R(i,n) cin >> people[i]; */
        /* F0R(i,n) cin >> happiness[i]; */
        /* F0R(i,n-1){ */
        /*     ll a,b; */
        /*     cin >> a >> b; */
        /*     a--; */
        /*     b--; */
        /*     adjList[a].pb(b); */
        /*     adjList[b].pb(a); */
        /* } */
        /* vl ends; */


        /* F0R(i,n){ */
        /*     if(adjList[i].size() == 1){ */
        /*         ends.pb(i); */
        /*         counts[i] = people[i]; */
        /*     } */
        /* } */
        /* F0R(i,ends.size()) dfs(ends[i]); */
        /* bool can = 1; */
        /* F0R(i,n){ */
        /*     if(abs(happiness[i]) > abs(counts[i])){ */
        /*         can = 0; */
        /*     } */
        /* } */
        /* if(can) cout << "YES" nn; else cout << "NO" nn; */


    }
}

