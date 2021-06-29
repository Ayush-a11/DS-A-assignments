#include <bits/stdc++.h>
using namespace std;

 int removeDuplicates(vector<int>& nums) {
        int i;
        set<int>s;
        for( i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        vector<int>v(s.begin(),s.end());
        for(i=0;i<v.size();i++){
            nums[i]=v[i];
        }
        return v.size();
    }
int main() {
  std::cout << "Hello World!\n";
  
  int n,k;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++){
    cin>>k;
    v.push_back(k);
  }
  cout<<" "<<removeDuplicates(v);
  
}