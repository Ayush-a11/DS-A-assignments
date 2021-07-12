class Solution {
public:
    string addStrings(string num1, string num2) {
        int sum=0;
        string res="";
        int carry=0;
        int i=num1.size()-1,j=num2.size()-1;
        while(i>=0||j>=0){
            sum=carry;
            if(i>=0)
                sum+=num1[i]-'0',i--;
            if(j>=0)
                sum+=num2[j]-'0',j--;
                carry=sum/10;
                sum%=10;
            res+=to_string(sum);
            
        }if(carry)
            res+=to_string(carry);
        reverse(res.begin(),res.end());
        return res;
    }
};