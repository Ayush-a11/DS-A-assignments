class Solution {
public:
    bool isPalindrome(string s) {
        
        for(int i=0;i<s.size();i++)
            s[i]=tolower(s[i]);
        int r=s.size()-1;
        int l=0;
        int b=0;
        while(l<=r)
        {
            if(isalnum(s[l])&&isalnum(s[r])){
                cout<<s[l]<<"=="<<s[r]<<"\n";
                if(s[l]!=s[r])
                    return false;
                else{
                    l++,r--;
                }
            }
             else if(!isalnum(s[l]))
                 l++;
             else if(!isalnum(s[r]))
                 r--;              
        }
            return true;
    }
};