class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int i,j; 
        int flag=0;
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                if(board[i][j]=='R'){
                    flag=1;
                    break;
                }
                
            }
        if(flag==1)
            break;
        }
        cout<<i<<j;
        int k=i,l=j;
        int fina1=0;

        for(i=k+1;i<8;i++){
            cout<<board[i][j];
              if(board[i][l]=='p'){
                fina1+=1;
                break;
            }
            if(board[i][l]=='B')
                break;
        }
        for(i=k-1;i>=0;i--){
            if(board[i][l]=='p'){
                fina1+=1;
                break;
            }
            if(board[i][l]=='B')
                break;
        }
        for(j=l-1;j>=0;j--){
           if(board[k][j]=='p'){
                fina1+=1;
                break;
            }
            if(board[k][j]=='B')
                break;
        }
        
        for(j=l+1;j<8;j++){
            if(board[k][j]=='p'){
                fina1+=1;
                break;
            }
            if(board[k][j]=='B')
                break;
        }
        return fina1;
    }
    
    
};