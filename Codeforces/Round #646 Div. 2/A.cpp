#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		//cout<<n<<x;
		int odd=0,even=0;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			if(a%2==1){
				odd++;
			}else{
				even++;
			}
		}
		//cout<<odd<<endl;
		//cout<<"x: "<<x;
		bool ans=0;
		int numOdd=1;
		while(numOdd<=x){
			//cout<<"odd: "<<numOdd;
			if(numOdd==1){
				//cout<<"yes!";
			}
			if((odd>=numOdd)&&(even>=(x-numOdd))){
				ans=1;
				//cout<<"yug";
				break;
			}
			numOdd+=2;
		}
		if(ans)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
}
