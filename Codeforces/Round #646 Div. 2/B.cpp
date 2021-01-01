#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		vector<int> cost,cost0,cost1;
		int total0=0,total1=0;
		for(char z:a){
			if(z=='0') total0++;
			if(z=='1') total1++;
		}
		int counted0='0',counted1='0';
		for(char z:a){
			if(z=='1'){
				counted1++;
			}
			if(z=='0'){
				counted0++;
			}
			cost.push_back(min(counted1+total0-counted0,counted0+total1-counted1));
			cost0.push_back(counted1+total0-counted0);
			cost1.push_back(counted0+total1-counted1);
		}
		int ans=10000;
		for(int i:cost){
			ans=min(ans,i);
		}
		cout<<ans<<endl;
		//for(int i:cost1)// cout<<i<<" ";
		//cout<<endl;
		//for(int i:cost0) //cout<<i<<" ";
		//cout<<endl;
	}
}
