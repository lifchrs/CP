#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define F0R(i,a) for(int i=0;i<a;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
vector<pair<int,int>> coords;
int countOutside(int lx,int hx, int ly, int hy){
	int count=0;
	for(pair<int,int> coord:coords){
		bool in=0;
		if(coord.first>=lx&&coord.first<=hx){
			if(coord.second>=ly&&coord.second<=hy){
				in=1;
			}
		}
		if(!in) count++;
	}
	return count;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ifstream cin("reduce.in");
	ofstream cout("reduce.out");
	int n;
	cin>>n;
	vector<int> xcoords,ycoords;
	F0R(i,n){
		int a,b;
		cin>>a>>b;
		coords.pb(mp(a,b));
		xcoords.pb(a);
		ycoords.pb(b);
	}
	vector<int> highY,lowY,highX,lowX;
	sort(xcoords.begin(),xcoords.end());
	F0R(i,4){
		lowX.pb(xcoords[i]);
	}
	reverse(xcoords.begin(),xcoords.end());
	F0R(i,4){
		highX.pb(xcoords[i]);
	}
	sort(ycoords.begin(),ycoords.end());
	F0R(i,4){
		lowY.pb(ycoords[i]);
	}
	reverse(ycoords.begin(),ycoords.end());
	F0R(i,4){
		highY.pb(ycoords[i]);
	}
	ll ans=40000*40000;
	for(int a:lowX){
		for(int b:highX){
			for(int c:lowY){
				for(int d:highY){
					ll xdif=(ll)(b-a);
					ll ydif=(ll)(d-c);
					if(countOutside(a,b,c,d)<=3){
						ans=min(ans,xdif*ydif);
					}
				}
			}
		}
	}
	cout<<ans<<endl;
}
