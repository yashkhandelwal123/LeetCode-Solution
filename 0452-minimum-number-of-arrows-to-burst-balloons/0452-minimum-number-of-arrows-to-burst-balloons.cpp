#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool compareBalloons(const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1]; 
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), compareBalloons);

        int count = 1;
        int end = points[0][1];
        for (int i = 1; i < points.size(); i++) {
            if (end < points[i][0]) {
                end = points[i][1];
                count++;
            }
        }

        return count;
    }
};
