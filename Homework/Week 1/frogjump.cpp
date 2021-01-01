/*I found the insight to this problem after quite a lot of time. i need to work on finding simplifying the problem.
 *Implementation: Implementation was quite easy. Adding 'R' helped.
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		s+='R';
		int dist=0;
		int maxd=-1;
		for(char a:s){
			dist++;
			if(a=='R'){
				maxd=max(maxd,dist);
				dist=0;
			}
		}
		cout<<maxd<<"\n";
	}
}
