class Solution {
public:
    int maxPoints(vector<vector<int>>& pt) {
//         if(points.size() == 1){
//             return 1;
//         }
//         int ans = 1;
//         for(int i = 0; i<points.size(); i++){
//             map<double,int> m;
//             for(int j = i+1; j<points.size(); j++){
//                 double x = points[j][1] - points[i][1];
//                 double y = points[j][0] - points[i][0];
//                 double s = x/y;
//                 if(x<0 && y == 0){
//                     m[s]++;
//                     // continue;
//                 }else
//                     m[s]++;
//             }
//             int temp = 0;
//             for(auto i:m)
//                 temp = max(temp, i.second+1);    // +1 for the current point(point itself)
//             ans = max(temp, ans);
//         }
        
        
//         return ans;
        
        
        
        
        int ans=1;
        
        int n=pt.size();
        
        
        for(int i=0;i<n-1;i++){
            
            map<double,int> mp;
            
            for(int j=i+1;j<n;j++){
                
                double x = (double)(pt[j][1]-pt[i][1])/(double)(pt[j][0]-pt[i][0]);
                if(pt[j][1]-pt[i][1]<0 &&(pt[j][0]-pt[i][0])==0 ) //infinite slop for Perpendicular line
                mp[abs(x)]++; 
                else
                    mp[x]++;
            }
            
            // same slope w.r.t.that selected point
            int temp = 0;
            for(auto it:mp)
                temp = max(temp, it.second+1);    // +1 for the current point(point itself)
            ans = max(temp, ans);
        }
        return ans;
    }
};