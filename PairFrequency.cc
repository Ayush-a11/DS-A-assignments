#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 void Pair(vector<int>& nums) {
     vector<int>v;
        for(int i=0;i<nums.size();){
            
            if(nums[i]>0){
                v.push_back(nums[i+1]);
                nums[i]--;
            }
            else{
                i+=2;
            }
        }
        for(auto i:v)
          cout<<i<<" ";
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
  Pair(v);
}
smallest