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
/*Idea:
Find each region. Store number, size, and neighbours' location.
Have an adjacency list between the pairs of points of the neighbours and the regions.
  */
bool visited[251][251];
bool visited1[251][251];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
    ll n;
    cin>>n;
    ll arr[n][n];
    set<ll> diffNums;
    F0R(i,n){
        F0R(j,n){
            cin>>arr[i][j];
            diffNums.insert(arr[i][j]);
        }
    }
    vector<pair<ll,pair<ll,vector<pair<ll,ll>>>>> regions; //vector<pair<number,pair<size,vector<locations of neighbours>
    queue<pair<ll,ll>> locations;
    F0R(i,n){
        F0R(j,n){
            if(!visited[i][j]){
                locations.push({i,j});
                while(!locations.empty()){
                    pair<ll,ll> current=locations.front();
                    locations.pop();
                    for
                }
            }
        }
    }
}

