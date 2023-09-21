class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int count = 0;
        for(int i = 1; 2*n > i*(i-1); i++){
            int num = n-(i*(i-1)/2);
            
            if(num%i == 0) count++;
        }
        
        return count;
    }
};