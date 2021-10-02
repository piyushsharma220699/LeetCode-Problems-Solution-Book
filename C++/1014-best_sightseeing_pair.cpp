/*
Question  link : https://leetcode.com/problems/best-sightseeing-pair/

1014. You are given an integer array values where values[i] represents the value of the ith sightseeing spot. Two sightseeing spots i and j have a distance j - i between them.
The score of a pair (i < j) of sightseeing spots is values[i] + values[j] + i - j: the sum of the values of the sightseeing spots, minus the distance between them.
Return the maximum score of a pair of sightseeing spots.

*/

//Solution

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size(), ans = 0, xi = values[0];
        
        /*values[i] + values[j] + i - j can be re written as : values[i]+i + values[j]-j. Let xi = values[i]+i and xj = values[j]-j.
          Since, we need to maximize the answer, we find max(values[i]+i) over all values[j]-j. One more constraint is i < j. 
          That leaves us with only 1 for loop.
        */
        for(int j = 1; j < n; j++){
            ans = max(ans, xi + values[j]-j);

            //Keep on calculating max xi values before calculating the xj values which needs to be at the right of the chosen xi value.
            xi = max(xi, values[j]+j);
        }
        return ans;
    }
};

/* 
Sample input : [8,1,5,2,6]
Sample output : 11
Time Complexity : O(n)
Space Complexity : O(1)
n = size of given array
 */