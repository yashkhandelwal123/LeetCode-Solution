class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, min = prices[0];
//         for(int i = 0 ;i <prices.size(); i++){
            
//         }
        //as array is not sorted we can not apply lower bound
        // auto x = lower_bound(prices.begin(), prices.end(),0);
        // for(int i = x ;i<prices.size();i ++)
        // auto y = lower_bound(prices.begin()+x , prices.end() ,)
        // cout<<x - prices.begin()<<endl;
        for(int i = 0; i<prices.size(); i++){
            if(min > prices[i]) min = prices[i];
            else if(prices[i] - min > ans) ans = prices[i]-min;
            // min = prices[i];
            // for(int j = i+1; j<prices.size(); j++){
            //     if(min < prices[j]){
            //         ans = max(prices[j] -min ,ans);
            //     }
            // }
        }
        
        return ans;
    }
};