/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int peak_element(MountainArray &mountainArr){
        int start = 0;
        int end = mountainArr.length() -1;
        int mid; 
        while(start<end){
            mid = start +(end-start) /2;
            if(mountainArr.get(mid)<mountainArr.get(mid+1)){
                start = mid+1;
            }
            else if(mountainArr.get(mid)>mountainArr.get(mid+1)){
                end = mid;
            }
            else{
                return start;
            }
            
            
        }
        return start;
    }
    int binary_search(int target, MountainArray &mountainArr , int start,int end){
        int mid;
        while(start<=end){
            mid = start +(end-start)/2;
            if(mountainArr.get(mid)<target){
                start = mid+1;
            }
            else if(mountainArr.get(mid)>target){
                end = mid-1;
            }
            else if(mountainArr.get(mid) == target){
                return mid;
            }
        }
        return -1;
    }
    int binary_reverse(int target, MountainArray &mountainArr , int start,int end){
        int mid;
        while(start<=end){
            mid = start +(end-start)/2;
            if(mountainArr.get(mid)<target){
                end = mid-1;
            }
            else if(mountainArr.get(mid)>target){
                
                start = mid+1;
            }
            else if(mountainArr.get(mid) == target){
                return mid;
            }
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
//         int start = 0;
//         int end = mountainArr.length() -1;
//         int mid; 
//         while(start<end){
//             mid = start +(end-start) /2;
//             if(mountainArr.get(mid) == target){
//                 return mid;
//             }
//             else if(mountainArr.get(mid)<mountainArr.get(mid+1)){
//                 start = mid+1;
//             }
//             else if(mountainArr.get(mid)>mountainArr.get(mid+1)){
//                 end = mid;
//             }
            
            
//         }
        int max_end_index = peak_element(mountainArr);
        cout<<max_end_index<<endl;
        int x = binary_search(target ,mountainArr , 0,max_end_index );
        if(x!= -1){
            return x;
        }
        int y  = binary_reverse(target ,mountainArr , max_end_index,mountainArr.length()-1);
        // cout<<binary_search(target ,mountainArr , 0,max_end_index )<<endl;
        // cout<<binary_search(target ,mountainArr , max_end_index,mountainArr.length()-1);
        return y;
        // return -1;
    }
};