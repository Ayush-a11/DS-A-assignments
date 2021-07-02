 #include <iostream>
#include <vector>
using namespace std;
  int sum3(vector<int> v,int n){
    vector<int> v2=v;
    int count=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
      if(v[i]!=v2[i])
        count++;
    }
    return count;
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
  cout<< sum3(v,v.size());
}