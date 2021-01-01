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
int INF=0x3f3f3f3f;
ll MOD=1000000007;

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
vl nums;
ll k;
bool check(int test){
    ll numLeft=k;
    ll numDone=0;
    while(numLeft--){
       numDone=upper_bound(nums.begin(),nums.end(),nums[numDone]+2*test)-nums.begin();
      // cout<<numDone nn;
       if(numDone>=nums.size()){
           return 1;
       }
    }
    return 0;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ifstream cin("angry.in");
	ofstream cout("angry.out");
    ll n;
    cin>>n>>k;
    ll largest=0;
    F0R(i,n){
        ll a;
        cin>>a;
        nums.pb(a);
        largest=max(largest,a);
    }
    sort(nums.begin(),nums.end());
    bool done=0;
    //cout<<check(5);
    ll high=largest,low=0;
    while(!done){
        ll mid=(high+low)/2;
        bool can=check(mid);
        if(can){
            if(!check(mid-1)){
                cout<<mid nn;
                return 0;
            }
            high=mid;
        }else{
            low=mid;
        }
        if(high-low==1){
            if(check(low)){
                cout<<low nn;
                return 0;
            }
            else{
                cout<<high nn;
                return 0;
            }
        }
    }
}

