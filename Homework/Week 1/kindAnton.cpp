/*first idea: go through each index from the last and check if there is a +1 or -1 behind it. runs in O(N^2)
 *second idea: count number of +1 and -1 first run through and then each time a number is passed, subtract from the count. if there is 0 left then it doesn't work. runs in linear time.
 *Thoughts about the problem before solving: seems quite easy to solve. Hopefully no implementation issues.
 *Thoughts about he problem after solving: Writing it was easy and I managed to solve test cases on the first try.
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int z=0; z<t; z++){
		int n,positiveCount=0,negativeCount=0;
		cin>>n;
		vector <int> a,b;
		bool answer=true;
		for(int h=0;h<n;h++){
			int x;
			cin>>x;
			if(x>0){
				positiveCount++;
			}else if(x<0){
				negativeCount++;
			}
			a.push_back(x);
		}
		for(int v=0;v<n;v++){
			int x;
			cin>>x;
			b.push_back(x);
		}
		for(int i=n-1;i>=0;i--){
			if(a[i]>0){
				positiveCount--;
			}else if(a[i]<0){
				negativeCount--;
			}
			if(b[i]-a[i]>0&&positiveCount==0){
				answer=false;
				break;
			}
			if(b[i]-a[i]<0&&negativeCount==0){
				answer=false;
				break;
			}
			
		}
		if(answer==true){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
}
