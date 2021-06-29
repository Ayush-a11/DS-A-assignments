#include<bits/stdc++.h>
using namespace std;
vector<int> shuffle(vector<int>& nums, int n) {
     vector<int> v;
        int k=0;
        for(int i=0;i<n;i++)
        {
                v.push_back(nums[i]);
                v.push_back(nums[n+i]);
            
        }
        return v;
}
int main() {
  std::cout << "Hello World!\n";
  
  int n,k;
  cin>>n;
  vector<int>v;
  for(int i=0;i<2*n;i++){
    cin>>k;
    v.push_back(k);
  }
  vector<int> v1=shuffle(v,n);
  for(int i=0;i<2*n;i++){
    cout<<v1[i]<<" ";
  }
}