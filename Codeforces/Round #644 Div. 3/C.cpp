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
		vector<int> nums;
		nums.clear();
		int freq[101];
		FOR(i,0,100) freq[i]=0;
		int numOdd=0,numEven=0;
		F0R(i,n){
			int a; cin>>a; nums.pb(a); freq[a]++;
			if(a%2==1){ numOdd++;}
			if(a%2==0) numEven++;
		}
		//cout<<"ev "<<numEven;
		//cout<<"odd "<<numOdd;
		if(numEven%2==0 && numOdd%2==0){
			cout<<"YES\n";
			continue;
		}
		bool can=0;
		sort(nums.begin(),nums.end());
		FOR(i,1,nums.size())
			if(nums[i]-nums[i-1]==1) can=1;
		if(can) cout<<"YES\n";
		else cout<<"NO\n";

	}
}
