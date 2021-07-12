class Solution {
public:
    bool isValid(string s) {
        map<char,char> m;
        m.insert({'(',')'});
        m.insert({'{','}'});
        m.insert({'[',']'});
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])!=m.end())
                st.push(s[i]);
            else if(!st.empty()&&m[st.top()]==s[i])
                st.pop();
            else
                return false;    
        }
        return st.empty();
        
        
        
        
    }
};