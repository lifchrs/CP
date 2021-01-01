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
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
    ll n,k1,k2;
    vl nums1,nums2;
    F0R(i,n){
        ll a;
        cin>>a;
        nums1.pb(a);
    }
    F0R(i,n){
        ll a;
        cin>>a;
        nums2.pb(a);
    }
    set<ll> a,b;
    F0R(i,n){
        if(nums1[i]>nums2[i]){
            b.insert(nums1[i]-nums2[i]);
        }else{
            a.insert(nums2[i]-nums1[i]);
        }
    }
    bool done=0;
    while(!done){
        auto it=a.end();
        it--;
        ll last=*it;
        if(last==0||k1==0){
            done=1;
            break;
        }
        a.erase(it);
        k1--;
        last++;
        a.insert(last);       
    }
    done=0;
    while(!done){
        auto it=b.end();
        it--;
        ll last=*it
    }

}
