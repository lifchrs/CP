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
        vl factors(3);
        F0R(i,3) factors[i] == 1;
        ll can = 0;
        for(ll i = 2; i*i < n; i++){
            if(n%i == 0){
                factors[0] = i;
                can = 1;
                break;
            }
        }

        if(can){
            can = 0;
        }else{
            cout << "NO" nn;
            /* cout << t nn; */
            continue;
        }

        for(ll i = factors[0]+1; i*i < n/factors[0]; i++){
            if((n/factors[0])%i == 0){
                factors[1] = i;
                factors[2] = n/(factors[1]*factors[0]);
                break;
            }
        }

        set<ll> yuh;
        yuh.insert(factors[1]);
        yuh.insert(factors[2]);
        yuh.insert(factors[0]);
        if(yuh.size() == 3){
            cout << "YES" nn;
            cout << factors[1] << " " << factors[2] << " " << factors[0] nn;
        }else{
            cout << "NO" nn;
            /* F0R(i,3) cout << factors[i] << " "; */
        }
    }
}
