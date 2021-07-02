#include <iostream>
#include <vector>
using namespace std;

  int sum2(vector<int> v,int n){
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<n;i+=2){
      ans+=v[i];
    }
    return ans;
  }
int main() {
  std::cout << "Hello World!\n";
  vector<int>v;
  int n,k;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>k;
    v.push_back(k);
  }
  cout<< sum2(v,v.size());
}