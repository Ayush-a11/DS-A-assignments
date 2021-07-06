class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>v;
        int k,l;
        int max1=INT_MAX,max2=0;
        for(int i=0;i<matrix.size();i++){
            max1=INT_MAX,max2=0;
            for(int j=0;j<matrix[0].size();j++){
                
                if(max1>=matrix[i][j]){
                    max1=matrix[i][j];
                    k=i,l=j;
             }
            }
            for(int j=0;j<matrix.size();j++){
                max2=max(max2,matrix[j][l]);
            }
            cout<<max1<<" "<<max2;
            if(max1==max2){
                v.push_back(max1);
                break;
            }

                
        }
        return v;
    }
};