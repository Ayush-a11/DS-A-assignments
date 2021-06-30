#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void numIdenticalPairs(vector<int>& nums) {
     
        map<int,int>m;
        int counter=0;
        for(int i=0;i<nums.size();i++){
            
            if(m.find(nums[i])!=m.end()){
              counter+=m[nums[i]];
                m[nums[i]]++;
            }
            else{
              m[nums[i]]=1;
            }    
        }
       cout<<counter;
}

int main() {
  std::cout << "Hello World!\n";
  vector<int>v;
  int k,n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>k;
    v.push_back(k);
  }
  numIdenticalPairs(v);

}