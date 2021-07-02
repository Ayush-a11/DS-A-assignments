 #include<bits/stdc++.h>
 using namespace std;
  int uniqueMorseRepresentations(vector<string>& words) {
        string s[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        map<char,string>m;
        set<string> se;
        for(int i=0;i<26;i++){
            m.insert({97+i,s[i]});
        }
        int k=0;
        for(int i=0;i<words.size();i++){
            int wo=words[i].size();
            k=0;
            string s1="",s3=words[i];
           while(wo--){
               s1+=m[s3[k++]];
           }
            cout<<s1;
            se.insert(s1);
        }
        for(auto i:se)
            cout<<i<<" ";
        
        return se.size();
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
  cout<<uniqueMorseRepresentations(v,n);
 
}