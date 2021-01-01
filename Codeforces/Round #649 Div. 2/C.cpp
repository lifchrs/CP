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
	// idea is to reverse the list of As and see what numbers need filling
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t=1;
	while(t--){
		int n;
		cin>>n;
		vector<int> nums;
		F0R(i,n){
			int a;
			cin>>a;
			nums.pb(a);
		}
		vector<int> revd=nums;
		reverse(revd.begin(),revd.end());
		int currentTop=revd[0];
		vector<bool> toFill(revd[0]+1);
		for(int i=0;i<toFill.size();i++) toFill[i]=0;
		vector<int> ans;
		if(revd[0]>n){ cout<<-1<<endl; return 0;}
		FOR(i,0,n-1){
			if(!toFill[revd[i+1]]){
				ans.pb(revd[i+1]);
				toFill[revd[i+1]]=1;
			}
			else{
				bool done=0;
				for(int j=revd[i+1];j<revd[i];j++){
					if(toFill[revd[j]]==0){
						done=1;
						ans.pb(revd[j+1]);
						toFill[revd[j+1]]=1;
						break;
					}
				}
				if(!done){
				currentTop++;
				ans.pb(currentTop);
				}
			}
		}
		if(nums[0]==1){ans.pb(0);}
		else if(nums[0]==0){ans.pb(1);}
		else{cout<<-1<<endl; break;}
		reverse(ans.begin(),ans.end());
		for(int i:ans) cout<<i<<" ";
		cout<<endl;
	}
}
