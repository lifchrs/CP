#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef double db; 
typedef string str; 
typedef pair<ll,ll> pl; 
typedef vector<ll> vl; 
typedef vector<bool> vb;
typedef vector<vector<ll>> vvl; 
typedef vector<vector<bool>> vvb; 
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
vvb board;
ll counts=0;
void algo(vvb arr,int currY){
	if(currY==8){ counts++; return;}
	F0R(i,8){
		if(arr[currY][i]!=0){
			vvb yuh=arr;
			int yInt=currY-i; //the y position minus the x position
			for(int k=0;k<8;k++){ //fills diagonals in the north east direction
				if(k+yInt>=0 && k>=0 && k+yInt<=7 && k<=7)
				yuh[k+yInt][k]=0;
			}
			yInt=currY+i;
			for(int k=0;k<8;k++){//fills diagonals in the south east direction
				if(yInt-k>=0 && k>=0 && yInt-k<=7 && k<=7)
				yuh[yInt-k][k]=0;
			}
			FOR(y,0,8) yuh[y][i]=0;//fills column 
			//FOR(x,0,8) yuh[currY][x]=0;
			algo(yuh,currY+1);
		}
	}
	return;
	
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	F0R(i,8){
		vb first;
		F0R(j,8){
			char a;
			cin>>a;
			if(a=='.') first.pb(1);
			else if(a=='*') first.pb(0);
		}
		board.pb(first);
	}
	algo(board,0);
	cout<<counts nn;
}
