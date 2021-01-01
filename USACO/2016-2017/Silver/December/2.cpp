#include <bits/stdc++.h>
using namespace std;
int base26(char a, char b){
	return 26*(a-'A'+1)+b-'A'+1;
}
int main(){
	ifstream cin("citystate.in");
	ofstream cout("citystate.out");
	int n;
	cin>>n;
	int freq[1000][1000]={0};
	for(int i=0;i<n;i++){
		char a,b,c,d;
		string first,second;
		cin>>first>>second;
		a=first[0];
		b=first[1];
		int codeOne=base26(a,b);
		c=second[0];
		d=second[1];
		int codeTwo=base26(c,d);
		freq[codeOne][codeTwo]++;
	}
	 long long answer=0;
	for(int i=0;i<1000;i++){
		for(int j=i+1;j<1000;j++){
			answer+=(long long)(freq[i][j]*freq[j][i]);
		}
	}
	cout<<answer<<endl;
}
