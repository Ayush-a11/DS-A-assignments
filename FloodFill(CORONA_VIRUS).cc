class Solution {
public:
    void dfs(vector<vector<int>> &image,int sr,int sc,int newColor,int key){
        
        image[sr][sc]=newColor;
        if(sr-1>=0&&image[sr-1][sc]==key)
            dfs(image,sr-1,sc,newColor,key);
        cout<<"1";
        if(sr+1<image.size()&&image[sr+1][sc]==key)
            dfs(image,sr+1,sc,newColor,key);
        cout<<"2";
        if(sc-1>=0&&image[sr][sc-1]==key)
            dfs(image,sr,sc-1,newColor,key);
        cout<<"3";
        if(sc+1<=image[0].size()&&image[sr][sc+1]==key)
            dfs(image,sr,sc+1,newColor,key);
        cout<<"4";
        return;
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
     if(image[sr][sc]==newColor)
            return image;
        dfs(image,sr,sc,newColor,image[sr][sc]);
        return image;
        
    }
};