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
#define nn <<"\n"
#define F0R(i,a) for(ll i=0;i<a;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define oi
ll INF = 0x3f3f3f3f3f3f3f3f;

string name = "convention2";


int main(){
    #ifdef oi
        ifstream cin(name + ".in");
        /* ofstream cout(name + ".out"); */
    #endif
    #ifndef oi
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    #endif
    clock_t tStart = clock();
    ll n;
    cin >> n;
    priority_queue<pair<ll,pair<ll,ll>>> pq;
    vector<pair<pair<ll,ll>,ll>> cows;
    F0R(i,n){
        ll a,b;
        cin >> a >> b;
        cows.pb(mp(mp(a,b),i+1));
    }
    sort(cows.begin(),cows.end());
    ll ans = -1, currTime = 0;
    F0R(i,n){
        auto yuh = cows[i];
        /* cout << "tyes"; */
        currTime = yuh.first.first;
        while(i+1 < n && cows[i].first.first == currTime){
        yuh = cows[i];
        ll priority = yuh.second;
        ll startTime = yuh.first.first;
        ll duration = yuh.first.second;
        pq.push(mp(-priority,mp(startTime,duration)));
        cerr << "pr " << -priority nn nn;
        i++;
        }
        while(!pq.empty() && pq.top().second.first + pq.top().second.second >= currTime){
            pq.pop();
            ans = max(currTime - pq.top().second.first,ans);
            cerr << currTime nn;
            cerr << currTime - pq.top().second.first nn;
            cerr << "act " << pq.top().first nn;
        }
    }
    cout << ans nn;
    cerr nn nn nn << (double)(clock() - tStart) / CLOCKS_PER_SEC nn nn ;
}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


