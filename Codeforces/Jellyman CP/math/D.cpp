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
    ll a,b,c;
    cin>>a>>b>>c;
    bool ans=0;
    if(c>0){
        if(abs(b-a)==b-a && (b-a)%c==0) ans=1;
        else ans=0;
    }else if(c==0){
        if(b==a) ans=1;
        else ans=0;
    }else{
        if((abs(b-a)!=b-a ||b-a==0) && abs(b-a)%abs(c)==0) ans=1;
        else ans=0;
    }
    ans ? cout<<"YES\n" : cout<<"NO\n" ;
}

