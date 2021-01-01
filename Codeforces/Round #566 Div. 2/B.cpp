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
ll INF = 0x3f3f3f3f3f3f3f3f;
ll MOD = (ll)(1e9+7); //1e9+7

ll binpow(ll a,ll b, ll c = 1e18){
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

const int MXN = 100000;

ll gcd(ll a, ll b){
    if(a > b){
        if(a%b == 0){
            return b;
        }else{
            return gcd(a%b,b);
        }
    }else{
        if(b%a == 0){
            return a;
        }else{
            return gcd(b%a,a);
        }
    }
}

ll nCr(ll n, ll r){
    if(r > n) return 0;
    if(r == 1) return n;
    return nCr(n-1, r-1) + nCr(n-1, r);
}

int main(){
    //ifstream cin("name.in");
    //ofstream cout("name.out");
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    ll h,w;
    cin >> h >> w;  
    char arr[h][w];
    map<pl,bool> has;
    F0R(i,h){
        F0R(j,w){
            cin >> arr[i][j];
        }
    }
    pl coord;
    bool can = 0;
    FOR(i,1,h-1){
        FOR(j,1,w-1){
            if(arr[i][j] == '*' && arr[i+1][j] == '*' && arr[i-1][j] == '*' && arr[i][j+1] == '*' && arr[i][j-1] == '*'){
                coord = mp(i,j);
                can = 1;
                break;
            }
        }
    }
    if(!can){
        cout << "NO" nn;
        return 0;
    }
    FOR(i,coord.first,h){
        if(arr[i][coord.second] == '*') has[mp(i,coord.second)] = 1;
        else break;
    }
    for(ll i = coord.first; i > -1; i--){
        if(arr[i][coord.second] == '*') has[mp(i,coord.second)] = 1;
        else break;
    }
    FOR(j,coord.second,w){
        if(arr[coord.first][j] == '*') has[mp(coord.first,j)] = 1;
        else break;
    }
    for(ll j = coord.second; j > -1; j--){
        if(arr[coord.first][j] == '*') has[mp(coord.first,j)] = 1;
        else break;
    }
    F0R(i,h){
        F0R(j,w){
            if(arr[i][j] == '*' && has[mp(i,j)] == 0){
                can = 0;
                cout << "NO" nn;
                return 0;
            }
        }
    }
    cout << "YES" nn;
}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


