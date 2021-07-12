class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int carry=0;
        for(int i=a.size()-1;i>=0;i--){
            if(a[i]==b[i]&&carry){
                
                if(a[i]=='0'){
                    ans+='0';
                    carry=0;
                }
                else{
                    ans+='1';
                    carry=1;
                }
            }
            else if(a[i]==b[i]){
                ans+='0';
                carry=1;
            }
            else{
                ans+='1';
                carry=0;
            }
        }
        if(carry=1)
            ans+='1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};