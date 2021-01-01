#include <bits/stdc++.h>
using namespace std;
int power(int a,int b){
	int answer=1;
	while(b--){
		answer*=a;
	}
	return answer;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		vector<int> answers;
		int n;
		cin>>n;
		while(n>0){
			int a=1;
			while(n%power(10,a)==0){
				a++;
			}
			answers.push_back(n%power(10,a));
			n-=n%power(10,a);
		}
		reverse(answers.begin(),answers.end());
		cout<<answers.size()<<endl;
		for(int i:answers){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
