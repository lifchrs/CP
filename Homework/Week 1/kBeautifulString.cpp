/*I had actually seen this problem before when I was browsing old problems, but I hadn't implemented it
 * I noticed a pattern when looking at the ordered permutations of 5. Pattern was quite simple, but I made some stupid mistakes while implementing. This wasted a lot of time. (Like not realising that it is nC2-k+1 instead of n-k+1 because I'm stupid)
 *I should also be more aware of when I should use longs.
 *
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t-->0){
		long long n,k;
		cin>>n>>k;
		vector <char> perm;
		long long  backNum=n*(n-1)/2-k+1;
		long long currentSize=n-1;
		while(backNum-currentSize>0){
			backNum-=currentSize;
			currentSize--;
		}


		long long  firstPos=n-currentSize;
		long long  secondPos=backNum+firstPos;
		for(long long  i=0;i<n;i++){
			perm.push_back('a');
		}
		perm[firstPos-1]='b';
		perm[secondPos-1]='b';
		string answer="";
		for(long long  i=0; i<n;i++){
			answer+=perm[i];
		}
		cout<<answer+"\n";
	}
}

