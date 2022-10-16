#include <algorithm>

class Solution {
public:
    int end  = 1000000000;
    int count_help(vector<int> &v , long long mid){
        // if(v.size()==1){
        //     if(v[i]<=mid){
        //         count+=1;
        //     }
        //     else{
        //         count+=(v[i]/mid);
        //         count+=1;
        //     }
        // }
        // cout<<mid;
        // long long count = 0;
        // for(int i = 0; i<v.size(); i++){
        //     if(v[i]<=mid){
        //         count+=1;
        //     }
        //     else{
        //         count+=(v[i]/mid);
        //         count+=1;
        //     }
        // }
        long long h = 0;
        // int m = 
         for(int pile : v){
            // performing claculation, take an example 
            // k = 4
            // pile = 10

            // pile / k => 10 / 4 = 2
            // pile % k => 2, so we need to have one more hour to eat remaining bananas left over as remainder 
            // hours = 3;
            long long div = pile /mid;
            h += div;
            if(pile % mid != 0) h++; // if remainder value is not 0, we need to have an extra hour
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        // long long max_ele = 0;
        // for(int i = 0; i<piles.size(); i++){
        //     if(max_ele < piles[i]){
        //         max_ele = piles[i];
        //     }
        // }
//         long long start = 1;
//         // end =  max(max_ele , h);
//         // int possible_ans = 0;
//         // cout<<max_ele<<endl;
//         long long mid = 0;
//         long long temp = 0;
//         while(start<=end){
//             // int temp = 0;
            
//             int mid = start + (end - start) / 2;
//             if(mid!=0)
//                 temp = mid;
//             if(mid ==0)
//             {
//                 return temp;
//             }            // temp2 = mid;
//             cout<<mid<<endl;
//             // if(mid == 0){
//             //     return h;
//             // }
//             long long possible_ans = 0;
            
//             possible_ans = count_help(piles, mid);
//             if(possible_ans<=h){
//                 end = mid-1;
//             }
//             else{
//                 start = mid+1;
//             }
//         }
//         return start;
           long long start = 1;
        long long end = 1000000000;
        
        while(start <= end){
            long long mid = start + (end - start) / 2;
            if(max_hour(piles, mid, h)) end = mid - 1;
            else start = mid + 1;
        }
        return start;
    }
    bool max_hour(vector<int>& v, int k, int h){
        long long ghante = 0;
        for(long long pile : v){
            long long phono_friend = pile / k;
            ghante += phono_friend;
            if(pile % k != 0) ghante++;
        }
        return ghante <= h;
    }
    
};