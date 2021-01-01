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
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll h = (s[0]-'0')*10+s[1]-'0';
    ll m = (s[3]-'0')*10+s[4]-'0';
    if(n == 12){
        if(h == 0) s[1] = '1';
        if(h > 12){
            if(h%10 == 0) s[0] = '1';
            else s[0] = '0';
        }
    }
    if(n == 24){
        if(h >= 24) s[0] = '0';
    }
    if(m >= 60){
        s[3] = '0';
    }
    cout << s nn;
}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


