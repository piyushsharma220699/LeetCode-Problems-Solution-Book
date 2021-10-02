/*Link Of Question : https://leetcode.com/problems/house-robber/
198. House Robber
ou are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.*/
//Solution :

class Solution {
public:

int rob(vector<int>& a) 
{
	int n = a.size();

	if(!n) return 0;
	if(n<2) return a[0];

	a[1] = max(a[0], a[1]);
	for(int i=2;i<n;i++)
		a[i]=max(a[i]+a[i-2],a[i-1]);

	return a[n-1];
}
};

/*
Sample Input : nums = [1,2,3,1]
Sample output : 4
Time Complexity : O(N)
Space Complexity : O(1)
N = size of given array
*/
