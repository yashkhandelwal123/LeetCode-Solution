class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
      unordered_map<int,int> mp;
        int count=0;
        for(int i=0;i<time.size();i++){
            int rem=time[i]%60;
            if(mp.find(60-rem)!=mp.end()){
                count+=mp[60-rem];
            }
            if(rem==0) rem=60;
            mp[rem]++;
        }
        return count;
    }
};