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

int main(){
    string name = "pairup";
    ifstream cin(name+".in");
    ofstream cout(name+".out");
    ll n;
    cin >> n;
    set<pl> cows;
    ll m = 0;
    F0R(i,n){
        ll x,y;
        cin >> x;
        m += x;
        cin >> y;
        cows.insert({y,x});
    }
    ll ma = 0;
    while(cows.size() > 0){
        if(cows.size() == 1){
            pl yuh = *cows.begin();
            ma = max(ma,yuh.second*2);
            break;
        }
        pl first = *cows.begin(),second = *cows.rbegin();
        cows.erase(cows.begin());
        auto it = cows.end();
        it--;
        cows.erase(it);
        ma = max(ma,first.first + second.first);
        if(first.second > second.second){
            first.second -= second.second;
            cows.insert(first);
        }else if(first.second < second.second){
            second.second -= first.second;
            cows.insert(second);
        }
    }
    cout << ma nn;
}

/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


