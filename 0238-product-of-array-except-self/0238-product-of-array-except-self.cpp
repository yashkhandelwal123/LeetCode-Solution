class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        std::vector<int> output(n, 0);

        int product = 1;
        int zeroCount = 0;

        for (int i = 0; i < n; ++i) {
            if (nums[i] != 0) {
                product *= nums[i];
            } else {
                zeroCount++;
            }
        }

        if (zeroCount > 1) {
            return std::vector<int>(n, 0);
        } else if (zeroCount == 1) {
            for (int i = 0; i < n; ++i) {
                if (nums[i] == 0) {
                    output[i] = product;
                    break;
                }
            }
        } else {
            for (int i = 0; i < n; ++i) {
                output[i] = product / nums[i];
            }
        }

        return output;
//      //    int n = nums.size();
//      //    int p = 1, s = 1;
//      //   vector<int> prod(n,0);
//      //   for (int i = 0;i<n;i++) {
//      //      prod[i] = p;
//      //      p*=nums[i];
//      //       cout<<prod[i]<<" ";
//      //   }
//      //    cout<<endl;
//      //  for (int i = n-1;i>=0;i--) {
//      //    prod[i]*=s;
//      //    s*=nums[i];
//      //      cout<<prod[i]<<" ";
//      // }
//      // return prod;
        
//         long x = 1;
//         long y = 1;
//         int count = 0;
//         for(int i : nums){
//             if(i != 0){
//                 count++;
//                 y*=i;
//             }
//            x*=i; 
//         }
//         // int count = 0;
        
//         for(int i =0 ;i<nums.size(); i++){
//             if(nums[i] == 0 && count == 1){
//                 nums[i] = y;
//                 // count++;
//                 continue;
//             }
//             if(nums[i] == 0 && count > 1){
//                 nums[i] = 0;
//                 // count++;
//                 continue;
//             }
        
//             nums[i] = (x/nums[i]);
//         }
        
//         return nums;
        
        
     }
};