#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void createTargetArray(vector<int>& nums, vector<int>& index) {
      vector<int> t;
      for(int i = 0; i < index.size(); ++i)
      {
          t.insert(t.begin() + index[i], nums[i]);
      }
      for(int i=0;i<t.size();i++)
        cout<<t[i]<<" ";
  }
int main() {
  std::cout << "Hello World!\n";
  vector<int>v;
  vector<int>v1;
  int k;
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    cin>>k;
    v.push_back(k);
  }
  for(int i=0;i<n;i++){
    cin>>k;
    v1.push_back(k);
  }
  createTargetArray(v,v1);
}