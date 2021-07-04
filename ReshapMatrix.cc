class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int column=nums[0].size();
        int row=nums.size();
        
        if(r*c!=row*column)
            return nums;
        vector<int>vect;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
                vect.push_back(nums[i][j]);
                
        }
        for(int i=0;i<vect.size();i++)
        {
            cout<<vect[i];
        }
        
        vector<vector<int>> v(r,vector<int> (c, 0));
        int x=0;
        for(int i=0;i<r;i++){
            
            for(int j=0;j<c;j++){
                
                v[i][j]=vect[x];
                x++;
            }
        }
        
        
        return v;
    }
};