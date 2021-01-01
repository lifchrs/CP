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
    ll n,x;
    cin >> n >> x;
    vl nums(n);
    F0R(i,n) cin >> nums[i];
    vl pref(n+1);
    ll sum = 0;
    F0R(i,n){
        pref[i]=sum;
        sum += nums[i];
    }
    pref[n] = sum;
    ll ans = 0;
    for(ll left = 0, right = 0; right <= n;){
        if(pref[right] - pref[left] < x) {
            right++;
        }else if(pref[right] - pref[left] > x) {
            left++;
        }else if(pref[right] - pref[left] == x){
            ans++;
            /* cout << left << ' ' << right nn; */
            left++;
        }
    }
    /* for(ll i : pref) cout << i << ' '; */
    /* cout nn; */
    cout << ans nn;
}

