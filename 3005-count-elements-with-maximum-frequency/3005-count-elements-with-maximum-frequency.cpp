class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> m;
        for(int i =0 ;i<nums.size(); i++){
            m[nums[i]]++;
        }
        int x = 0;
        for(auto i :m){
            cout<<i.second<<endl;
            if(i.second > x){
                x =(i.second);
            }
        }
        
        // int x = m.begin()->second;
        int ans = 0;
        for(auto i :m){
            cout<<i.second<<endl;
            if(i.second == x){
                ans+=(i.second);
            }
        }
        return ans;
        
    }
};