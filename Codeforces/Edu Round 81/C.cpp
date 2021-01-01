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
    ll T;
    cin >> T;
    while(T--){
        string s,t,z;
        cin >> s >> t;
        vector<bool> yuh(26);
        F0R(i,26) yuh[i] == 0;
        F0R(i,s.size()){
            yuh[s[i]-'a'] = 1;
        }
        bool bad = 0;
        F0R(i,t.size()){
            if(yuh[t[i]-'a'] == 0){
                cout << -1 nn;
                bad = 1;
                break;
            }
        }
        if(bad) continue;
        vector<vl> letters(26);
        F0R(i,s.size()){
            letters[s[i]-'a'].pb(i);
        }
        F0R(i,letters.size()){
            sort(letters[i].begin(),letters[i].end());
        }
        ll ans = 1;
        ll currPos = -1;
        F0R(i,t.size()){
            /* cout << t[i] nn; */
            if(letters[t[i]-'a'][letters[t[i]-'a'].size()-1] > currPos){
                currPos = *upper_bound(letters[t[i]-'a'].begin(),letters[t[i]-'a'].end(),currPos);
                /* cout << currPos nn; */
                /* cout << t[i] nn; */
                continue;
            }else{
                ans++;
                currPos = -1;
                /* cout << "RESTART" nn; */
                /* cout << currPos nn; */
                /* cout << t[i] nn; */
                i--;
            }
        }
        cout << ans nn;
    }
}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


