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
    ll n,k;
    cin >> n >> k;
    vl nums(n);
    F0R(i,n) cin >> nums[i];
    sort(nums.begin(),nums.end());
    ll total = 1;
    bool can = 1;
    for(ll i = k; i < n; i++){
        if(nums[i] == nums[k-1]){
            can = 0;
            break;
        }
    }
    cout nn;
    if(can){
        if(k == 0){
            if(nums[0]>1) cout << nums[0]-1;
            else cout << "-1";
            return 0;
        }
        cout << nums[k-1] nn;
    }else cout << "-1" nn;
}


/* 7 4 */
/* 3 7 6 1 10 3 20 */

/* 7 2 */ 
/* 3 7 5 1 10 3 20 */
