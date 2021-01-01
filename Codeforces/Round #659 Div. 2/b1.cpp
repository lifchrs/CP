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
int INF=0x3f3f3f3f;
ll MOD=1000000007;

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
ll t,n,k,l;
vl depths;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
    cin >> t;
    while(t--){
        cin >> n >> k >> l;
        ll maxDepth=0;
        F0R(i,n){
            ll a;
            cin>>a;
            maxDepth=max(maxDepth,a);
            depths.pb(a);
        }
        vl times;
        F0R(i,k+1){
            times.pb(i);
        }
        for(ll i=k+1;i>0;i--){
            times.pb(i);
        }
        bool done=0;
        F0R(i,2*k){
            if(done) break;
            ll time=k%2*k;
            ll currPos=0;
            ll can=0;
            while(!can){
                if(depths[currPos]+times[time]>l) break;
                if(depths[currPos]+times[time]<=l && depths[currPos+1]+times[time]<=l){
                    currPos++;
                }else{
                    time++;
                    time%=2*k;
                }
                if(currPos==n+1) can=1;
            }
            if(can) done=1;
        }
        if(done) cout << "Yes" nn;
        else cout<<"No" nn;
    }
}

