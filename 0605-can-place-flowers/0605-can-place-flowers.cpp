class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        if(flowerbed.size() == 1){
            if(flowerbed[0] == 0){
                return true;
            }
            else{
                if(n){
                    return false;
                }
                else{
                    return true;
                }
            }
        }
        
        for(int i =0; i<flowerbed.size(); i++){
            if(i == 0 && flowerbed[i] == 0 && flowerbed[i+1] ==0){
                if(n){
                    flowerbed[i] = 1;
                    n--;
                }
            }
            if(i == flowerbed.size()-1 && flowerbed[i] == 0 && flowerbed[i-1] ==0){
                if(n){
                    flowerbed[i] = 1;
                    n--;
                }
            }
            if(i!=0 && i!=flowerbed.size()-1 && flowerbed[i] == 0){
                if(flowerbed[i-1] == 0 && flowerbed[i+1]==0){
                    if(n){
                        flowerbed[i] = 1;
                        n--;
                    }
                }
            }
        }
        if(n){
            return false;
        }
        
        return true;
    }
};