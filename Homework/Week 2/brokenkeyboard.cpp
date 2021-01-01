//try to just go through each char and check if that char is on the keyboard
#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;
	cin>>n>>k;
	string x;
	cin>>x;
	vector <char> keys;
	for(long long i=0;i<k;i++){
		char a;
		cin>>a;
		keys.push_back(a);
	}
	vector<bool> splits;
	for(char c:x){
		bool in=false;
		for(long long i=0;i<k;i++){
			if(c==keys[i]){
				in=true;
				break;
			}
		}
		splits.push_back(in);

	}
	splits.push_back(false);

	long long answer=0;
	long long count=0;
	for(bool z:splits){
		if(z==1){
			count++;
		}else{
			answer+=((count)*(count+1))/2;
			count=0;
		}
	}
	cout<<answer<<endl;
}