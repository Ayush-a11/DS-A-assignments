class Solution {
public:
    bool isVowels(char s){
        
        if(s=='a'||s=='A'||s=='e'||s=='E'||s=='i'||s=='I'||s=='O'||s=='o'||s=='U'||s=='u')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int l=0,r=s.size()-1;
        while(l<=r)
        {
            if(isVowels(s[l])&&isVowels(s[r]))
            {
                swap(s[l],s[r]);
                l++;
                r--;
            }
            else if(!isVowels(s[l]))
                l++;
            else if(!isVowels(s[r]))
                r--;                
        }
        return s;
    }
};