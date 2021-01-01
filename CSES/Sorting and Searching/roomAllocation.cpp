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
int main(){
	/* ios_base::sync_with_stdio(0); */
	/* cin.tie(0); */
	//ifstream cin("name.in");
	//ofstream cout("name.out");
    ll n;
    cin >> n;
    multiset<pair<ll,ll>> rooms; //last day, number
    multiset<pair<pair<ll,ll>,ll>> entriesExits; //start, end, number
    ll currNum = 2;
    F0R(i,n){
        ll a,b;
        cin >> a >> b;
        entriesExits.insert(make_pair(make_pair(a,b),i));
    }
    vector<pair<ll,ll>> answers;
    rooms.insert({-1,1});
    for(pair<pair<ll,ll>,ll> x : entriesExits){
        pair<ll,ll> y = *rooms.begin();
        if(y.first >= x.first.first){ 
             rooms.insert({x.first.first,currNum}); 
             currNum++; 
             answers.pb({x.second,currNum-1});
        }else { 
            auto it = rooms.begin();
            rooms.erase(it);  
            ll id = y.second; 
            answers.pb({x.second,id});
            rooms.insert(make_pair(x.first.second,id)); 
        } 

    }
    sort(answers.begin(),answers.end());
    cout << rooms.size() nn;
    for(pair<ll,ll> i : answers) cout << i.second << " ";
    cout nn;
    for(pair<ll,ll> i : answers) cout << i.first << " ";
    cout nn;
}
