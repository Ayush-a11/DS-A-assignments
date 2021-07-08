class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int k=4;
        while(k--){
        for(int i=0;i<mat.size();i++){
            for(int j=i;j<mat[0].size();j++){
               swap(mat[i][j],mat[j][i]);
            }
                
            reverse(mat[i].begin(),mat[i].end());
        }
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++)
                cout<<mat[i][j];
        }
            
            if(mat==target)
                return true;
        }
        return false;
    }
};