#include<bits/stdc++.h>
using namespace std;
void final(int *a,int *b,int n,int m){
  map<int,int> ma;
  set<int> s;
  for(int i=0;i<n;i++)
    ma.insert({a[i],i});

  for(int i=0;i<m;i++)
  {
    if(ma.find(b[i])!=ma.end())
      s.insert(b[i]);
  }
for(auto i:s)
  cout<<i<<" ";
}

int main() {
  std::cout << "Hello World!\n";
  int n,m;
  cin>>n;
  cin>>m;
  int a[n],b[m];
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<n;i++)
    cin>>b[i];
  final(a,b,n,m);


}