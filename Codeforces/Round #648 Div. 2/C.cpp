#include <bits/stdc++.h>
using namespace std;
vector<int> posA(2e5+2),posB(2e5+2),freq(2e5+2);
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		posA[a]=i+1;
	}
	for(int i=0;i<n;i++){
		int b;
		cin>>b;
		posB[b]=i+1;
	}

	vector<int> difs;
	for(int i=1;i<n+1;i++){
		difs.push_back(((posA[i]-posB[i])+n)%n);
	}
	for(int i:difs){
		freq[i]++;
	}

	int maxi=0;
	for(int i=0;i<n;i++){
		maxi=max(freq[i],maxi);
	}
	cout<<maxi<<endl;
}
