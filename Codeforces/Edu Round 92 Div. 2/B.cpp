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
        ll n,k,z;
        cin >> n >> k >> z;
        vl nums(n);
        F0R(i,n) cin >> nums[i];
        ll dp[n][z+1][2]; //position, number of left moves, last move (left or not)
        F0R(i,n) F0R(j,z+1) F0R(x,2) dp[i][j][x] = -INF;
        dp[0][0][0] = nums[0];
        F0R(j,z+1){
            F0R(i,n){
                F0R(x,2){
                    if(i > 0 && j < z && x != 1){
                        dp[i-1][j+1][1] = max(dp[i-1][j+1][1],dp[i][j][x] + nums[i-1]);
                    }
                    if(i < n-1){
                        dp[i+1][j][0] = max(dp[i+1][j][0],dp[i][j][x]+nums[i+1]);
                    }
                }
            }
        }
        ll ans=-INF;
        F0R(j,z+1) {
            ll i = k-2*j;
            if(i<0) continue;
            ans = max(ans,max(dp[i][j][0],dp[i][j][1]));
        }
        cout << ans nn;
    }
}
