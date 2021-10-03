/*
Prerequisites:
Graph theory + DSU
Problem Statement:
An undirected graph of n nodes is defined by edgeList, where edgeList[i] = [ui, vi, disi] denotes an edge between 
nodes ui and vi with distance disi. Note that there may be multiple edges between two nodes.
Given an array queries, where queries[j] = [pj, qj, limitj], your task is to determine for each queries[j] whether 
there is a path between pj and qj such that each edge on the path has a distance strictly less than limitj .
Return a boolean array answer, where answer.length == queries.length and the jth value of answer is true if there is
a path for queries[j] is true, and false otherwise.
 
Example 1:
Input: n = 3, edgeList = [[0,1,2],[1,2,4],[2,0,8],[1,0,16]], queries = [[0,1,2],[0,2,5]]
Output: [false,true]
Explanation: The above figure shows the given graph. Note that there are two overlapping edges between 0 and 1 with
distances 2 and 16.
For the first query, between 0 and 1 there is no path where each distance is less than 2, thus we return false for 
this query.
For the second query, there is a path (0 -> 1 -> 2) of two edges with distances less than 5, thus we return true for 
this query.
Example 2:
Input: n = 5, edgeList = [[0,1,10],[1,2,5],[2,3,9],[3,4,13]], queries = [[0,4,14],[1,4,13]]
Output: [true,false]
Exaplanation: The above figure shows the given graph.
 
Constraints:
2 <= n <= 105
1 <= edgeList.length, queries.length <= 105
edgeList[i].length == 3
queries[j].length == 3
0 <= ui, vi, pj, qj <= n - 1
ui != vi
pj != qj
1 <= disi, limitj <= 109
There may be multiple edges between two nodes.
*/

/*
Interesting thing in the problem:
If we think in a simple manner and do some efforts for reducing the time complexity then we will reduce only till O((n+m)*q) but some
more thinking to the problem can reduce it to O(q+n+m) which is required in the given task.
*/

// My code

class Solution {
public:
    
    int fa[100010];
    
    int find_fa(int p){
        int j, k;
        j = p;
        while (fa[j] != -1) j = fa[j];
        while (p != j){
            k = fa[p];
            fa[p] = j;
            p = k;
        }
        
        return j;
    }

    vector<bool> distanceLimitedPathsExist(int n, vector<vector<int>>& el, vector<vector<int>>& qr) {
        vector<pair<int, pair<int, int>>> e;
        vector<pair<pair<int, int>, pair<int, int>>> q;
        vector<bool> res;
        int i, p, x, y, l, lm, j;
        for (i = 0; i < el.size(); ++i) e.push_back({el[i][2],{el[i][0], el[i][1]}});
        sort(e.begin(), e.end());
        for (i = 0; i < n; ++i) fa[i] = -1;        
        for (i = 0; i < qr.size(); ++i) {
            q.push_back({{qr[i][2], i}, {qr[i][0], qr[i][1]}});
            res.push_back(false);
        }
        sort(q.begin(), q.end());
        p = 0;
        for (i = 0; i < q.size(); ++i){
            lm = q[i].first.first;
            j = q[i].first.second;
            while (p < e.size() && e[p].first < lm){
                x = e[p].second.first;
                y = e[p].second.second;
                x = find_fa(x);
                y = find_fa(y);
                if (x != y) fa[y] = x;
                ++p;
            }
            
            x = find_fa(q[i].second.first);
            y = find_fa(q[i].second.second);
            res[j] = (x == y);
        }
        
        return res;
    }
};
