#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string truncateSentence(string s, int k) {
        string s2;
        int i=0;
        while(k!=0){
            while(i<s.size()&&s[i]!=32){
                s2+=s[i];
                i++;
            }
            if(k!=1)
                s2+=" ";
            i++;
            k--;
            
        }
        return s2;
    }
int main() {
  std::cout << "Hello World!\n";
  string s;
  int k;
  getline(cin,s);
  cin>>k;
  cout<<truncateSentence(s,k);
}