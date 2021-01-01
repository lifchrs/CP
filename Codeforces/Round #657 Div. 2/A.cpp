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
    ll t;
    cin>>t;
    string s;
    while(t--){
        ll n;
        cin>>n>>s;
        string want="abacaba";
        bool can=0;
        F0R(i,n-6){
            bool ok=1;
            string test=s;
            for(ll j=i;j<i+7;j++){
                if(test[j]!='?' && test[j]!=want[j-i]) ok =0;
                else test[j]=want[j-i];
            }
            if(ok){
                ll count=0;
                for(ll x=0;x<n-6;x++){
                    if(test.substr(x,7)==want){
                        count++;
                    }
                }
                if(count==1){
                    can=1;
                    for(ll u=0;u<s.size();u++){
                        if(test[u]=='?') test[u]='z';
                    }
                    cout<<"YES" nn<<test nn;
                    break;
                }
            }
        }
        if(!can) cout<<"NO\n";
    }
}
