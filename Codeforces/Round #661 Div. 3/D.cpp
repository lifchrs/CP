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
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<vl> need(2); //need, pair
        vl yuh(n);
        ll curr = 1;
        ll i = 0;
        for(char a : s){
            bool thing;
            if(a == '0') thing = 0;
            else thing = 1;
            if(need[thing].size() == 0){
                need[(!thing)].pb(curr);
                curr++;
                yuh[i] = curr-1; 
            }else{
                yuh[i] = need[thing][0]; 
                need[thing].erase(need[thing].begin());
                need[!thing].pb(yuh[i]);
            }
            i++;
        }
        cout << need[0].size()+need[1].size() nn;
        F0R(i,yuh.size()) cout << yuh[i] << " ";
        cout nn;
    }
}

