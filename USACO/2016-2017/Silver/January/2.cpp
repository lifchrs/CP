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
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ifstream cin("hps.in");
	ofstream cout("hps.out");
    ll n;
    cin>>n;
    vector<char> moves;
    F0R(i,n){
        char a;
        cin>>a;
        moves.pb(a);
    }
    ll h=0,p=0,s=0;
    vector<pair<pair<ll,ll>,ll>> pref; //H,P,S
    F0R(i,n){
        if(moves[i]=='H'){
            h++;
        }else if (moves[i] == 'P'){
            p++;
        }else if(moves[i] == 'S'){
            s++;
        }
        pref.pb({{h,p},s});
    }
    pair<pair<ll,ll>,ll> end = pref[n-1];
    ll ans=0;
    F0R(i,n){
        ll firstMax=max(pref[i].first.first,max(pref[i].first.second,pref[i].second));
        ll secondMax=max(end.first.first-pref[i].first.first,max(end.first.second-pref[i].first.second,end.second-pref[i].second));
        ans=max(firstMax+secondMax,ans);
    }
    cout<<ans nn;
}
