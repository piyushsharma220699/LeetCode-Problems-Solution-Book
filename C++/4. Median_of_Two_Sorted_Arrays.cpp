/*
Problem 4. Median of Two Sorted Arrays

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

*/


class Solution {
public:
    double findMedianSortedArrays(vector<int>& v1, vector<int>& v2) {
        
        if(v1.size()>v2.size()) return findMedianSortedArrays(v2,v1);

        int n=v1.size();
        int m=v2.size();
        int lo=0,hi=n;
        while(lo<=hi)
        {
            int partx= (lo+hi)/2;
            int party= (n+m+1)/2 - partx;

            int max_left_x = (partx==0) ? INT_MIN : v1[partx-1];
            int max_left_y = (party==0) ? INT_MIN : v2[party-1];

            int min_right_x = (partx==n) ? INT_MAX : v1[partx];
            int min_right_y = (party==m) ? INT_MAX : v2[party];

            if(max_left_x <= min_right_y && max_left_y <= min_right_x)
            {
                if((n+m)%2==0) return ((double) max(max_left_x, max_left_y) + min(min_right_x , min_right_y))/2;
                else return max(max_left_x, max_left_y);
            }
            else if(max_left_x > min_right_y) hi=partx-1;
            else  lo= partx+1;
        }
        return 0;
 }
};


/*
Sample input : nums1 = [1,3], nums2 = [2]
Sample output : 2.00000
Explanation: merged array = [1,2,3] and median is 2.

*/
