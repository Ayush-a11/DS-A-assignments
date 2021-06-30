#include <bits/stdc++.h>
using namespace std;
int maximumWealth(vector<vector<int>>& v) {
     
        int wealth;
        int max1=0;
        for(int i=0;i<v.size();i++){
            wealth=0;
            for(int j=0;j<v[i].size();j++)
                wealth+=v[i][j];
            max1=max(max1,wealth);
            
        }
        return max1;
    }
int main() {
  std::cout << "Hello World!\n";
  int m,n;
  int k;
  cin>>m>>n;
  vector<vector<int>> v(m);

  for(int i=0;i<m;i++){

    for(int j=0;j<n;j++){
      cin>>k;
      v[i].push_back(k);
    }
  }
  cout<<maximumWealth(v);

}