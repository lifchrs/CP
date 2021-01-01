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
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> strengths;
		F0R(i,n){
			int a;
			cin>>a;
			strengths.pb(a);
		}
		vector<int> difs;
		sort(strengths.begin(),strengths.end());
		FOR(i,1,n) difs.pb(abs(strengths[i]-strengths[i-1]));
		int mindif=1e7;
		int index=0;
		for(int i=0;i<difs.size();i++){
			mindif=min(mindif,difs[i]);
			if(mindif==difs[i]) index=i;
		}
		mindif=abs(mindif);
		cout<<mindif<<endl;
	}
}
