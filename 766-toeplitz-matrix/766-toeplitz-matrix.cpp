class Solution {
public:
//     bool help(vector<vector<int>>& matrix, int i, int j){
//         if(i+1>matrix.size() || j+1>matrix[0].size() || matrix.size()==0)
//             return false;
        
        
//         if(matrix[i][j]!=matrix[i+1][j+1]){
//             return false;
//         }
        
//         bool ans = help(matrix ,i+1, j+1);
        
//         return ans;
        
//     }
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        for (int i = 1; i < matrix.size(); i++){
            
            
            for (int j = 1; j < matrix[0].size(); j++){
                
                
                
                if (matrix[i][j] != matrix[i - 1][j - 1])
                    return false; 
                
                
                
            }
                
        }
            
        return true;
    }
};