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
ll minX=INF,minY=INF,maxX=-INF,maxY=-INF;
bool inBounds(ll y,ll x){
    return (x>=minX&&y>=minY&&x<=maxX&&y<=maxY);
}
map<pair<ll,ll>,ll> locations; //consider changing to bool if possible
bool visited[4032][4032]; //consider making both global

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ifstream cin("gates.in");
	ofstream cout("gates.out");
    ll n;
    string directions;
    cin>>n>>directions;
    ll north=0,east=0;
    F0R(i,n){
        if(directions[i]=='N'){
            north+=1;
        }else if(directions[i]=='S'){
            north-=1;
        }else if(directions[i]=='E'){
            east+=1;
        }else if(directions[i]=='W'){
            east-=1;
        }

        
        pair<ll,ll> a=make_pair(north,east);
        locations[a]=1;
        if(directions[i]=='N'){
            north+=1;
        }else if(directions[i]=='S'){
            north-=1;
        }else if(directions[i]=='E'){
            east+=1;
        }else if(directions[i]=='W'){
            east-=1;
        }
        a=make_pair(north,east);
        locations[a]=1;
        maxY=max(maxY,north);
        minY=min(minY,north);
        maxX=max(maxX,east);
        minX=min(minX,east);
    }
    if(1){
      maxY+=2;
      minY-=2;
      maxX+=2;
      minX-=2;
    }
    ll count=0;
    FOR(i,minY,maxY){
        FOR(j,minX,maxX){
            queue<pair<ll,ll>> q;
            if(!visited[i+2001][j+2001]&&locations[make_pair(i,j)]==0){
                q.push({i,j});
                visited[i+2001][j+2001]=1;
                count++;
               // cout<<i<<" "<<j nn;
                vl ys={1,0,-1,0},xs={0,1,0,-1};
                while(!q.empty()){
                    pair<ll,ll> current=q.front();
                    q.pop();
                    F0R(k,4){
                        pair<ll,ll> next={ys[k]+current.first,xs[k]+current.second};
                        if(inBounds(next.first,next.second)&&!visited[next.first+2001][next.second+2001]&&locations[next]==0){
                            visited[next.first+2001][next.second+2001]=1;
                            q.push(next);
                        }

                    }
                }
            }
        }
    }
    cout<<count-1 nn;
    
}


