 #include <math.h>
#define ll long long
#define mod 10e9+7
class Solution {
public:
    
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        
//         int M = 1000000007;
//         int n = arr.size();
        
//         int x = n*k;
//         int a[x];
//         int count = 0;
//         int check = 0;
//         while(count!= x){
//             a[count] = arr[check];
//             check++;
//             count++;
//             if(check == n)
//             check = 0;
//         }
//         // for(int i = 0; i+k<x;i++){
//         // 	a[i] = arr[i];
//         // 	a[i+k-1] = a[i];
//         // 	// cout<<a[i]<<" ";
//         // }
//         // for(auto i : a){
//         // 	cout<<i<<" ";
//         // }

//         ll maxsum = INT_MIN;
//         ll curr = 0;
//         for(int i = 0; i<x; i++){
//             curr+=a[i];
            
//             if(curr<0)
//             curr = 0;

//             maxsum = max(maxsum,curr);
            
//         }
//         // if(maxsum < 0){
//         //     return maxsum;
//         // }

//         return maxsum % M;
        
        long long ans=0,curr=0,last;
        // Apply kadane's algo by traversing over the array two times to know the pattern
        // If at the end of second traversal, if sum (curr variable is storing the sum) is greater than what we get from 1st travresal then this means that (k-2) arrays when concatenated will always increase our sum
        // else our answer will be from first 2 arrays or traversal
        for(int i=1;i<=k && i<=2;i++){
            last=curr;  // storing sum of 1st traversal
            for(auto ele:arr){
                curr=curr+ele;
                if(curr<ele){
                    curr=ele;
                }
                ans=(max(ans,curr))%1000000007;
                curr%=1000000007;
            }
        }
        // let the sums we got after 1st and 2nd traversal are 5 and 10 respectively.
        // Here, there is increase of 5 in sum(10-5=5). So when the remaining k-2 arrays are concatenated, the increase in sum will (k-2)*5
        if(curr-last>0 && k>1){
            ans=(ans+((curr-last)*(k-2))%1000000007)%1000000007;
        }
	return ans;

	
    }
};