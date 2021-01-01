#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	vector<int> as(n),bs(n),diff(n);
	for(int i=0;i<n;i++){
		cin>>as[i];
	}
	for(int i=0;i<n;i++){
		cin>>bs[i];
		diff[i]=as[i]-bs[i];
	}
	sort(diff.begin(),diff.end());
	long long answer=0;
	for(int i=0;i<n;i++){
		if(diff[i]>0){
			int x=lower_bound(diff.begin(),diff.end(),-diff[i]+1)-diff.begin();       
			answer+=(long long)(i-x);
		}
	}
	cout<<answer<<endl;
}
