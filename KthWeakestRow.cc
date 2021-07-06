class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
     
        vector<int>v;
        int j;
        for(int i=0;i<mat[0].size();i++){
            
            for(j=0;j<mat.size();j++){
                 if(v.size()==k)
                    break;
                if(mat[j][i]==0){
                   
                    if(i==0)
                        v.push_back(j);
                    else if(mat[j][i-1]==1)
                    {
                         cout<<mat[j][i]<<" "<<j<<" "<<i<<" ";
                    
                        v.push_back(j);
                    }
                    
                }
            }
            if(v.size()==k)
                break;
        }
        if(v.size()==0)
        {
            for(int i=0;i<k;i++)
                v.push_back(i);
                
        }
        else if(v.size()<k)
        {
            int j=mat[0].size()-1;
            for(int i=0;i<mat.size();i++){
                if(mat[i][j]==1){   
                v.push_back(i);
                if(v.size()==k)    
                    break;
                }
            }
                
        }
        return v;
    }
};