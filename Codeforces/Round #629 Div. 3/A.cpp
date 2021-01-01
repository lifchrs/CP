
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
int main() {
  int lines;
  cin>>lines;
  vector <int> solutions;
  for(int i=0;i<lines;i++){
    int a;
    int b;
    cin>>a;
    cin>>b;
    int sol=b-(a%b);
    if(a%b==0){
      solutions.push_back(0);
    }else{
    solutions.push_back(sol);
    }
  }
  for(int i:solutions){
    cout<<i<<endl;
  }
  return 0;

}
