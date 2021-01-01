/*see how many different scores there are. Make a frequency array. 
take as many gold such that it is less than 1/3 of all.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,maxnum;
		cin>>n;
		vector <int> scores(n);
		for(int i=0;i<n;i++){
			cin>>scores[i];
		}
		vector<int> noEmpty;
		int total=0,current=scores[0];
		for(int i=0;i<n/2;i++){
			if(scores[i]==current){
				total++;
			}else{
				current=scores[i];
				noEmpty.push_back(total);
				total=1;
			}
		}
		noEmpty.push_back(total);
		if(scores[n/2]==current&&noEmpty.size()>0){
			//cout<<"deleted";
			noEmpty.pop_back();
		}
		int sum=0;
		//cout<<"start";
		for(int i:noEmpty){
			sum+=i;
			//cout<<i<<" ";
		}
		//cout<<"end\n";
		//cout<<endl;
		if(noEmpty.size()<3||noEmpty[0]>(sum-noEmpty[0])/2){
			cout<<"0 0 0\n";
			continue;
		}
		int gold=0, silver=0, bronze=0;
		gold=noEmpty[0];
		int endIndex;
		for(int i=1;silver<=gold;i++){
			silver+=noEmpty[i];
			endIndex=i;
		}
		//cout<<"end "<<endIndex;
		for(int i=endIndex+1;i<noEmpty.size();i++){
			bronze+=noEmpty[i];
		}
		//cout<<"next"<<endl;
		if(gold>=silver||gold>=bronze){
			bronze=0;
			silver=0;
			gold=0;
		}
		cout<<gold<<' '<<silver<<' '<<bronze<<endl;

	}
}




/*
5
12
5 4 4 3 2 2 1 1 1 1 1 1
4
4 3 2 1
1
1000000
20
20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
32
64 64 63 58 58 58 58 58 37 37 37 37 34 34 28 28 28 28 28 28 24 24 19 17 17 17 17 16 16 16 16 11
*/

