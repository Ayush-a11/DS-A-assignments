class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        k=k%(grid.size()*grid[0].size());
        vector<int>v;
        
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
                    v.push_back(grid[i][j]);
        
        reverse(v.begin(),v.end());
        reverse(v.begin()+k,v.end());
        reverse(v.begin(),v.begin()+k);
        for(auto i:v)
            cout<<i<<" ";
        int l=0;
          for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
                    grid[i][j]=v[l++];
    
        return grid;
        
    }
};