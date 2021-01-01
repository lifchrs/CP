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

const int MXN = 100000;

ll toNum(char a){
    if(a == 'A') return 1;
    if(a == 'T') return 2;
    if(a == 'G') return 3;
    if(a == 'C') return 0;
    return -100000000;
}

int main(){
    string name = "cownomics";
    ifstream cin(name+".in");
    ofstream cout(name+".out");
    ll n,m;
    cin >> n >> m;
    ll spotty[n][m],plain[n][m];
    F0R(i,n){
        string x;
        cin >> x;
        F0R(j,m){
            spotty[i][j] = toNum(x[j]);
        }
    }
    F0R(i,n){
        string x;
        cin >> x;
        F0R(j,m){
            plain[i][j] = toNum(x[j]);
        }
    }
    vector<bool> num(256);
    ll ans = 0;
    F0R(i,m-2){
        FOR(j,i+1,m-1){
            FOR(k,j+1,m){
                bool can = 1;
                F0R(g,num.size()) num[g] = 0;
                F0R(o,n){
                    ll over = plain[o][i]*16 + plain[o][j]*4 + plain[o][k]*1;
                    num[over] = 1;
                }
                F0R(o,n){
                    ll over = spotty[o][i]*16 + spotty[o][j]*4 + spotty[o][k];
                    if(num[over]){
                        can = 0;
                        break;
                    }
                }
                if(can){
                    ans++;
                    continue;
                }
            }
        }
    }
    cout << ans nn;
}

/* want to check how you can make combinations that are unique to spotty. Go through the 50c3 combinations. Overall 50c3 * 1000. */

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


