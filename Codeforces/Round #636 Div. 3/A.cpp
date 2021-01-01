// Find the first n in 2^n-1 that is larger than n. then find find the largest 2^n-1 that divides n.
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		bool check=true;
		int index=1;
		vector<int> nums;
		while(check==true){
			int a=int((int)(pow(2,index))-1);
			nums.push_back(a);
			if(a>n){
				check=false;
			}
			index++;
		}
		reverse(nums.begin(),nums.end());
		int answer=0;
		for(int i=1;i<nums.size();i++){
			int dividend=int((int)(pow(2,i))-1);
			if(n%dividend==0){
				answer=n/dividend;
			}
		}
		cout<<answer<<endl;
	}
}
/*
// Find the first n in 2^n-1 that is larger than n. then find find the largest 2^n-1 that divides n.
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		bool check=true;// Find the first n in 2^n-1 that is larger than n. then find find the largest 2^n-1 that divides n.
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		bool check=true;
		long long index=0;
		vector<long long> nums;
		while(check==true){
			long long a=(long long)(pow(2,index))-1;
			nums.push_back(a);
			if(a>n){
				check=false;
			}
			index++;
		}
		reverse(nums.begin(),nums.end());
		long long answer=0;
		for(long long i=0;i<nums.size();i++){
			long long dividend=(long long)(pow(2,i))-1;
			if(n%dividend==0){
				answer=n/dividend;
			}
		}
		cout<<answer<<endl;
	}
}
		long long index=0;
		vector<long long> nums;
		while(check==true){
			long long a=(long long)(pow(2,index))-1;
			nums.push_back(a);
			if(a>n){
				check=false;
			}
			index++;
		}
		reverse(nums.begin(),nums.end());
		long long answer=0;
		for(long long i=0;i<nums.size();i++){
			long long dividend=(long long)(pow(2,i))-1;
			if(n%dividend==0){
				answer=n/dividend;
			}
		}
		cout<<answer<<endl;
	}
}
*/