#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void decode(vector<int>& encoded, int first) {
        
        vector<int>v;
        v.push_back(first);
        for(int i=0;i<encoded.size();i++){
            v.push_back(encoded[i]^v[i]);
        }
     for(auto i:v){
       cout<<i<<" ";
     }
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
  int first;
  cin>>first;
  decode(v,first);
}