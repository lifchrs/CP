#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		deque<int> candies;
		int n;
		cin>>n;
		int sum=0,acandies=0,bcandies=0;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			candies.push_back(a);
			sum+=a;
		}
		int lasta=0,lastb=0,moves=0,add=0;
		while(!candies.empty()){
			lasta=0;
			while(lasta<=lastb&&candies.size()>0){
				add=candies.front();
				candies.pop_front();
				lasta+=add;
			}
			acandies+=lasta;
			moves++;
			if(candies.empty()){
				break;
			}
			lastb=0;
			while(lastb<=lasta&&candies.size()>0){
				add=candies.back();
				candies.pop_back();
				lastb+=add;
			}
			bcandies+=lastb;
			moves++;
			if(!candies.empty()){
			}else{
				break;
				add=0;
				lasta=0;
			}
		}
		cout<<moves<<" "<<acandies<<" "<<bcandies<<endl;
	}
}
