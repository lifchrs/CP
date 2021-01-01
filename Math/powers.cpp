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
bool nums[29];
bool nums3[29];
bool nums4[29];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
    vl units;
    FOR(i,1,30){
        units.pb(i);
    }
    ll squares=0,cubes=0, quarts=0;
    F0R(i,100*100){ 
        if((i*i)%29>0){
            if(!nums[(i*i)%29]){
                squares++;
                nums[i*i%29]=1;
            }
        }
        if(squares==28) break;
    }
    for(bool i:nums) cout<<i<<" ";
    cout nn<<squares nn;



     F0R(i,100*100){ 
        if((i*i*i)%29>0){
            if(!nums3[(i*i*i)%29]){
                cubes++;
                nums3[i*i*i%29]=1;
            }
        }
        if(cubes==28) break;
    }
    for(bool i:nums3) cout<<i<<" ";
    cout nn<<cubes nn;


    F0R(i,100*100){ 
        if((i*i*i)%29>0){
            if(!nums4[(i*i*i*i)%29]){
                quarts++;
                nums4[i*i*i*i%29]=1;
            }
        }
        if(quarts==28) break;
    }
    for(bool i:nums4) cout<<i<<" ";
    cout nn<<quarts nn;

 
}
