class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        
        int final1=0,max1=0;
        for(int i=0;i<grid.size();i++){
            
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]>0)
                    final1++;
                max1=max(max1,grid[i][j]);
                
            }
            final1+=max1;
            max1=0;
        }
        max1=0;
         for(int i=0;i<grid[0].size();i++){
            
            for(int j=0;j<grid.size();j++){
                max1=max(max1,grid[j][i]);
                
            }
            final1+=max1;
            max1=0;
        }
        
    
        return final1;
    }
};