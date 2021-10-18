# Link to problem: https://leetcode.com/problems/3sum-with-multiplicity/

# Given an integer array arr, and an integer target, return the number of tuples i, j, k such that i < j < k and arr[i] + arr[j] + arr[k] == target.

class Solution:
    def threeSumMulti(self, arr: List[int], target: int) -> int:
        N=len(arr)
        arr.sort()
        ans=0
        for i in range(N):
            T=target-arr[i]
            j=i+1 ; k=N-1
            while k > j:
                if arr[k]+arr[j]<T:
                    j+=1
                elif arr[k]+arr[j]>T:
                    k-=1
                else:
                    if arr[j]==arr[k]:
                        total=k-j+1
                        ans+=total*(total-1)//2
                        ans%=(int(1e9)+7)
                        break
                    else:
                        cnt1=0
                        cnt2=0
                        st=arr[j];en=arr[k]
                        while arr[j]==st:
                            cnt1+=1
                            j+=1
                        while arr[k]==en:
                            cnt2+=1
                            k-=1
                        ans+=cnt1*cnt2
                        ans%=(int(1e9)+7)
        return ans%(int(1e9)+7)

'''
Input: arr = [1,1,2,2,3,3,4,4,5,5], target = 8
Output: 20

Input: arr = [1,1,2,2,2,2], target = 5
Output: 12
'''
