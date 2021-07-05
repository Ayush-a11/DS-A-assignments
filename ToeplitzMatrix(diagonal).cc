 bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        for(int i=0;i<matrix.size()-1;i++){
            for(int j=0;j<matrix[0].size()-1;j++){
                if(matrix[i+1][j+1]!=matrix[i][j])
                    return false;
            }
        }
        return true;
    }