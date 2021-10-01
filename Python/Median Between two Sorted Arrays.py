class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        num = nums1 + nums2
        num.sort()
        if(len(num)%2 == 0):
            return (num[len(num)//2-1] + num[len(num)//2 ])/2
        else:
            return (num[len(num)//2])
