class Solution {
public:
    int help(vector<int>& numbers , int target, int current_index){
        int s = 0;
        int end = numbers.size()-1;
        int mid;
        while(s<=end){
            mid = s +(end-s) /2;
            if(numbers[mid] == target && mid!=current_index){
                return mid;
            }
            else if(target<numbers[mid]){
                end = mid-1;
            }
            else{
                s  = mid+1;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
//         int s = 0;
//         int end = numbers.size()-1;
//         int mid = (s +end )/2;
//         while(s<=end){
            
//         }
        for(int i = 0; i<numbers.size(); i++){
            int x = help(numbers , target - numbers[i] , i);
            if(x!= -1){
                v.push_back(i+1);
                v.push_back(x+1);
                return v;
            }
        }
        return v;
    }
};