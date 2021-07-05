class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int k=0;
        int n=matrix[0].size();
        int m=matrix.size();
        vector<int>v;
        for(int i=0;i<matrix[0].size();i++)
            for(int j=0;j<matrix.size();j++)
                v.push_back(matrix[j][i]);
   
        
        vector<vector<int> > v1(n,vector<int>(m));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                cout<<v[k];
                v1[i][j]=v[k++];
            }
        return v1;
    }
};