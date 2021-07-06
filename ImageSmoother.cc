class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
     vector<vector<int>> temp(M.size(), vector<int>(M[0].size(), 0));
        int sum=0,k=0;
        for(int i=0;i<M.size();i++){
            
            for(int j=0;j<M[0].size();j++){
                k=0;
                sum=0;
                sum+=M[i][j];
                if(i){
                    sum+=M[i-1][j];
                    k++;
                }
                 if(i!=M.size()-1){
                    sum+=M[i+1][j];
                    k++;
                }
                 if(j){
                    sum+=M[i][j-1];
                    k++;
                }
                 if(j!=M[0].size()-1){
                    sum+=M[i][j+1];
                    k++;
                }
                 if(i&&j){
                    sum+=M[i-1][j-1];
                    k++;
                }
                if(i!=M.size()-1&&j!=M[0].size()-1){
                    sum+=M[i+1][j+1];
                    k++;
                }
                 if(i!=M.size()-1&&j){
                    sum+=M[i+1][j-1];
                    k++;
                }
                 if(i&&j!=M[0].size()-1){
                    sum+=M[i-1][j+1];
                    k++;
                }
                temp[i][j]=floor(sum/(k+1));
                    
            }
        }
        return temp;
    }
};