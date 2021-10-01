/*  

Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals,
and return an array of the non-overlapping intervals that cover all the intervals in the input.

*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        vector<int>t=intervals[0];
        for(auto i:intervals){
            if(i[0]<=t[1]){
                t[1]=max(i[1],t[1]);
            }
            else{
                ans.push_back(t);
                t=i;
            }
        }
        ans.push_back(t);
        return ans;
        
        }
};

/* sample input and output */
/*
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
*/
