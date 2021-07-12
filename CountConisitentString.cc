class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int final1=0;
        map<char,int> m;
        for(int i=0;i<allowed.size();i++){
             m.insert({allowed[i],i});
        }
        int count=0,k;
        for(int i=0;i<words.size();i++){
            k=0;
            count=0;
            int l=words[i].size();
            string s=words[i];
            while(l--){
                 if(m.find(s[k++])!=m.end()){
                    count++;
                }
                
            }
            if(count==words[i].size())
                final1++;
            
            
            
        }
      return final1;
    }
};