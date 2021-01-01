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
ll arr[100001];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ifstream cin("lifeguards.in");
	ofstream cout("lifeguards.out");
    ll n;
    cin>>n;
    vector<pl> continuity;
    vector<pair<pl,bool>> times;
    F0R(i,n){
        ll starting,ending;
        cin>>starting>>ending;
        pl start={starting,i};
        pl end={ending,i};
        times.push_back({start,1});
        times.pb({end,0});
        continuity.pb({starting,i});
    }
    sort(times.begin(),times.end());
    sort(continuity.begin(),continuity.end());
    ll totalTime=0;
    set<ll> numsIn;
    F0R(i,2*n){
        if(times[i].second){
            numsIn.insert(times[i].first.second);
        }
        else{
            numsIn.erase(times[i].first.second);
        }
        if(numsIn.size()==1){
            arr[*numsIn.begin()]+=times[i+1].first.first-times[i].first.first;
          //  cout<<*numsIn.begin() nn;
        }
        if(numsIn.size()!=0){
            totalTime+=times[i+1].first.first-times[i].first.first;

        }
  //    if(i==0)  cout<<*numsIn.begin()<<" "<<numsIn.size() nn;
    }
    ll ans=INF;
    F0R(i,n){
        ans=min(arr[i],ans);
    //    cout<<arr[i]<<" ";
    }
    //cout nn;
    cout<<totalTime-ans nn;
}
