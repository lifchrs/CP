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
    vector<pair<ll,ll>> nums(n);
    ll sum = 0;
    vl indices;
    F0R(i,n){
        ll a;
        cin >> a;
        nums[i] = {a,i};
        sum += a;
    }

    sort(nums.begin(),nums.end());
    ll max1 = nums[n-1].first;
    ll max2 = nums[n-2].first;
    F0R(i,n){
        ll curNum = nums[i].first;
        if(curNum == max1){
            if(sum - max1 - max2 == max2) indices.pb(nums[i].second + 1);
        }else{
            if(sum - max1 - curNum == max1) indices.pb(nums[i].second + 1);
        }
    }
    
    cout << indices.size() nn;
    for(ll i : indices) cout << i << " ";
    cout nn;

}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


