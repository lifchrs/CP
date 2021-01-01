/*
have set and keep dividing
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		set <int> nums;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			if(a%2==0)
				nums.insert(a);
		}
		int ans=0;
		while(nums.size()>0){
			int x=*nums.rbegin();
			nums.erase(*nums.rbegin());
			x/=2;
			if(x%2==0){
				nums.insert(x);
			}
			ans++;
		}
		cout<<ans<<endl;
	}
}