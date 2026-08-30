class Solution {
public:
    bool solve (vector<vector<char>>& board, string word,int i,int r,int c){
        if(i==word.size()){
            return true;
        }

        if(r<0 || c<0 || r>=board.size() || c>=board[0].size()){
            return false;
        }

        if(board[r][c]!=word[i]){
            return false;
        }

        board[r][c]='#';

        bool ans= solve(board,word,i+1,r+1,c) ||
                solve(board,word,i+1,r,c+1) ||
                solve(board,word,i+1,r-1,c) ||
                solve(board,word,i+1,r,c-1) ;


        board[r][c]=word[i];

        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int r = 0; r < board.size(); r++) {
            for(int c = 0; c < board[0].size(); c++) {

                if(solve(board, word, 0,r,c))
                    return true;
            }
        }

        return false;
    }
};
