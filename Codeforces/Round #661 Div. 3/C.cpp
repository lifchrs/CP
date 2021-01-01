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
map<ll,ll> cnts;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
    ll t;
    cin >> t;
    while(t--){
        cnts.clear();
        ll n;
        cin >> n;
        vl weights(n);
        F0R(i,n){
            ll a;
            cin >> a;
            cnts[a]++;
            weights[i] = a;
        }
        ll end = -1;
        ll yuh;
        for(ll i = n+n+1; i>0; i--){
            ll nums = 0;
            for(ll j = 1; j < n+1; j++){
                if(j != i-j) nums += min(cnts[j],cnts[i-j]);
                if (j == i-j) nums += cnts[j];
            }
            end = max(nums,end);
        }
        cout << end/2 nn;
    }
}

