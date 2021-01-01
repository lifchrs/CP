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
ll h,w;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("gecko.in");
	//ofstream cout("gecko.out");
    cin>>h>>w;
    ll arr[h][w];
    F0R(i,h){
        F0R(j,w){
            cin>>arr[i][j];
        }
    }
    ll dp[h][w];
    F0R(i,w){
        dp[0][i]=arr[0][i];
    }
    FOR(i,1,h){
        F0R(j,w){
            if(j==w-1){
                dp[i][j]=arr[i][j]+max(dp[i-1][j],dp[i-1][j-1]);
            }else if(j==0){
                dp[i][j]=arr[i][j]+max(dp[i-1][j],dp[i-1][j+1]);
            }else{
                dp[i][j]=arr[i][j]+max(dp[i-1][j],max(dp[i-1][j-1],dp[i-1][j+1]));
            }
        }
    }
    ll ans=0;
    F0R(i,w){
       ans=max(dp[h-1][i],ans); 
    }
    cout<<ans nn;
}

