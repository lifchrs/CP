#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define FOR(z,a,b) for(int z=a;z<b;z++)
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ifstream cin("berries.in");
	ofstream cout("berries.out");
	int n;
	cin>>n;
	int k;
	cin>>k;
	vector<int> trees;
	int maxTree=0;
	FOR(i,0,n){
		int a;
		cin>>a;
		maxTree=max(maxTree,a);
		trees.pb(a);
	}
	int ans=0;
	sort(trees.begin(),trees.end());
	reverse(trees.begin(),trees.end());
	
	for(int target=maxTree;target>0;target--){
		vector<int> extras;
		int buckets=k;
		for(int i:trees){
			buckets-=i/target;
			extras.pb(i%target);
		}
		int sum=0;
		int extra=0;
		if(buckets>0){
			sort(extras.begin(),extras.end());
			reverse(extras.begin(),extras.end());
			extra=buckets;
			FOR(c,0,extra){ 
				if(c<extras.size())
				sum+=extras[c];
			}
			buckets=0;
		}
		if(buckets<=0){ 
			ans=max(target*(k/2-extra)+sum,ans);
		}		
	}
	cout<<ans<<endl;
}
