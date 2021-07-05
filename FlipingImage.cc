class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        
        for(int i=0;i<image.size();i++){
            reverse(image[i].begin(),image[i].end());
            for(int j=0;j<image[0].size();j++){
                image[i][j]=1^image[i][j];
            }
        }
        return image;
    }
};