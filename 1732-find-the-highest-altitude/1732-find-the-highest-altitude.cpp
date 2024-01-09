class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_al = 0;
        int sum = 0;
        for(int i= 0;i<gain.size();i++){
            sum+=gain[i];
            max_al = max(max_al,sum);
            cout<<sum<<" ";
        }
        return max_al;
    }
};