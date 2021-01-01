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
map<ll,ll> cnts;
ll n;
ll k;
vl nums(int(2e5+10));
bool can(ll cnt){
    if(cnt == 0) return 1;
    ll sum = 0;
    F0R(i,2e5+10){
        sum += cnts[i]/cnt;
    }
    if(sum >= k){
        return 1;
    }
    else return 0;
}
const int MXN=100000;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
    cin >> n >> k;
    F0R(i,n) cin >> nums[i];
    F0R(i,n) cnts[nums[i]]++;
    ll l = 0,r = int(2e5+10);
    ll val = 1;
    while(r >= l){
        ll mid = (l+r)/2;
        if(can(mid)){
            val = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    ll j = 0;
    F0R(i,int(2e5+10)){
        if(j == k) break;
        while(cnts[i] >= val && k > j){
            cout << i << " ";
            j++;
            cnts[i] -= val;
        }
    }
    /* for each val, check if you can possible make it with x amount of elements */
}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


