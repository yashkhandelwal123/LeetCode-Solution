class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int i =0, j= 0;
        int sum = 0;
        double ans =INT_MIN;
        
        while (j < n) {
            sum += nums[j];

            if (j - i + 1 == k) {
                double currAvg = static_cast<double>(sum) / k;
                ans = max(ans, currAvg);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        return ans;
//         if(n== 1){
//             return (double)nums[0];
//         }
//         vector<int> v(n+1, 0);
        
//         for(int i = 1; i<=n; i++){
//             if(i ==0 ){
//                 v[i] = 0;
//                 continue;
//             }
//             v[i] = v[i-1]+nums[i-1];
//             cout<<v[i]<<" ";
//         }
        
//         int i = 0 ,j = k;
//         double ans = 0;
//         while(j<n){
//             int sum = v[j] - v[i];
//             double a = (double)sum/k;
//             ans = max(a,ans);
//             i++;
//             j++;
//         }
        
//         return ans;
    }
};