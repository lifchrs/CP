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
	int n;
	cin>>n;
	vector<int> odds;
	vector<int> evens;
	FOR(i,1,n+1){
		if(i%2==1)
			odds.pb(i);
		else
			evens.pb(i);
	}
	vector<int> ans;
	if(n%2==1){
		ans=odds;
		ans.insert(ans.end(),evens.begin(),evens.end());
	}else{
		ans=evens;
		ans.insert(ans.end(),odds.begin(),odds.end());
	}
	bool can=1;
	for(int i=1;i<ans.size();i++){
		if(abs(ans[i]-ans[i-1])==1){
			can=0;
		}
	}
	if(!can){
		cout<<"NO SOLUTION\n";
		return 0;
	}
	for(int i:ans){
		cout<<i<<" ";
	}
	cout<<endl;
	
}
