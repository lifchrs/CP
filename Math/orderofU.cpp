#include <bits/stdc++.h>
using namespace std;
int main(){
	ofstream cout("orders.out");
	int u;
	int t;
	cin>>u>>t;
	vector<int> nums;
	for(int i=0;i<t;i++){
		int a;
		cin>>a;
		nums.push_back(a);
	}
	for(int i:nums){
	//	cout<<i;
	}
	
	for(int i:nums){
		//cout<<i<<" ";
		cout<<"$$";
		cout<<i<<"\\: ";
		bool var=1;
		if(i%u==1){
			var=0;
		}
		int num=i*i%u;
		int count=1;
		while(num!=1&&var){
			cout<<num<<"\\: ";
			num*=i;
			count++;
			num%=u;
		}
		if(var){cout<<num<<" "; count++;}
		cout<<"\\text{   Order: }"<<count<<"$$"<<endl;
	}
}
