#include <iostream>
#define max 100
using namespace std;
void removeduplicate(int *a,int n,int key){
  int a1[n],k=0;
  bool bo=true;
  for(int i=0;i<n;i++){
    if(a[i]!=key||bo){
      a1[k++]=a[i];

      bo=false;
    }
  }
  for(int i=0;i<k;i++)
    cout<<a1[i]<<" ";
}

int main() {
  std::cout << "Hello World!\n";

  int a[max],n,key;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cin>>key;
  removeduplicate(a,n,key);
}