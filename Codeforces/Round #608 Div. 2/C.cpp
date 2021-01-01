/*Idea is to sort the xs and ys. Best spot is always one of the four spots around the school.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,schoolx,schooly;
	cin>>n>>schoolx>>schooly;
	int northNum=schooly+1,southNum=schooly-1,westNum=schoolx-1,eastNum=schoolx+1;
	vector<int> xs,ys;
	xs.push_back(schoolx+1);
	xs.push_back(schoolx-1);
	ys.push_back(schooly+1);
	ys.push_back(schooly-1);
	for(int j=0;j<n;j++){
		int a,b;
		cin>>a>>b;
		xs.push_back(a);
		ys.push_back(b);
	}
	sort(xs.begin(),xs.end());
	sort(ys.begin(),ys.end());
	int northsize,eastsize,southsize,westsize;
	for(int i=0;i<xs.size();i++){
		if(xs[i]==eastNum){
			eastsize=xs.size()-i-1;
			break;
		}
	}
	for(int i=0;i<ys.size();i++){
		if(ys[i]==northNum){
			northsize=ys.size()-i-1;
		}
	}
	reverse(xs.begin(),xs.end());
	reverse(ys.begin(),ys.end());
	for(int i=0;i<ys.size();i++){
		if(ys[i]==southNum){
			southsize=ys.size()-i-1;
		}
	}
	for(int i=0;i<xs.size();i++){
		if(xs[i]==westNum){
			westsize=xs.size()-i-1;
			break;
		}
	}
	int actualx,actualy,totalppl=max(max(westsize,northsize),max(southsize,eastsize));
	if(westsize==totalppl){
		actualx=schoolx-1;
		actualy=schooly;

	}
	else if(eastsize==totalppl){
		actualx=schoolx+1;
		actualy=schooly;

	}
	else if(northsize==totalppl){
		actualx=schoolx;
		actualy=schooly+1;


	}else if(southsize==totalppl){
		actualx=schoolx;
		actualy=schooly-1;

	}
	cout<<totalppl<<endl<<actualx<<' '<<actualy<<endl;
}
