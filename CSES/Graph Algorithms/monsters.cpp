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
ll INF=0x3f3f3f3f;
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
bool arr[1001][1001];
ll n,m;
bool inBounds(pair<ll,ll> next){
	if((next.first)>=0&&(next.second)>=0&&(next.first)<n&&(next.second)<m){
		return 1;
	}else{
		return 0;
	}
}
bool visited1[1001][1001];
bool visited2[1001][1001];
ll ADist[1001][1001];
ll monstDist[1001][1001];
pair<ll,ll> last[1001][1001];
int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0);
	cin>>n>>m;
	queue<pair<ll,ll>> monsters;
	pair<ll,ll> start;
	vector<pair<ll,ll>> winners; //these are the edge cells that have a .
	F0R(i,n){
		F0R(j,m){
			char a;
			cin>>a;
			if(a=='#'){
				arr[i][j]=0;
			}else{
				arr[i][j]=1;
				if(a=='M'){
					monsters.push({i,j});
					monstDist[i][j]=0;
					visited1[i][j]=1;
				}else if(a=='A'){
					start={i,j};
				}
				if(a=='.'&&(j==0||i==0||i==n-1||j==m-1)){
					winners.pb({i,j});
				}
			}
		}
	}
	if(monsters.size()==0){
		cout<<"YES" nn<<0 nn;
		return 0;
	}
	vl y={1,0,-1,0}, x={0,1,0,-1};
	while(!monsters.empty()){
		pair<ll,ll> current=monsters.front();
		monsters.pop();
		F0R(i,4){
			pair<ll,ll> next={y[i]+current.first,x[i]+current.second}; //pair of the next coord
			if(inBounds(next)&&!visited1[next.first][next.second]&&arr[next.first][next.second]){ //if it is in bounds, if it hasn't been visited, and if it is visitable
				visited1[next.first][next.second]=1; //is visited
				monsters.push(next); //
				monstDist[next.first][next.second]=monstDist[current.first][current.second]+1; //
			}
		}
	}
	queue<pair<ll,ll>> q;
	q.push(start);
	while(!q.empty()){
		pair<ll,ll> current=q.front();
		q.pop();
		F0R(i,4){
			pair<ll,ll> next={y[i]+current.first,x[i]+current.second}; //pair of the next coord
			if(inBounds(next)&&!visited2[next.first][next.second]&&arr[next.first][next.second]){//&&ADist[current.first][current.second]+1<monstDist[next.first][next.second]){ //if it is in bounds, if it hasn't been visited, and if it is visitable
				visited2[next.first][next.second]=1; //is visited
				q.push(next); //
				ADist[next.first][next.second]=ADist[current.first][current.second]+1; //
				last[next.first][next.second]=current;
				//cout<<last[next.first][next.second].first<<" "<<last[next.first][next.second].second<< " going to "<<next.first<<" "<<next.second nn;
			}
		}
	}
	/*
	F0R(i,n){
		F0R(j,m){
			cout<<monstDist[{i,j}]<<" ";
		}
		cout nn;
	}
	cout nn nn nn ;
	F0R(i,n){
		F0R(j,m){
			cout<<ADist[{i,j}]<<" ";
		}
		cout nn;
	}
	*/
	bool done=0;
	pair<ll,ll> end;
	for(pair<ll,ll> yuh:winners){
		if(ADist[yuh.first][yuh.second]<monstDist[yuh.first][yuh.second]||!visited1[yuh.first][yuh.second]){
			end=yuh;
			done=1;
			break;
		}
	}
	//cout<<done<<" "<<end.first<<" "<<end.second nn;
	//cout<<last[end.first][end.second].first<<" "<<last[end.first][end.second].second nn;
	if(!done){
		cout<<"NO" nn;
		return 0;
	}
	cout<<"YES" nn;
	string ans="";
	while(end!=start){
		//cout<<end.first<<" "<<end.second nn;
		pair<ll,ll> las=last[end.first][end.second];
		if(end.second-las.second==1){
			ans+="R";
		}else if(end.first-las.first==-1){
			ans+="U";
		}else if(end.second-las.second==-1){
			ans+="L";
		}else if(end.first-las.first==1){
			ans+="D";
		}
		end=las;
	}
	reverse(ans.begin(),ans.end());
	cout<<ans.size() nn<<ans nn;
}
