# Link to problem:  https://leetcode.com/problems/n-queens/

# Problem :The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

#Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

#Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.
#Disclaimer : This might not work in your system as input was handled by leetcode only, you can run this code as it is on the problem link
class Solution:
    def calc(self,cur_row,col,diag1,diag2,matrix,n):
        for i in range(n):
            if col[i]:
                if cur_row-i not in diag1:
                    if cur_row+i not in diag2:
                        matrix[cur_row][i] = 'Q'
                        if cur_row == n-1:
                            temp = []
                            for j in matrix:
                                #print(j)
                                temp.append(''.join(j))
                                #print(temp)
                            self.ans.append(temp[:])
                            matrix[cur_row][i] = '.'
                            temp.clear()
                            continue
                        col[i] = False
                        diag1.add(cur_row-i)
                        diag2.add(cur_row+i)
                        self.calc(cur_row+1,col,diag1,diag2,matrix,n)
                        col[i] = True
                        diag1.discard(cur_row-i)
                        diag2.discard(cur_row+i)
                        matrix[cur_row][i] = '.'
    
    
    
    def solveNQueens(self, n: int) -> List[List[str]]:
        self.ans = []
        col = [True for _ in range(n)]
        diag1 = set()
        diag2 = set()
        matrix = [['.' for i in range(n)] for _ in range(n)]
        self.calc(0,col,diag1,diag2,matrix,n)
        return self.ans
#Input: n = 4
#Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
