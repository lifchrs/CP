/*First Idea: randomly choose if A or be will be the largeest number when coming across the first 1. Then shift the rest of the larger numbres to the other number
 * Number must be chosen when the first one comes. (2 is just 1,1 and 0 is just 0,0)
 * After the first one comes, then 2 is 2,0     1 is 1,0 and 0 is 0,0
 *Conclusion: I am spending wayyyyyyyy too much time writing code after I know the solution. Need to have more clarity while writing code.
*/
#include <bits/stdc++.h>
using namespace std;
long long exp(long long a,long long b){
	long long c=1;
	while(b-->0){
		c*=a;
	}
	return c;
}
int main(){
       int t;
	cin>>t;
	while(t-->0){
		int  n;
		string goal;
		cin>>n>>goal;
		string a,b;
		//a should always be the bigger one
		bool split=false;
		for(char g:goal){
			if(!split){
				if(g=='1'){
					a+='1';
					b+='0';
					split=true;
				}else if(g=='2'){
					a+='1';
					b+='1';
				}else if(g=='0'){
					a+='0';
					b+='0';
				}
			}else{
				if(g=='1'){
					a+='0';
					b+='1';
				}else if(g=='2'){
					a+='0';
					b+='2';
				}else if(g=='0'){
					a+='0';
					b+='0';
				}

			}
		}
		cout<<a+"\n"+b+"\n";
	}
}
