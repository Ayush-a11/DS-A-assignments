    string DC(vector<string>& strs,int l,int r){
        
        if(l==r)return strs[l];
        int mid=l+(r-l)/2;
        string s1=DC(strs,l,mid);
        string s2=DC(strs,mid+1,r);
        int len=min(s1.size(),s2.size());
        string ans="";
        for(int i=0;i<len;i++)
            if(s1[i]!=s2[i]){
                for(int j=0;j<i;j++)
                    ans+=s1[j];
                return ans;
            }
        
        for(int j=0;j<len;j++)
            ans+=s1[j];
        return ans;
        
    }
    string longestCommonPrefix(vector<string>& strs) {
        return DC(strs,0,strs.size()-1);
        }