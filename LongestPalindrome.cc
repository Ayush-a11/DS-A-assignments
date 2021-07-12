class Solution {
public:
    int longestPalindrome(string s) {
        
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        int count=0;
        for(auto i:m){
            if(i.second%2!=0){
                count+=1;   
            }
        }
        if(count>1)
            return s.size()-count+1;
        return s.size();
    }
};