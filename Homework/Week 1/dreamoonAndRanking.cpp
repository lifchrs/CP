/*First idea: create array that is sorted (kinda) and count the number of 0s till you get to x;
 *Conclusion: Had quite a lot of implementation errors. need to understand array vs vector better
 *
 * I don't actually understand why my code works completely. Will talk about this with you in the next class
 */


#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t-->0){
		vector <bool> array(1000000);
		int n,x;
		cin>>n>>x;
		int a=n;
		while(a-->0){
			int a;
			cin>>a;
			array[a-1]=true;
		}
		int count=0;
		int answer=-2;
		for(int i=0;i<1e5;i++){
			if(!array[i]){
				count++;
			}
			if(count==x){// before it was count==x+1 and answer=i so that it goes until the one next and then backtracks. like 10011110 with x=2
				answer=i+1; 
			}
		}
		cout<<answer<<endl;
	}
}

