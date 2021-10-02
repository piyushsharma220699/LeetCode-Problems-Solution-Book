/*
Maximum distinct elements after removing K elements 

Easy Accuracy: 41.87% Submissions: 1278 Points: 2
Given an array containing N elements. The task is to find the maximum number of distinct elements after removing K elements from the array.

Example 1:

Input : Arr[] = {5, 7, 5, 5, 1, 2, 2}, K = 3
Output : 4
Explanation:
Remove 2 occurrences of element 5 and 
1 occurrence of element 2.

Example 2:

Input : Arr[] = {1, 2, 3, 4, 5, 6, 7}, K = 5
Output : 2

Your Task:
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function maxDistinctNum() that takes 
an array (arr), sizeOfArray (n), integer value K, and return the maximum distinct elements after removing K elements. The driver code takes care of the 
printing.

Expected Time Complexity: O(K*logD)  where D is the number of distinct elements in the given array.
Expected Auxiliary Space: O(N).
 

Constraints:
1 = K = N = 106
1 = A[i] = 105

 
*/

#include <bits/stdc++.h>
using namespace std;
int maxDistinctNum(int arr[], int n, int k);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i,k;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout <<maxDistinctNum(arr, n, k)<<"\n";
	  }
	return 0;
}
// } Driver Code Ends



int maxDistinctNum(int arr[], int n, int k)
{
	priority_queue<int> pq;
	map <int , int> m;
	
	for(int i=0 ; i<n; i++){
	    m[arr[i]]++;
	}
	
	for(auto i=m.begin() ; i!=m.end() ; i++){
	    pq.push(i->second);
	}
	
	while(pq.top() != 1 && k>0){
	    int freq = pq.top();
	    k-=freq-1;
	    pq.pop();
	    pq.push(1);
	}
	
	int count = 0;
	
	while(!pq.empty()){
	    pq.pop();
	    count++;
	}
	
	if(k>0){
	    count-=k;
	}
	
	return count;
}

