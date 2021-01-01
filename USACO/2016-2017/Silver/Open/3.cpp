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

ll arr[20][20];
bool visited[20][20];

bool pcl(ll xlow, ll xhigh, ll ylow, ll yhigh){ //inclusive
    F0R(i,20){
        F0R(j,20){
            visited[i][j] = 0;
        }
    }
    vl xmove = {0,1,0,-1};
    vl ymove = {1,0,-1,0};
    ll numColors = 0;
    queue<pl> q;
    vector<bool> yuh(26,0);
    ll cnt = 0;
    F0R(x,xlow,xhigh) F0R(y,ylow,yhigh){
        if(visited[x][y]){
            continue;
        }else{

        }
        while(!q.empty()){
            pl curr = q.front();
            if(!yuh[arr[curr.first][curr.second]]){
                cnt++;
                yuh[curr] = 1;
                if(cnt > 2) return 0;
            }
            q.pop();
            visited[curr] = 1;
            F0R(j,4){
                pl next = {curr.first + xmove[j], curr.second + ymove[j]};
                if(inBounds(next,xlow,xhigh,ylow,yhigh)){
                    if(!visited[next.first][next.second]){
                        q.push(next);
                        visited[next.first][next.second] = 1;
                    }
                }
            }
        }
    }
}

int main(){
    string name = "where";
    ifstream cin(name+".in");
    ofstream cout(name+".out");

}
/*
 * MAKE SURE TO CHECK FOR ALL MODS (BINPOW)
 */


