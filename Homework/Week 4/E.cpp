#include <bits/stdc++.h>
using namespace std;
int counts[1001];
int adjList[1001];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>adjList[i];
	}
	for(int i=1;i<=n;i++){
		memset(counts,0,sizeof counts);
		int current=i;
		while(true){
			counts[current]++;
			if(counts[current]==2){
				cout<<current<<" ";
				break;
			}
			current=adjList[current];
		}
	}
	cout<<"\n";
}
