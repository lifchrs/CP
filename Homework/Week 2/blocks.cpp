#include <bits/stdc++.h>
using namespace std;
string a;
string b;
string answer="";
int total=0;
void flip(int index){
	if(a[index]=='B'){
		a[index]='W';
	}else{
		a[index]='B';
	}
	if(a[index+1]=='W'){
		a[index+1]='B';
	}else{
		a[index+1]='W';
	}
	answer+=to_string(index+1)+" ";
	total++;
}

void flip1(int index){
	if(b[index]=='B'){
		b[index]='W';
	}else{
		b[index]='B';
	}
	if(b[index+1]=='W'){
		b[index+1]='B';
	}else{
		b[index+1]='W';
	}
	answer+=to_string(index+1)+" ";
	total++;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	cin>>a;
	b=a;
	for(int i=0;i<n-1;i++){
		if(a[i]!='W'){
			flip(i);
		}
	}
	if(a[n-1]!='W'){
		total=0;
		answer="";
		for(int i=0;i<n-1;i++){
			//cout<<b+"\n";
			if(b[i]!='B'){
				flip1(i);
			}
		}
		if(b[n-1]!='B'){
			cout<<-1<<endl;
		}else{
			cout<<total<<endl<<answer<<endl;
		}
	}else{
		cout<<total<<endl<<answer<<endl;
	}
}


//BBWWB
