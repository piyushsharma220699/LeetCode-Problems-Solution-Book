#Link Of Question :https://leetcode.com/problems/longest-uncommon-subsequence-i/
#134.  Longest Uncommon Subsequence I 
#Given two strings a and b, return the length of the longest uncommon subsequence between a and b. If the longest uncommon subsequence does not exist, return -1
#Solution :

class Solution:
    def findLUSlength(self, a: str, b: str) -> int:
        if a!=b:
            return max(len(a),len(b))
        return -1



#Sample Input 1 : a = "aaa", b = "bbb"
#Sample output 1 : 3

#Sample input 2 : a = "aaa", b = "aaa"
#Sample output 1 : -1  