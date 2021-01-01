#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define F0R(i,a) for(int i=0;i<a;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){// trying to find turning points and the # of turning points.
		int n;
		cin>>n;
		vector<bool> upsanddown; //0 means that the successive term is smaller
		vector<int> perms;
		F0R(i,n){
			int a;
			cin>>a;
			perms.pb(a);
		}
		vector<int> turningPoints;
		turningPoints.pb(perms[0]);
		FOR(i,1,n){
			if(perms[i]>perms[i-1]){
				upsanddown.pb(1);
			}else{
				upsanddown.pb(0);
			}
		}
		for(int i=1;i<n-1;i++){
			if(upsanddown[i]!=upsanddown[i-1]){
				turningPoints.pb(perms[i]);
			}
		}
		turningPoints.pb(perms[n-1]);
		cout<<turningPoints.size()<<endl;
		for(int i:turningPoints) cout<<i<<" ";
		cout<<endl;
	}

}
