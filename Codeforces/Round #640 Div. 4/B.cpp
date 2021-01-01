#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		bool neven=0,keven=0;
		vector<int> ans;
		if(n%2==0) neven=1;
		if(k%2==0) keven=1;
		if((neven==keven&&k<=n)){
			cout<<"YES\n";
			for(int i=0;i<k-1;i++){
				ans.push_back(1);
			}
			ans.push_back(n-k+1);
			for(int i:ans){
				cout<<i<<" ";
			}
			cout<<endl;
		}else if((neven&&!keven&&2*(k)<=n)){
			cout<<"YES\n";
			for(int i=0;i<k-1;i++){
				ans.push_back(2);
			}
			ans.push_back(n-2*(k-1));
			for(int i:ans){
				cout<<i<<" ";
			}
			cout<<endl;
		}
		else{
			cout<<"NO\n";
		}
	}
}
