class Solution {
public:
    int maxArea(vector<int>& height) {
        
        
        int n = height.size();
        
        int i =0 , j =n-1;
        int ans= 0;
        
        while(i<j){
            int x = min(height[i],height[j]);
            ans= max(ans,(j-i)*x);
            
            if(height[i]>height[j]) j--;
            else if(height[i]<height[j]) i++;
            else{
                i++;
                j--;
            }
        }
        return ans;
        
//         int x = 0;
//         for(int i =0 ;i<n; i++){
//             for(int j = i+1; j<n; j++){
//                 int y = min(height[i],height[j]);
//                 x = max(x ,y*(j-i));
//             }
//         }
        
//         return x;
        //o(n^2) approach
//         int n = height.size();
//         vector<int> v1(n) ,v2(n);
        
//         int max_he = 0;
//         int max_he_i = 0;
//         for(int i =0; i<n; i++){
//             if(max_he<height[i]){
//                 max_he = height[i];
//                 max_he_i = i;
//             }
//             v1[i] = max_he;
//         }
//         max_he = 0;
//         for(int i =n-1; i>=0; i--){
//             if(max_he<height[i]){
//                 max_he = height[i];
//             }
//             v2[i] = max_he;
//         }
        
//         int max_water = 0;
//         for(int i =0 ;i<n; i++){
//             int x = min(v1[i],v2[i]);
//             if(max_water<x*x){
//                 max_water = x*x;
//             }
//         }
//         return max_water;
    }
};