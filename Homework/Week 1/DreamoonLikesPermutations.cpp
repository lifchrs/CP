/*I am quite disappointed in my approach to this problem. My first solution was to find the first repeat of a  number, and I actualy did realise that the max number would be the length of one of the sequences, but I didn't do a good job of putting two and two together to create a much more efficient solution.
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int maximum=0;
		vector<int>nums;
		for(int i=0; i<n;i++){
			int a;
			cin>>a;
			maximum=max(a,maximum);
			nums.push_back(a);
		}
    set<int> first,second,third,fourth;
    for(int i=0;i<maximum;i++){
      first.insert(nums[i]);
    }
    for(int i=maximum;i<n;i++){
      second.insert(nums[i]);
    }
   // cout<<"max: "<<maximum<<endl;
    bool firstCheck=1;
    bool secondCheck=1;
    if(*(first.begin())!=1||*(first.end())!=maximum||first.size()!=maximum){
      firstCheck=0;
    }
    if(*(second.begin())!=1||*(second.end())!=n-maximum||second.size()!=n-maximum){
      firstCheck=0;
    }
    for(int i=0;i<n-maximum;i++){
      third.insert(nums[i]);
    }
    for(int i=n-maximum;i<n;i++){
      fourth.insert(nums[i]);
    }
    if(*(third.begin())!=1||*(third.end())!=n-maximum||third.size()!=n-maximum){
      secondCheck=0;
    }
    if(*(fourth.begin())!=1||*(fourth.end())!=maximum||fourth.size()!=maximum){
      secondCheck=0;
    }
    int count=0;
    if(firstCheck){
      count++;
    }
    if(secondCheck){
      count++;
    }
    cout<<count<<endl;
    if(firstCheck){
      cout<<maximum<<" "<<n-maximum<<endl;
    }
    if(secondCheck){
      cout<<n-maximum<<" "<<maximum<<endl;
    }
  }
}
