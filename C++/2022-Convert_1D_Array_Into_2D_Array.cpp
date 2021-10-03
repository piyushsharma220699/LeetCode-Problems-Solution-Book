class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> v(m);
        if(m*n!=original.size())
        {
            vector<vector<int>> x;
            return x;
        }
        int j=0,k=0;
        for(int i=0;i<original.size();i++)
        {
            if(j<m && k<n)
            {
                v[j].push_back(original[i]);
                k++;
            }
            if(k==n)
            {
                j++;
                k=0;
            }
        }
        return v;
    }
};

/* 
Sample input : [1,2,3,4], m = 2, n = 2
Sample output : [[1,2],[3,4]]
Time Complexity : O(s)
Space Complexity : O(s)
s = size of input array
*/
