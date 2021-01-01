#include <bits/stdc++.h>
using namespace std;
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define ld long double
ld diff(ld a,ld b){
	return(abs(a-b));
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	int T;
	cin>>T;
	while(T--){
		ld h,c,t;
		cin>>h>>c>>t;
		ld cupsPoured=0;
		bool done=0;
		ld lastTemp=0;
		vector<ld> temps;
		int sum=0;
		while(!done){
			ld cupTemp;
			if(int(cupsPoured)%(2)==0){
				cupTemp=h;
			}else{
				cupTemp=c;
			}
			ld newTemp=(sum+cupTemp)/(cupsPoured+1);
			sum+=cupTemp;
			temps.push_back(newTemp);
			lastTemp=newTemp;
			if(((diff(*(temps.end()-3),t))<=diff(*(temps.end()-1),t)&&(diff(*(temps.end()-4),t)<=diff(*(temps.end()-2),t)))||((*(temps.end()-3))==t)){
				done=1;
				cupsPoured-=2;
			}
			cupsPoured++;
		}
		
		//for(ld i:temps) cout<<i<<" ";
		cout<<cupsPoured<<endl;
		//cout<<endl;
	}
}
