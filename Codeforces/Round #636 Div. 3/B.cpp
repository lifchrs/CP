#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string ans="YES";
		if(n%4!=0){
			ans="NO";
			cout<<ans<<"\n";
			continue;
		}
		vector <int> nums;
		int current=2;
		for(int i=0;i<n/2;i++){
			nums.push_back(current);
			current+=2;
		}
		current=1;
		for(int i=0;i<n/2-1;i++){
			nums.push_back(current);
			current+=2;
		}
		nums.push_back(current+n/2);
		cout<<ans<<endl;
		for(int x:nums){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}