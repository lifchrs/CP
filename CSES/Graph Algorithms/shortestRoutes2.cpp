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

const int MXN = 1001;

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
    ll n, m, q;
    cin >> n >> m >> q;
    vector<pl> adjList[MXN];
    F0R(i,m){
        ll a, b, c;
        cin >> a >> b >> c;
        adjList[a].pb({b,c});
        adjList[b].pb({a,c});
    }
    ll dp[MXN][MXN];
    F0R(i,q){
        ll start,end;
        cin >> start >> end;
        priority_queue<pl,vector<pl>,greater<pl>> pq;
        pq.emplace(start,0);
        ll dist[MXN];
        for(ll& a : dist) a = INF;
        dist[start] = 0;
        while(!pq.empty()){
            pl curr = pq.top();
            pq.pop();
            if(curr.second != dist[curr.first]) continue;
            for(pl next : adjList[curr.first]){
                if(curr.second + next.second < dist[next.first]){
                    dist[next.first] = curr.second + next.second;
                    pq.emplace(next.first,dist[next.first]);
                }
            }
        }
        if(dist[end] == INF){
            cout << -1 nn; 
        }else cout << dist[end] nn;
    }
    clock_t tStart = clock();
    cerr nn nn nn << (double)(clock() - tStart) / CLOCKS_PER_SEC nn nn ;
}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


