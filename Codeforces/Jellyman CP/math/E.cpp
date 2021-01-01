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
    ll n,m;
    cin>>n>>m;
    bool arr[n][m];
    F0R(i,n){
        F0R(j,m){
            bool a;
            cin>>a;
            arr[i][j]=a;
        }
    }
  /*  F0R(i,n){
        F0R(j,m){
            cout<<arr[i][j]<<" ";
        }
        cout nn; 
        }*/
    ll ans=0;
    F0R(i,n){
        ll whitecount=0,blackcount=0;
        F0R(j,m){
            if(arr[i][j]){
                blackcount++;
            }
            else{ 
                whitecount++;
            }
        }
//        cout<<blackcount<<" "<<whitecount nn;
       ans+=binpow(2,blackcount)+binpow(2,whitecount)-2-whitecount-blackcount;
//        cout<<ans nn;
    }
 //   cout<<ans nn;
    F0R(j,m){
        ll whitecount=0,blackcount=0;
        F0R(i,n){
            if(arr[i][j]==1){
                blackcount++;
            }
            else {
                whitecount++;
            }
        }
        ans+=binpow(2,blackcount)+binpow(2,whitecount)-2;
    }
    cout<<ans nn;
}
