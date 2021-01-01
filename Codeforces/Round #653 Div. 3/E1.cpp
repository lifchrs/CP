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
    ll n,k;
    cin >> n >> k;
    vl a, b, ab,alice,bob;
    F0R(i,n){
        ll t;
        cin >> t;
        ll ac,bc;
        cin >> ac >> bc;
        if(ac == 1 && bc == 1){
            ab.pb(t);
        }else if(ac == 0 && bc == 1){
            b.pb(t);
        }else if(ac == 1 && bc == 0){
            a.pb(t);
        }
    }
    sort(ab.begin(),ab.end());
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll sum = 0;
    ll currab = 0,curra = 0,currb = 0;
    if(a.size() + ab.size() < k || b.size() + ab.size() < k){
        cout << -1 nn;
        return 0;
    }
 
    for(ll i = 0; k > 0; i++){
        if(currab >= ab.size()){
            k--;
            sum += a[curra] + b[currb];
            curra++;
            currb++;
            continue;
        }
        if(curra >= a.size() || currb >= b.size()){
            k--;
            sum += ab[currab];
            currab++;
            continue;
        }
        if(a[curra] == INF && b[currb] == INF && ab[currab] == 1){
            break;
        }
        if(ab[currab] < a[curra] + b[currb]){
            k--;
            sum += ab[currab];
            currab++;
        }else{
            k--;
            sum += a[curra] + b[currb];
            curra++;
            currb++;
        }
    }
    cout << sum nn;
}
 
/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */
 
