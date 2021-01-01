#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("bcount.in", "r", stdin);
	freopen("bcount.out", "w", stdout);
	int n,q;
	cin>>n>>q;
	int a=0,b=0,c=0;
	vector <vector<int> > prefix;
	vector <int> z;
	z.push_back(a);
	z.push_back(b);
	z.push_back(c);
	prefix.push_back(z);
	for(int i=0;i<n;i++){
		int l;
		cin>>l;
		if(l==1){
			a++;
		}else if(l==2){
			b++;
		}else if(l==3){
			c++;
		}
		vector <int> y;
		y.push_back(a);
		y.push_back(b);
		y.push_back(c);
		prefix.push_back(y);
	}
	vector <vector<int> > ranges;
	for(int i=0;i<q;i++){
		int start,end;
		cin>>start>>end;
		vector <int> y;
		y.push_back(start);
		y.push_back(end);
		ranges.push_back(y);
	}
	//cout<<prefix.size()<<endl<<endl;
	for(vector <int> k:ranges){
		int first=k[0],second=k[1],answerA,answerB,answerC;
		//cout<<first<<" "<<second<<endl;
		answerA=prefix[second][0]-prefix[first-1][0];
		answerB=prefix[second][1]-prefix[first-1][1];
		answerC=prefix[second][2]-prefix[first-1][2];
		cout<<answerA<<" "<<answerB<<" "<<answerC<<"\n";
	}
	
}
