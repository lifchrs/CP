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
const int MXN = int(3e5);
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
        vl nums(n);
        F0R(i,n) cin >> nums[i];
        bool can = 1;
        F0R(i,n){
            if(nums[i] < i){
                nums[i] = min(nums[i], nums[i-1]-1);
                if(nums[i] < 0){
                    can = 0;
                    break;
                }
                FOR(j,i+1,n){
                    if(nums[j] >= nums[j-1]-1){
                        nums[j] = nums[j-1]-1;
                    }
                    if(nums[j] < 0){
                        can = false;
                        break;
                    }
                }
                break;
            }
        }
        if(can) cout << "Yes";
        else cout << "No";
        cout nn;
    }
}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


