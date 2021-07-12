class Solution {
public:
    bool canConstruct(string note, string mag) {
        
        map<char,int>m;
        for(int i=0;i<note.size();i++){
          m[note[i]]++;           
        }
        for(int i=0;i<mag.size();i++){
            if(m[mag[i]])
                m[mag[i]]--;
        }
        int count=0;
        for(auto i:m){
            count+=i.second;
            cout<<i.second<<" ";
        }
        return count==0;
        
    }
};