class Solution {
public:
    
    bool help(vector<vector<char>>& board, int i, int j, string word){
        if (!word.size())
            return true;
        
        
        if (i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[0])  
            return false;
        
        
        char x = board[i][j];
        board[i][j] = '*';
        string s = word.substr(1);
        bool ans = help(board, i-1, j, s) || help(board, i+1, j, s) || help(board, i, j-1, s) ||           help(board, i, j+1, s);
        
        
        board[i][j] = x;
        return ans;
        
    }
    bool exist(vector<vector<char>>& board, string word) {    
        
        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board[i].size();j++){
                bool x = help(board ,i ,j , word);
                if(x){
                    return true;
                }
            }
        }
        
        
        return false;
    }
};