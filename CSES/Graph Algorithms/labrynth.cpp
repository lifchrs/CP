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
vl adjList[1006000];
bool visited[1006000];
ll lastSpot[10060000];
int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0);
	//FOR(i,0,100) cout<<visited[i];
	ll n,m;
	cin>>n>>m;
	n+=2;
	m+=2;
	ll start,end=-1;
	bool arr[n][m];
	FOR(i,0,n){
		FOR(j,0,m){
			arr[i][j]=0;
		}
	}

	FOR(i,1,n-1){
		FOR(j,1,m-1){
			char a;
			cin>>a;
			if(a=='#'){
				arr[i][j]=0;
			}
			if(a=='A'){
				arr[i][j]=1;
				start=i*m+j;
			}
			if(a=='B'){
				arr[i][j]=1;
				end=i*m+j;
			}
			if(a=='.'){
				arr[i][j]=1;
			}
		}
	}
	FOR(i,1,n-1){
		FOR(j,1,m-1){
			if(arr[i][j]){
				if(arr[i+1][j]){
					ll node2=(i+1)*m+j;
					adjList[node2-m].pb(node2);
				}
				if(arr[i][j+1]){
					ll node2=i*m+j+1;
					adjList[node2-1].pb(node2);
				}
				if(arr[i-1][j]){
					ll node2=(i-1)*m+j;
					adjList[node2+m].pb(node2);
				}
				if(arr[i][j-1]){
					ll node2=(i)*m+j-1;
					adjList[node2+1].pb(node2);
				}
			}	
		}
	}
	//for(ll next:adjList[start]){ cout<<next nn;}
	queue<ll> q;
	//q.push(15);
	q.push(start);
	bool done=0;
	ll count=0;
	while(!q.empty() && !done){
		ll current=q.front();
		q.pop();
		visited[current]=1;
		for(ll next:adjList[current]){
			if(!visited[next]){
				count++;
				//cout<<count nn;
				//cout<<next<<"bruh";
				visited[next]=1;
				q.push(next);
				lastSpot[next]=current;
				//cout<<"yuh";
				//done=1;
				if(next==end){
					done=1;
					break;
				}
				
			}
		}
	}
	if(done){
		cout<<"YES" nn;
	}else{
		cout<<"NO" nn;
		return 0;
	}
	string ans="";
	done=0;
	//cout<<lastSpot[end] nn;
	ll current=end;
	while(current!=start){
		ll last=lastSpot[current];
		//cout<<last<<" ";
		if(last-current==1){
			ans+="L";
		}
		if(last-current==-1){
			ans+="R";
		}
		if(last-current==m){
			ans+="U";
		}
		if(last-current==-m){
			ans+="D";
		}
		current=last;
		if(current==start) break;
	}
	//cout nn;
	reverse(ans.begin(),ans.end());
	cout<<ans.size() nn<<ans nn;
}
